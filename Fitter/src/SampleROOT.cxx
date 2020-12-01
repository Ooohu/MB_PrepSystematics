#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <memory>

#include "Event.h"
#include "Consts.h"
#include "SampleROOT.h"
#include "MsgLog.h"

#include "TH1D.h"
#include "TFile.h"
#include "TTree.h"
#include "TROOT.h"
#include "TRandom3.h"
#include "TDirectory.h"
#include "TSystem.h"
#include "FuncStopwatch.h"





using namespace std;

Sample::Sample()
{
  fBins.clear();
  fData.clear();
  fHistContent.clear();
  fHistError.clear();
  fHistError.resize(0);
  fHistSumw2.clear();
  fShapes2Fit.clear();
  fHistShapeMap.clear();
  fHistSumw2ShapeMap.clear();
  fHistBackgroundShapeMap.clear();

  fDataFromNtuple = false;
  fTolerance = 0.0001;
  fWC.clear();
  fNevents=0;
  fNeedUpdate = true;
  fFillBkgHists = true;
  fDownsample = 1;

  // shape fit binning
  vector<Double_t> binsR = {0.00, 247.30, 311.58, 356.67, 392.57, 422.88, 
                          449.38, 473.08, 494.61, 514.41, 532.80, 550.00};
  vector<Double_t> binsUZ= {-1. , -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, 
                            -0.2, -0.1,  0. ,  0.1,  0.2,  0.3,  0.4,  0.5,  
                            0.6,  0.7,  0.8,  0.9,  1. };
  vector<Double_t> binsTRWMZb = {0.0, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5, 9.0, 9.5, 
                                10.0, 10.5, 11.0, 11.5, 12.0, 12.5, 13.0, 13.5, 
                                14.0, 19.0};
  fBinsShapeMap["R"]          = binsR;
  fBinsShapeMap["cosTheta"]   = binsUZ;
  fBinsShapeMap["binsTRWMZb"] = binsTRWMZb;


}

Sample::~Sample()
{
}

shared_ptr<Sample> Sample::Clone()
{
  shared_ptr<Sample> new_sample = make_shared<Sample>();
  new_sample->SetName(fName);
  new_sample->SetInputNtuple(fInputFileName);
  new_sample->SetNtupleID(fNtupleID);
  new_sample->SetVerbosity(fVerbosity);
  new_sample->SetBins(fBins);
  for (unsigned int i=0; i<fWC.size(); i++)     
    new_sample->AddWeightCalc(fWC.at(i)->Clone());
  for (unsigned int i=0; i<fFilter.size(); i++) 
    new_sample->AddFilter(fFilter[i]);

  new_sample->SetDownsample(fDownsample);

  new_sample->FillVector();
  new_sample->FillHistogram();

  return new_sample;
}

void Sample::AddWeightCalc(shared_ptr<WeightCalc> wc)
{ 
  fWC.push_back(wc); 
  fNeedUpdate = true;
  map<string, Double_t > parmap = wc->GetParMap();
  fWeightParMap.insert(parmap.begin(), parmap.end() );
}

