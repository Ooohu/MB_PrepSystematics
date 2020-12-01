#include <iostream>
#include <math.h>
#include <memory>
#include "Event.h"
#include "ResonanceWeightCalc.h"
#include "MsgLog.h"


using namespace std;



ResonanceWeightCalc::ResonanceWeightCalc() :
  m_neutrino_resonance(true),
  m_antineutrino_resonance(true),
  checkedResonanceType(false)
{ 
  fName = "ResonanceWeightCalc";

  fIsOn = true;

  fParName.resize(5);
  fPar.resize(5);
  fParLastCall.resize(5);

  fParName[0]              = "sin22theta"; 
  fIsScalePar[fParName[0]] = false;
  fParMap[fParName[0]]     = 0.;
  
  fParName[1]              = "dm2";        
  fIsScalePar[fParName[1]] = false;
  fParMap[fParName[1]]     = 0.;
  
  fParName[2]              = "Eres";        
  fIsScalePar[fParName[2]] = false;
  fParMap[fParName[2]]     = 1.e6;

  fParName[3]              ="resonance_neutrino";
  fIsScalePar[fParName[3]]  =false;
  fParMap[fParName[3]]     =1;

  fParName[4]              ="resonance_antineutrino";
  fIsScalePar[fParName[4]]  =false;
  fParMap[fParName[4]]     =1;

  fPar[0] = 0;    // sin22theta
  fPar[1] = 0;    // dm2
  fPar[2] = 1.e6; // Eres
  fPar[3] = 1;    // resonance_neutrino
  fPar[4] = 1;    // resonance_antineutrino

}

void ResonanceWeightCalc::SetNeutrinoResonance(bool neutrino_resonance)
{ 
  m_neutrino_resonance = neutrino_resonance;
  MsgInfo(MsgLog::Form("Neutrino Resonance = %d", neutrino_resonance));
};

void ResonanceWeightCalc::SetAntineutrinoResonance(bool antineutrino_resonance)
{ 
  m_antineutrino_resonance = antineutrino_resonance;
  MsgInfo(MsgLog::Form("Antineutrino Resonance = %d", antineutrino_resonance));
};

ResonanceWeightCalc::~ResonanceWeightCalc()
{
}

std::shared_ptr<WeightCalc> ResonanceWeightCalc::Clone()
{
  std::shared_ptr<ResonanceWeightCalc> new_wc = std::make_shared<ResonanceWeightCalc>();
  new_wc->SetName(fName);
  for (unsigned int i=0; i<fParName.size(); i++) {
    new_wc->SetParameter(fParName[i], fPar[i]);
  }
 
  return new_wc;
}

Double_t ResonanceWeightCalc::GetWeight(Event& event){
  const Double_t L = event.nuleng();
  const Double_t E = event.enugen();
  const int inno   = event.inno();
  return this->GetWeight(L,E, inno);
}

Double_t ResonanceWeightCalc::GetWeight(Double_t L, Double_t E, int inno)
{
  // calculate oscillation
  if ( !fIsOn ) return 1.;

  // check whether we have assigned m_neutrino_resonancne or not
  if(checkedResonanceType==false){
    m_neutrino_resonance = int(round(fParMap["resonance_neutrino"]));
    m_antineutrino_resonance = int(round(fParMap["resonance_antineutrino"]));
    MsgInfo(MsgLog::Form("Resonance     Neutrino = %d", m_neutrino_resonance));
    MsgInfo(MsgLog::Form("Resonance Antineutrino = %d", m_antineutrino_resonance));
    checkedResonanceType = true;
  }

  // determine whehter we are going to apply resonance to neutrino/antineutrino
  bool is_resonance = true;
  if(inno==3){        //neutrino
    if(m_neutrino_resonance) is_resonance = true;
    else is_resonance = false;
  }
  else if(inno==4){   //antineutrino
    if(m_antineutrino_resonance) is_resonance = true;
    else is_resonance = false;
  }
  else{
    MsgError(MsgLog::Form("For oscillation, there should be no inno = %d", inno));
  }
  
  // getting parameters
  fParLastCall = fPar;
  const Double_t sinSq2Theta = fPar[0];
  const Double_t dm2         = fPar[1];
  const Double_t Eres        = fPar[2];
  Double_t wgh               = 1.;

  // apply oscillation probabilities by whehter it is resonanced or not
  if(is_resonance){
    /* original resonance model
    const Double_t cos2th       = sqrt(1. - sinSq2Theta);
    const Double_t A            = cos2th * E / Eres;
    const Double_t CSq          = pow(cos2th-A ,2) + sinSq2Theta;
    const Double_t dm2m         = sqrt(CSq) * dm2;
    const Double_t sinSq2ThetaM = sinSq2Theta / CSq;  
    wgh = sinSq2ThetaM * pow(sin(1.267*dm2m * L / E), 2);
    */

    //Daniele's version
    const Double_t cosSq2Theta  = 1. - sinSq2Theta;
    const Double_t sin2Theta    = sqrt(sinSq2Theta);
    const Double_t cos2Theta   = sqrt(cosSq2Theta);
    const Double_t C           = sqrt(sinSq2Theta + cosSq2Theta * pow(1.-E/Eres,2));
    const Double_t deltaMm      = C * dm2;
    const Double_t sin2ThetaM   = sin2Theta / C;
    const Double_t sinSq2ThetaM = pow(sin2ThetaM, 2);
    const Double_t cosSq2ThetaM = 1.-sinSq2ThetaM;
    const Double_t cos2ThetaM   = sqrt(cosSq2ThetaM);
    const Double_t sinTheta    = sin(asin(sin2Theta/2.));
	 const Double_t sinSqTheta  = sinTheta * sinTheta;

    const Double_t partA =  1.267 * deltaMm * L / E;
    const Double_t partB = -1.267 * dm2     * L / E * (1.- 2.*sinSqTheta - E/Eres*cos2Theta); // modified after 0308 Daniele's notes
    //const Double_t partB = -1.267 * dm2  * L / E * (1.-E/Eres*cos2Theta); // before 0308 Daniele's notes
    const Double_t ProbA = 1./4.*pow(           cos(partA) - cos(partB), 2);
    const Double_t ProbB = 1./4.*pow(cos2ThetaM*sin(partA) + sin(partB), 2);
    wgh = ProbA + ProbB;

    MsgDebug(1, MsgLog::Form("  Resonance(inno=%d): sinSq2Theta=%.2f, dm2=%.2f, Eres=%.2f => prob = %.2e", inno, sinSq2Theta, dm2, Eres, wgh));
  }
  else{
    wgh = sinSq2Theta* pow(sin(1.267*dm2*L/E), 2);
    MsgDebug(1, MsgLog::Form("NoResonance(inno=%d): sinSq2Theta=%.2f, dm2=%.2f, Eres=%.2f => prob = %.2e", inno, sinSq2Theta, dm2, Eres, wgh));
  }
  return wgh;
}

bool ResonanceWeightCalc::ParametersChanged()
{
  bool changed = false;
  if ( fParLastCall != fPar ) {
    changed = true;
  }
  return changed;
}
