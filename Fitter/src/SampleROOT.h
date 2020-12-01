#ifndef DATASAMPLE_H
#define DATASAMPLE_H

#include <string>
#include <vector>
#include <map>
#include <memory>
#include "Rtypes.h"
#include "Consts.h"
#include "WeightCalc.h"
#include "Filter.h"

class Event;
class TH1D;
class TFile;

class Sample {

 public :
  Sample();
  virtual ~Sample();

  void  FillVector();
  void  FillHistogram(bool useweights=true, bool fast_hist=false);
  void  FillBkgHists(bool useweights=true); //actually fills bkg hists
  void  FillBackgroundHists(bool val) {fFillBkgHists=val;}; //sets option to fill bkg hists
  void  FillHistogram(std::vector<Double_t> data);
  Int_t FindBin(Double_t val);                        // find energy bin
  Int_t FindBin(Double_t val, std::string shapeName); // find shape  bin
  TH1D* GetHistogram(std::string varName="energy");

  TH1D* GetHistogram(std::string name, std::vector<Double_t> vec, std::vector<Double_t> err);
  TH1D* GetHistogram(std::string shapeName, std::string name, std::vector<Double_t> vec, std::vector<Double_t> err);

  void WriteHistogramsToFile(TFile* f, bool dump_bg_hist=true, std::string dir="", std::string app="");

  void SetInputNtuple(std::string input_ntuple) {fInputFileName = input_ntuple;};
  void SetNtupleID(Int_t id)        {fNtupleID = id;};
  void SetBins(std::vector<Double_t> bins) {
    fBins.clear();
    fNBins=bins.size();
    fBins.resize(fNBins);
    for (unsigned int i=0; i<bins.size();i++) fBins[i]=bins[i];
    FillHistogram();
  };
  void AddWeightCalc(std::shared_ptr<WeightCalc> wc);
  std::vector<std::shared_ptr<WeightCalc>> GetWeightCalc() {return fWC;};

  void AddFilter(std::shared_ptr<Filter> filter) {fFilter.push_back(filter);};
  std::vector<std::shared_ptr<Filter>> GetFilter() {return fFilter;};

  bool NeedUpdate();
  Consts::EUpdateType KindOfUpdate();

  void SetErrors(std::vector<Double_t> err);
  std::vector<Double_t > GetBins() {return fBins;};
  Int_t    GetNbins(std::string varName="energy") {
    if(varName=="energy") 
      return fHistContent.size(); 
    else 
      return fHistShapeMap[varName].size(); 
  };
  Double_t GetBinContent(Int_t bin, std::string varName="energy") {
    if(varName=="energy")
      return fHistContent.at(bin);
    else
      return fHistShapeMap[varName].at(bin);
  };
  Double_t GetError(Int_t bin) {return fHistError.at(bin);};
  Double_t GetBinSumw2(Int_t bin, std::string varName="energy") {
    if(varName=="energy")
      return fHistSumw2.at(bin);
    else
      return fHistSumw2ShapeMap[varName].at(bin);
  };

  void     Rebin(std::vector<Int_t> rebin_vector);
  
  void  SetVerbosity(Int_t val) {fVerbosity = val;};
  Int_t GetVerbosity()          {return fVerbosity;};
  void        Dump();
  void        SetName(std::string sample_name) {fName=sample_name;};
  std::string GetName() const {return fName;};
  void SetDownsample(Double_t val) {fDownsample=val;};

  void     Scale(Double_t scale_factor);
  bool IsBackground(Event &e, Consts::Background::Type b);
  Consts::Background::Type WhichBackground(Event &e);

  void  Update();

  //include the following shapes to fit
  void IncludeShapes(std::vector<std::string> val){fShapes2Fit=val;};
  std::vector<std::string> GetShapes2Fit() {return fShapes2Fit;};
  std::shared_ptr<Sample> Clone();

 private:
  std::string fName;
  std::string fInputFileName;
  Int_t fVerbosity;

  std::vector<Event>   fData;
  std::vector<Double_t> fHistContent;
  std::vector<Double_t> fHistError;
  std::map<Consts::ParticleCode, std::vector<Double_t> > fHistParent;
  std::map<Consts::Background::Type, std::vector<Double_t> > fHistBackground;
  std::vector<Double_t> fHistSumw2;
  std::vector<Double_t> fBins;
  UInt_t fNBins;
  Double_t fUnderflow;
  Double_t fOverflow;
  Double_t fScale;

  std::vector<std::shared_ptr<WeightCalc>> fWC;
  std::map<std::string, Double_t > fWeightParMap;

  std::vector<std::shared_ptr<Filter>> fFilter;

  Int_t fNtupleID;
  Int_t fNevents;

  bool fDataFromNtuple;
  Double_t fTolerance;
  bool fFirstFill;
  bool fNeedUpdate;
 
  bool fFillBkgHists;

  Double_t fDownsample; // fraction of events (from ntuple) kept in the sample

  std::map<std::string, std::vector<Double_t> > fFastHist;

  // shape fitting
  std::vector<std::string> fShapes2Fit;                         // must include these shapes
  std::map<std::string, std::vector<Double_t>> fBinsShapeMap; // ["shapeName", histBins]
  std::map<std::string, std::vector<Double_t> > fHistShapeMap;  // ["shapeName", histVec]
  std::map<std::string, std::vector<Double_t> > fHistSumw2ShapeMap;  // ["shapeName", histVec]
  std::map<std::string,                                       // ["shapeName", BackgroundType, histVec]
          std::map<Consts::Background::Type, 
                   std::vector<Double_t> > > fHistBackgroundShapeMap;  
};
#endif