void Sample::FillVector()
{

  MsgDebug(2, " ");
  TFile* fIn = new TFile(fInputFileName.c_str());
  if (fIn->IsOpen()==false) {
    MsgError( "ERROR: Error opening input file ... (" + fInputFileName + ")" );
    exit(1);
  }
  TTree* T = (TTree*) fIn->Get(Form("h%d",fNtupleID)); // get the tree
  if(T==NULL){
    MsgError(MsgLog::Form( "ERROR: Cannot find tree h%d in %s", fNtupleID, fInputFileName.c_str() ) );
    fIn->ls();
    exit(1);
  }

  Float_t iflux, ibkgd, nuchan, inno, enugen, energy, nuleng, parid, wgt, ispi0, isdirt;
  Float_t R=-9999, cosTheta=-9999, TRWMZb=-9999;
  map<string, Float_t*> shapeVarsPtr = {{"R", &R}, {"cosTheta", &cosTheta}, {"TRWMZb", &TRWMZb}};

  T->SetBranchAddress("iflux"   , &iflux);
  T->SetBranchAddress("ibkgd"   , &ibkgd);
  T->SetBranchAddress("nuchan"  , &nuchan);
  T->SetBranchAddress("inno"    , &inno);
  T->SetBranchAddress("enugen"  , &enugen);
  T->SetBranchAddress("energy"  , &energy);
  T->SetBranchAddress("nuleng"  , &nuleng);
  T->SetBranchAddress("parid"   , &parid);
  T->SetBranchAddress("wgt"     , &wgt);
  T->SetBranchAddress("ispi0"   , &ispi0);
  T->SetBranchAddress("isdirt"  , &isdirt);
  // set branch address of the shape variables if we set it
  for(string shape2Fit : fShapes2Fit){
    if(T->SetBranchAddress(shape2Fit.c_str(), shapeVarsPtr[shape2Fit]) < 0){
      MsgError(MsgLog::Form("ERROR: No %s branch in %s!", shape2Fit.c_str(), fInputFileName.c_str())  );
      //T->Show(0);
      //exit(-1);
    }
  }



  Int_t nevents = T->GetEntries();

  fData.clear();

  Int_t nskip=0;
  for ( unsigned int ifilt=0; ifilt < fFilter.size(); ifilt++ ) 
    fFilter[ifilt]->Reset();

  TRandom3 rnd;
  rnd.SetSeed(1);
  Long64_t nentries = T->GetEntries();
  for (Long64_t i=0;i<nentries;i++) {
    T->GetEntry(i);
    Event mb;
    
    mb.iflux   ( round(iflux)     );  // QQ: What's iflux?
    mb.ibkgd   ( round(ibkgd)     );  // QQ: The same as the background?
    mb.nuchan  ( round(nuchan)    );
    mb.inno    ( round(inno)      );
    mb.enugen  ( Double_t(enugen) );
    mb.energy  ( Double_t(energy) );
    mb.nuleng  ( Double_t(nuleng) );
    mb.parid   ( round(parid)     );
    mb.wgt     ( Double_t(wgt)    );
    mb.ispi0   ( round(ispi0)     );
    mb.isdirt  ( round(isdirt)    );
    mb.R       ( Double_t(R)      );
    mb.cosTheta( Double_t(cosTheta));
    mb.TRWMZb  ( Double_t(TRWMZb));

    bool keep = true;
    for ( unsigned int ifilt=0; ifilt < fFilter.size(); ifilt++ ) {
      if ( fFilter[ifilt]->Cut(mb) ) keep = false;
    }
    if (fDownsample<1 && fDownsample>0) {
      if (rnd.Uniform()>fDownsample) keep=false; 
       mb.wgt(mb.wgt()/fDownsample); //boost weight of kept events
    }
    if ( keep ) fData.push_back(mb);
    else nskip++;
  
  }

  fIn->Close();
  fNevents = fData.size();

  if ( nevents != nskip+fNevents ) {
    MsgWarning(MsgLog::Form("Warning:: %d found in %s but only %d read!",nevents, fInputFileName.c_str(), fNevents+nskip) );
  }
}

void Sample::FillHistogram(bool useweights, bool fast_hist)
{
  // fill histogram. fast_hist is not supported yet. The goal
  // of fast hist is to save the histogram in case we will need
  // it later on.

  StartWatch("Sample::FillHistogram " + fName);

  // Check bin size
  // if binSize <=0 -> Set at 0 and return
  // if binSize ==1 -> Give warning and continue
  // else: set fHistContent and fHistSumw2 bin size
  //       as well as vectors inside fHistShapeMap 
  MsgDebug(2, MsgLog::Form("fBins.size()=%d", fBins.size()));
  if (fBins.size() <= 0 ) {
    fHistContent.clear();
    fHistContent.resize(0);
    fHistSumw2.clear();
    fHistSumw2.resize(0);
    for(auto fHistShape: fHistShapeMap){  //reset the shape histograms if exist
      fHistShape.second.clear();
      fHistShape.second.resize(0);
    }
    MsgWarning(MsgLog::Form("fBins.size() = %d <=0", fBins.size()));
    return;
  }
  if (fBins.size()==1) 
    MsgWarning("fBins.size()==1! It shouldn't be");

  // binSize > 1: set to right size and default at 0
  if(fHistContent.size()!=fBins.size()-1) fHistContent.resize(fBins.size()-1);
  if(fHistSumw2.size() != fBins.size()-1) fHistSumw2.resize(fBins.size()-1);
  fill(fHistContent.begin(), fHistContent.end(), 0);
  fill(fHistSumw2.begin()  , fHistSumw2.end()  , 0);

  // set the shape hists to right size
  for(string shape2Fit: fShapes2Fit){
    if(fHistShapeMap[shape2Fit].size() != fBinsShapeMap[shape2Fit].size()-1)
      fHistShapeMap[shape2Fit].resize(fBinsShapeMap[shape2Fit].size()-1);
    if(fHistSumw2ShapeMap[shape2Fit].size() != fBinsShapeMap[shape2Fit].size()-1)
      fHistSumw2ShapeMap[shape2Fit].resize(fBinsShapeMap[shape2Fit].size()-1);
    fill(fHistShapeMap[shape2Fit].begin(), fHistShapeMap[shape2Fit].end(), 0);
    fill(fHistSumw2ShapeMap[shape2Fit].begin(), fHistSumw2ShapeMap[shape2Fit].end(), 0);
  }

  // save parameters of each weight calc into fWeightParMap 
  fUnderflow = 0;
  fOverflow = 0;
  fWeightParMap.clear();
  string wghlist="";        // key for fast_hist
  for (unsigned int i=0;i<fWC.size();i++){
    map<string, Double_t > parmap = fWC.at(i)->GetParMap();
    fWeightParMap.insert(parmap.begin(), parmap.end() );
    if (fast_hist) {
      map<string, Double_t >::const_iterator pmit=parmap.begin();
      while (pmit!=parmap.end()) {
        string tmpstr(Form("%s%9.6e",(pmit->first).c_str(),pmit->second));
        wghlist+=tmpstr;
        pmit++;
      }
    }
  }

  // ---------------------------------------
  // loop over events and fill the histogram
  // ---------------------------------------
  // if fast_hist, then try to grab previous saved ones
  if (fast_hist ) { 
    map<string, vector<Double_t> >::const_iterator fhit=fFastHist.find(wghlist);
    if (fhit!=fFastHist.end()) {
      fHistContent=fFastHist[wghlist];
      fNeedUpdate = false;
      return;
    }
  }
  // standard: fill event into fHistContent
  for (unsigned int i=0;i<fData.size();i++) {
    Event   mb      = fData[i];
    Double_t energy = mb.energy();
    Int_t   bin     = FindBin(energy);

    // get weight from each WeightCalc
    Double_t weight_calc = 1.; 
    if (useweights && fWC.size()) {
      for (unsigned int i=0;i<fWC.size();i++) { 
        weight_calc *= fWC.at(i)->GetWeight(mb);
      }
    }

    // fill into corresponding bin or underflow, overflow
    if      ( bin == Consts::kUnderflow ) fUnderflow += mb.wgt()*weight_calc;
    else if ( bin == Consts::kOverflow  ) fOverflow  += mb.wgt()*weight_calc;
    else {
      fHistContent[bin] += mb.wgt() * weight_calc;
      fHistSumw2[bin]   += mb.wgt() * weight_calc * mb.wgt() * weight_calc;

      // Fill in shape (shape has the same EnuQE range with others)
      for(string shape2Fit: fShapes2Fit){
        Double_t val = mb.getDouble(shape2Fit);
        Int_t binShape= FindBin(val, shape2Fit);
        if(binShape==Consts::kUnderflow){
          MsgError(MsgLog::Form("Shape %s has underflow %.2f", shape2Fit.c_str(), val));
        }
        else if(binShape==Consts::kOverflow){
          MsgError(MsgLog::Form("Shape %s has overflow %.2f", shape2Fit.c_str(), val));
        }
        else{
          fHistShapeMap[shape2Fit][binShape]      += mb.wgt() * weight_calc;
          fHistSumw2ShapeMap[shape2Fit][binShape] += pow(mb.wgt() * weight_calc, 2);
        }
      } // end of fill in shape
    }



  }

  fDataFromNtuple = true;
  fNeedUpdate = false;


  if (fast_hist ) fFastHist[wghlist]=fHistContent;

  if (fFillBkgHists) FillBkgHists();
  StopWatch("Sample::FillHistogram " + fName);

}

void Sample::FillBkgHists(bool useweights)
{
  // Fill the background histgorams, parent histograms, as well as the shape background histograms
  MsgDebug(2, MsgLog::Form("fBins.size=%d", fBins.size()));
  if (fBins.size() == 0 ) {
    return;
  }
  StartWatch("Sample::FillBkgHists " + fName);

  // ---------------
  // initialization
  // ---------------
  fHistParent.clear();
  vector<Double_t> vec(fBins.size()-1);
  fHistParent.insert(make_pair(Consts::kPiPlus,  vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kPiMinus, vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kKPlus,   vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kKMinus,  vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kK0L,     vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kMuPlus,  vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kMuMinus, vector<Double_t>(fBins.size()-1)));
  fHistParent.insert(make_pair(Consts::kUnknown, vector<Double_t>(fBins.size()-1)));

  fHistBackground.clear();
  for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<=Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
    vector<Double_t> bvec;
    bvec.resize(fBins.size()-1);
    fHistBackground.insert(make_pair(Consts::BackgroundIterToEnum(i), bvec));
    //    if ( IsBackground(e, Consts::BackgroundIterToEnum(i)) ) return Consts::BackgroundIterToEnum(i);
  }

  // initialize fHistBackgroundShapeMap
  fHistBackgroundShapeMap.clear();
  for(string shape:fShapes2Fit){
      map<Consts::Background::Type, vector<Double_t> > fhistBGShape; // temporary container
      for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<=Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
        vector<Double_t> bvec;
        bvec.resize(fBinsShapeMap[shape].size()-1);
        fhistBGShape.insert(make_pair(Consts::BackgroundIterToEnum(i), bvec));
      }
      fHistBackgroundShapeMap[shape] = fhistBGShape;
  }

  // ---------------------------------------
  // loop over events and fill the histogram
  // ---------------------------------------
  for (unsigned int i=0;i<fData.size();i++) {
    Event   mb      = fData[i];
    Double_t energy = mb.energy();
    Int_t   bin     = FindBin(energy);
    auto backgroundType = WhichBackground(mb);

    // get weight ready
    Double_t weight_calc = 1.;
    if (useweights && fWC.size()) {
      for (unsigned int i=0;i<fWC.size();i++) { 
       weight_calc *= fWC.at(i)->GetWeight(mb);
      }
    }

    // fill in background 
    if ( bin != Consts::kUnderflow && bin != Consts::kOverflow) {
      // For parent
      auto pit = fHistParent.find(Consts::ParticleIDtoEnum(mb.parid()));  // find parent particle
      if ( pit != fHistParent.end() )
        fHistParent[Consts::ParticleIDtoEnum(mb.parid())].at(bin) += mb.wgt()*weight_calc;
      else
        MsgWarning(MsgLog::Form("No histogram available for parent type %d", mb.parid()));


      // For background
      auto pit2 = fHistBackground.find(backgroundType);
      if ( pit2 != fHistBackground.end() )
        fHistBackground[backgroundType].at(bin) += mb.wgt()*weight_calc;
      else 
        MsgWarning(MsgLog::Form("No histogram available for background %s", Consts::GetBackgroundName(backgroundType).c_str()));

      // fill in shapeName
      Double_t val;
      Int_t binShape;
      for(string shapeName: fShapes2Fit){
        val = mb.getDouble(shapeName);
        binShape = FindBin(val, shapeName);
        if( binShape==Consts::kUnderflow || binShape==Consts::kOverflow) continue;
        auto pit2 = fHistBackgroundShapeMap[shapeName].find(backgroundType);
        if(pit2 != fHistBackgroundShapeMap[shapeName].end())
          fHistBackgroundShapeMap[shapeName][backgroundType].at(binShape) += mb.wgt()*weight_calc;
        else
          MsgWarning(MsgLog::Form("No histogram available for shape background %s", Consts::GetBackgroundName(backgroundType).c_str()));
      }
    } // end of overflow/underflow



  }

  StopWatch("Sample::FillBkgHists " + fName);
//cout << "Fill BkgHists 5" << endl;


}

void Sample::FillHistogram(vector<Double_t> data)
{
  //function fills the histogram using provided vector
  //the binning has to be provided prior to calling this function using SetBins()
 
  //Function fills the histogram using the data input from the ntuple 
  MsgDebug(2, " ");
  if (fBins.size() <= 0 ) {
    fHistContent.clear();
    fHistContent.resize(0);
    fHistSumw2.clear();
    fHistSumw2.resize(0);
    return;
  }

  if (data.size() != fBins.size()-1) {
    MsgWarning( "Warning::Error while filling histogram for " + fName);
    MsgWarning( MsgLog::Form("Data vector size is %d while number of bins is %d", data.size(), fBins.size()-1));
  }

  fHistContent.clear();
  fHistContent.resize(fBins.size()-1);
  fHistSumw2.clear();
  fHistSumw2.resize(fBins.size()-1);

  for (unsigned int i = 0; i<data.size();i++) {
    fHistContent.at(i) = data.at(i);
    fHistSumw2.at(i)   = data.at(i);
  }
  fDataFromNtuple = false;
  fNeedUpdate = false;
}

void Sample::SetErrors(vector<Double_t> err)
{
  if ( err.size() != fHistContent.size() ) {
    MsgWarning(MsgLog::Form("Size mismatch between error vector (%d) and data vector (%d)", err.size(), fHistContent.size()));
    MsgError("Errors for sample " + fName + " not set correctly!");
    return;
  }

  fHistError=err;
}

void Sample::Scale(Double_t scale_factor)
{
  // Scale the histogram with the scale_factor
  unsigned nbin = fHistContent.size();
  for (unsigned int i=0; i < nbin; i++) {

    fHistContent.at(i) *= scale_factor;
    fHistSumw2.at(i)   *= scale_factor;
  }
  map<Consts::ParticleCode, vector<Double_t> >::iterator it = fHistParent.begin();
  while ( it != fHistParent.end() ) {
    for (unsigned int i=0; i < nbin; i++) (it->second).at(i) *= scale_factor;
      it++;
  }
  map<Consts::Background::Type, vector<Double_t> >::iterator it2 = fHistBackground.begin();
  while ( it2 != fHistBackground.end() ) {
    for (unsigned int i=0; i < nbin; i++) (it2->second).at(i) *= scale_factor;
      it2++;
  }
  fUnderflow *= scale_factor;
  fOverflow  *= scale_factor;

  // scale the shape hist: fHistShapeMap, fHistSumw2ShapeMap, fHistBackgroundShapeMap
  for(string shapeName : fShapes2Fit){
    for(unsigned int i=0; i<fHistShapeMap[shapeName].size(); ++i){
      fHistShapeMap[shapeName].at(i)      *= scale_factor;
      fHistSumw2ShapeMap[shapeName].at(i) *= scale_factor;
    }
    for(auto& fHistBackgroundShape :fHistBackgroundShapeMap[shapeName]){
      for(unsigned int i = 0; i<fHistBackgroundShape.second.size();i++ ){
        fHistBackgroundShape.second.at(i) *= scale_factor;
      }
    }
  }
}

void Sample::Update()
{
  if (fBins.size() == 0 ) return;
  //Consts::EUpdateType utype = Consts::kNoUpdate;

  // misc
  MsgDebug(2, fName);
  StartWatch("Sample::Update " + fName);

  // loop through each weighting calculation
  for (unsigned int i=0;i<fWC.size();i++) {

    // if only a scaling is needed, do the Scale
    if ( fWC.at(i)->KindOfUpdate(fWeightParMap) == Consts::kScaleUpdate) {
      Scale(fWC.at(i)->GetRescalingFactor(fWeightParMap));
      map<string, Double_t > p = fWC.at(i)->GetParMap();
      map<string, Double_t >::const_iterator pit = p.begin();
      while ( pit != p.end() ) {
        fWeightParMap[pit->first] = pit->second;
        MsgDebug(2, "fWeightParMap[" + pit->first + "] has been scaled" );
        pit++;
      }
    }

    // full update is needed
    if ( fWC.at(i)->KindOfUpdate(fWeightParMap) == Consts::kFullUpdate) {
      MsgDebug(2, fWC.at(i)->GetName() + " needs full update (sample " + fName + ")");
      //FillHistogram(true,true);
      if(fWC.at(i)->GetNParameters()<=2){      //currently don't save for 3 parameters
        FillHistogram(true,true);              // useweight=true, fast_hist=false
      }
      else{
        FillHistogram(true,false);
      }
      StopWatch("Sample::Update " + fName);
      return;
    }

    // no update needed
    if ( fWC.at(i)->KindOfUpdate(fWeightParMap) == Consts::kNoUpdate) {
      MsgDebug(2, fWC.at(i)->GetName() + " needs no update (sample " + fName + ")");
    }
  } // end of for(fWC)
  StopWatch("Sample::Update " + fName);

}

bool Sample::NeedUpdate()
{
  //Check if anything changed
  for (unsigned int i=0; i<fWC.size(); i++)
    if ( fWC.at(i)->ParametersChanged() ) fNeedUpdate = true;
  
  return fNeedUpdate;
} 

Consts::Background::Type Sample::WhichBackground(Event &e)
{
  for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<=Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
    if ( IsBackground(e, Consts::BackgroundIterToEnum(i)) ) return Consts::BackgroundIterToEnum(i);
  }
  MsgError("No background is found!");
  return Consts::Background::kLast;

}

bool Sample::IsBackground(Event &e, Consts::Background::Type b)
{

  switch ( b ) {
    case Consts::Background::kIsPi0:
    if ( e.ispi0() == 1 && e.isdirt() == 0) return true;
    break;
    case Consts::Background::kIsDirt:
    if ( e.isdirt() == 1 ) return true;
    break;
    case Consts::Background::kIsDelta:
    if ( e.nuchan() == 94 && e.isdirt() == 0 ) return true;
    break;
    case Consts::Background::kPiPlus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kPiPlus)  && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 && 
      (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kPiMinus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kPiMinus) && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kKPlus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kKPlus)   && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kKMinus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kKMinus)  && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kK0L:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kK0L)     && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kMuPlus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kMuPlus)  && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kMuMinus:
    if ( e.parid() ==  Consts::EnumToParticleID(Consts::kMuMinus) && e.ispi0() == 0 && e.isdirt() == 0 && e.nuchan() != 94 &&
     (e.inno() == 3 || e.inno() == 4) ) return true;
      break;
    case Consts::Background::kUnknown:
    bool is_unknown=true;
    for ( Int_t i = Consts::BackgroundIter(Consts::Background::kFirst);i<Consts::BackgroundIter(Consts::Background::kLast); i++ ) {
      if ( Consts::BackgroundIterToEnum(i) != Consts::Background::kUnknown && 
        IsBackground(e, Consts::BackgroundIterToEnum(i)) ) is_unknown = false;
    }
  return is_unknown;
  break;
};

return false;  
}
void Sample::Rebin(vector<Int_t> rebin_vector)
{
  //First check rebin_vector
  //Vector should have same number of elements as the current number of bins
  //If rebin_vector is 0 the bin will be excluded

  for (unsigned int i=0; i<rebin_vector.size(); i++) rebin_vector.at(i)=abs(rebin_vector.at(i));
    Int_t badvector = 0;
  if ( rebin_vector.size() != fHistContent.size() ) badvector = 1;
  Int_t last_non_zero_val=0;
  Int_t last_non_zero_bin=0;
  for (unsigned int i=0; i<rebin_vector.size(); i++) {
    if ( rebin_vector.at(i) < 0 ) badvector += 100; 
    if (!badvector && rebin_vector.at(i) != 0) {
      if ( rebin_vector.at(i) != last_non_zero_val && rebin_vector.at(i) != last_non_zero_val + 1 ) 
        badvector += 10000;

      last_non_zero_val = rebin_vector.at(i);
      last_non_zero_bin = i;
    }
    else if ( last_non_zero_val && (i<rebin_vector.size()-1) && rebin_vector[i+1] != 0 ) badvector += 1000000;
  }
  if ( badvector ) {
    MsgWarning(MsgLog::Form("Sample::Invalid rebin vector. Error code = %d", badvector ));
    MsgWarning("Sample:: " + fName + " sample not rebinned." );
    return;
  }
  Int_t n_new_bins = last_non_zero_val;
  Int_t n_old_bins = fHistContent.size();

  //Form new bins vector
  vector<Double_t> newbins;
  Int_t last_rebin = 0;
  for (unsigned int i=0; i<fBins.size()-1;i++) {
    if ( rebin_vector.at(i) != 0 && rebin_vector.at(i) != last_rebin) {
      newbins.push_back(fBins.at(i));
      last_rebin = rebin_vector.at(i);
    }
  }
  if ( last_non_zero_bin ) newbins.push_back(fBins.at(last_non_zero_bin+1));

  fBins.clear();
  fNBins=newbins.size();
  fBins.resize(fNBins);
  for (unsigned int i=0;i<newbins.size();i++) fBins.at(i) = newbins[i];

  //If data is from ntuple just refill the histograms
  if (fDataFromNtuple) {
    FillVector();
    FillHistogram();
  } else {
    vector<Double_t> new_hist(n_new_bins);
    for ( Int_t i = 0; i < n_old_bins; i++ ) {
      if ( rebin_vector.at(i) != 0 ) {
       new_hist[rebin_vector.at(i)] += fHistContent[i];
     }
   }
   fHistContent.clear();
   fHistContent = new_hist;
 }
 if (fFastHist.size()>0) {
   fFastHist.clear();
   MsgDebug(2, "Cleared fast hist map after rebinning ");
 }




}

Int_t Sample::FindBin(Double_t val) // find energy bin
{
  if ( val < fBins.at(0) )                   return Consts::kUnderflow;
  else if ( val >= fBins.at(fBins.size()-1) ) return Consts::kOverflow;

  /*  
  Int_t bin=0;
  while (val >= fBins.at(bin)) bin++;
  bin--;
  return bin;
  */

  Double_t *mybin=std::lower_bound(&fBins.at(0),&fBins.at(0)+fNBins,val);
  if ( (mybin != &fBins.at(0) + fNBins) && (*mybin == val) )
    return (mybin - &fBins.at(0));
  else
    return ( mybin - &fBins.at(0) - 1);

}

Int_t Sample::FindBin(Double_t val, string shapeName) // find shape bin
{
  vector<Double_t>& bins = fBinsShapeMap[shapeName]; // set an  alias for easy of use
  int nbins = bins.size();
  if ( val < bins.at(0) )                   return Consts::kUnderflow;
  else if ( val >= bins.at(bins.size()-1) ) return Consts::kOverflow;

  Double_t *mybin=std::lower_bound(&bins.at(0),&bins.at(0)+nbins,val);
  if ( (mybin != &bins.at(0) + nbins) && (*mybin == val) )
    return (mybin - &bins.at(0));
  else
    return ( mybin - &bins.at(0) - 1);

}




TH1D* Sample::GetHistogram(string varName) // varName = "energy"
{

  if(varName=="energy"){
    //  UInt_t Nbins=fBins.size();
    if (fNBins>0) {
      Float_t bins[fNBins];
      for (UInt_t i=0;i<fNBins;i++) bins[i]=fBins.at(i);
      TH1D* h=new TH1D(fName.c_str(),fName.c_str(),fNBins-1,bins);
      for (UInt_t i=0;i<fNBins-1;i++) h->SetBinContent(i+1,fHistContent.at(i));
      h->SetBinContent(0,fUnderflow);
      h->SetBinContent(fNBins+1,fOverflow);
      return h;
    }
  }
  else if(count(fShapes2Fit.begin(), fShapes2Fit.end(), varName)==1){
    UInt_t nbins = fBinsShapeMap[varName].size();
    if (nbins>0) {
      Float_t bins[nbins];
      string hName = fName + " " + varName;
      for (UInt_t i=0;i<nbins;i++) bins[i]=fBinsShapeMap[varName].at(i);
      TH1D* h=new TH1D(hName.c_str(),hName.c_str(),nbins-1,bins);
      for (UInt_t i=0;i<nbins-1;i++) h->SetBinContent(i+1,fHistShapeMap[varName].at(i));
      return h;
    } 
  }
  MsgError(("Cannot GetHistogram for variable "+varName).c_str());
  return 0;
}

TH1D* Sample::GetHistogram(string name, vector<Double_t> vec, vector<Double_t> err)
{

  //UInt_t Nbins=fBins.size();
  if (fNBins>0) {
    Float_t bins[fNBins];
    for (UInt_t i=0;i<fNBins;i++) bins[i]=fBins.at(i);
      TH1D* h=new TH1D(name.c_str(),name.c_str(),fNBins-1,bins);
    for (UInt_t i=0;i<fNBins-1;i++) {
      h->SetBinContent(i+1,vec.at(i));
      if (err.size() == vec.size()) h->SetBinError(i+1,err.at(i));
    }
    return h;
  }
  return 0;
}

TH1D* Sample::GetHistogram(string shapeName, string name, vector<Double_t> vec, vector<Double_t> err)
{
  unsigned int nbins = fBinsShapeMap[shapeName].size();
  //UInt_t Nbins=fBins.size();
  if (nbins>0) {
    Float_t bins[nbins];
    for (unsigned int i=0;i<nbins;i++) bins[i]=fBinsShapeMap[shapeName].at(i);
      TH1D* h=new TH1D(name.c_str(),name.c_str(),nbins-1,bins);
    for (unsigned int i=0;i<nbins-1;i++) {
      h->SetBinContent(i+1,vec.at(i));
      if (err.size() == vec.size()) h->SetBinError(i+1,err.at(i));
    }
    return h;
  }
  return 0;
}



void Sample::WriteHistogramsToFile(TFile* f, bool dump_bg_hist, string dir, string app)
{
  // write combined ones
  if (fBins.size() == 0 ) return;
  TDirectory* tmpd=gDirectory;
  gDirectory =  f->GetDirectory(dir.c_str());
  if(gDirectory==NULL)
    gDirectory =  f->GetDirectory("");
  TH1D* h=GetHistogram(fName, fHistContent, fHistError);
  string hName = h->GetName();
  if (h!=0) {
    if (app!=""){
      // remove the space and append app
      while(hName.find(" ")!=string::npos) 
        hName.replace(hName.find(" "), 1, "_");
      hName = hName + "_" + app;
    }
    h->Write(hName.c_str());
    delete h;
    h=0;
  }

  // dump background histograms
  if (fDataFromNtuple && dump_bg_hist) {    
    for (Int_t biter=Consts::BackgroundIter(Consts::Background::kFirst); biter <= Consts::BackgroundIter(Consts::Background::kLast); biter++) {
      map<Consts::Background::Type, vector<Double_t> >::iterator bit = fHistBackground.find(Consts::BackgroundIterToEnum(biter));
      if (bit != fHistBackground.end()) {
        vector<Double_t> dummy;
        h=GetHistogram(Form("%s %s",fName.c_str(), Consts::GetBackgroundName(bit->first).c_str()), bit->second, dummy);
        h->Write();
        delete h;
        h=0;
      }
    }

    // loop through shape, then background
    for(string shapeName: fShapes2Fit){ 
      h = GetHistogram(shapeName);
      h->Write();
      delete h;
      const auto& fHistBackgroundShape = fHistBackgroundShapeMap[shapeName]; // map<Const::Background::Type,vector<Double_t>>
      for (Int_t biter=Consts::BackgroundIter(Consts::Background::kFirst); biter <= Consts::BackgroundIter(Consts::Background::kLast); biter++) {
        auto bit = fHistBackgroundShape.find(Consts::BackgroundIterToEnum(biter));
        if (bit != fHistBackgroundShape.end()) {
          vector<Double_t> dummy;
          h=GetHistogram(shapeName, Form("%s %s %s",fName.c_str(), shapeName.c_str(), 
                         Consts::GetBackgroundName(bit->first).c_str()), 
                         bit->second, dummy);
          h->Write();
          delete h;
          h=0;
        }
      }
    }
  } // if(fDataFromNtuple && dump_bg_hist)

gDirectory = tmpd;

}

void Sample::Dump()
{
  if (fBins.size() == 0) return;
  ostringstream oss;
  oss << endl;
  oss << "****************************************************************************************"<<endl;
  oss << "Sample name: "  << fName    << endl;
  oss << "Input file: "   << fInputFileName << endl;
  oss << "fFastHist.size(): " << fFastHist.size() << endl;
  oss << "Events read: "  << fNevents;
  if (fDownsample<1 && fDownsample>0)  
    oss<<" ("<<fDownsample<<" of the total number of events in the ntuple)";
  oss    << endl; 

  oss << "Weight calculators: " << endl;
  MsgInfo(oss.str());
  oss.str("");
  for (vector<shared_ptr<WeightCalc>>::const_iterator it=fWC.begin(); it != fWC.end(); it++)
    (*it)->Dump();

  for (auto const& filter : fFilter) filter->Dump();
  oss <<endl;

  if (fVerbosity < 2) return;

  
  oss<< setw(10) << fName << " bins";
  for (unsigned int i=0; i<fBins.size(); i++) {oss<<setw(10) << setprecision(4)<<fBins.at(i);}
    oss<<endl;
  for (unsigned int i=0; i<fBins.size()*10+30; i++) oss<<"-";
    oss<<endl;
  oss << setw(15) << fName<<"     ";
  for (auto const& binContent : fHistContent) { oss<< setw(10) << setprecision(4)<<binContent;}
    oss <<endl;

  if (fVerbosity < 3) return;

  oss <<"---------------"<<endl;
  for (Int_t piter=Consts::ParticleIter(Consts::kFirst); piter <= Consts::ParticleIter(Consts::kLast); piter++) {
    map<Consts::ParticleCode, vector<Double_t> >::iterator pit = fHistParent.find(Consts::ParticleIterToEnum(piter));
    if (pit != fHistParent.end()) {
      oss << setw(10) << Consts::GetParticleName(pit->first)<<"          ";
      for (unsigned int i=0; i<fHistContent.size(); i++) {oss<< setw(10) << setprecision(4)<<(pit->second)[i];}
        oss <<endl;
    }
  }
  oss <<"---------------"<<endl;
  for (Int_t biter=Consts::BackgroundIter(Consts::Background::kFirst); biter <= Consts::BackgroundIter(Consts::Background::kLast); biter++) {
    map<Consts::Background::Type, vector<Double_t> >::iterator bit = fHistBackground.find(Consts::BackgroundIterToEnum(biter));
    if (bit != fHistBackground.end()) {
      oss << setw(10) << Consts::GetBackgroundName(bit->first)<<"          ";
      for (unsigned int i=0; i<fHistContent.size(); i++) {oss<< setw(10) << setprecision(4)<<(bit->second)[i];}
        oss <<endl;
    }
  }
  
  for (unsigned int i=0; i<fBins.size()*10+30; i++) oss<<"-";
    oss <<endl;
  oss <<"Overflow bin  ( E > "<<fBins.at(fBins.size()-1)<<" ) = "<<fOverflow<<endl;
  oss <<"Underflow bin ( E < "<<fBins.at(0)             <<" ) = "<<fUnderflow<<endl;
  oss << "****************************************************************************************"<<endl;
  MsgInfo(oss.str());
  oss.str("");
}
