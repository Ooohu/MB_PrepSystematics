//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Sep  7 22:48:37 2020 by ROOT version 6.12/04
// from TTree MiniBooNE/Created in ./outputroots/merged_may07_weighted.root
// found on file: /scratch/condor-tmp/klin/systematics/prepareSystematicFiles/outputroots/merged_may07_weighted.root
//////////////////////////////////////////////////////////

#ifndef newroot_h
#define newroot_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

class newroot {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxTHistory = 79;
   static constexpr Int_t kMaxTHistory_algo_name = 79;
   static constexpr Int_t kMaxTHistory_algo_inst = 79;
   static constexpr Int_t kMaxTHistory_chunk_name = 79;
   static constexpr Int_t kMaxTHistory_ext_name = 79;
   static constexpr Int_t kMaxTHistory_version = 79;
   static constexpr Int_t kMaxTHistory_node = 79;
   static constexpr Int_t kMaxTHistory_database = 79;
   static constexpr Int_t kMaxTHistory_inst_num = 79;
   static constexpr Int_t kMaxTHistory_timestamp = 79;
   static constexpr Int_t kMaxTHistory_rcpid = 79;
   static constexpr Int_t kMaxTHistory_chunkid = 79;
   static constexpr Int_t kMaxTHistory_parents = 79;
   static constexpr Int_t kMaxTHistory_tags = 79;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloVETOChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloMUTRChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloINVIChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloNUANChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_name = 1;
   static constexpr Int_t kMaxTMCRawEventChunk = 1;
   static constexpr Int_t kMaxTMCRawEventChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMCRawEventChunk_name = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMCHitMatchChunk_name = 1;
   static constexpr Int_t kMaxTGlobalHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalHeaderChunk_name = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_chunk_id = 2;
   static constexpr Int_t kMaxTGlobalTankHeaderChunk_name = 2;
   static constexpr Int_t kMaxTUncalibratedDataChunk = 1;
   static constexpr Int_t kMaxTUncalibratedDataChunk_chunk_id = 1;
   static constexpr Int_t kMaxTUncalibratedDataChunk_name = 1;
   static constexpr Int_t kMaxTCrate13Chunk = 2;
   static constexpr Int_t kMaxTCrate13Chunk_chunk_id = 2;
   static constexpr Int_t kMaxTCrate13Chunk_name = 2;
   static constexpr Int_t kMaxTSplitEventChunk = 1;
   static constexpr Int_t kMaxTSplitEventChunk_chunk_id = 1;
   static constexpr Int_t kMaxTSplitEventChunk_name = 1;
   static constexpr Int_t kMaxTStancuFastChunk = 1;
   static constexpr Int_t kMaxTStancuFastChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFastChunk_name = 1;
   static constexpr Int_t kMaxTStancuFullChunk = 1;
   static constexpr Int_t kMaxTStancuFullChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFullChunk_name = 1;
   static constexpr Int_t kMaxTStancuFluxChunk = 1;
   static constexpr Int_t kMaxTStancuFluxChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuFluxChunk_name = 1;
   static constexpr Int_t kMaxTStancuTrakChunk = 1;
   static constexpr Int_t kMaxTStancuTrakChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuTrakChunk_name = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuMuvdChunk_name = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuPi0Chunk_name = 1;
   static constexpr Int_t kMaxTStancuVarsChunk = 1;
   static constexpr Int_t kMaxTStancuVarsChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuVarsChunk_name = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk_chunk_id = 1;
   static constexpr Int_t kMaxTStancuVarsTwoChunk_name = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk_chunk_id = 1;
   static constexpr Int_t kMaxTCalibrateEnergyChunk_name = 1;
   static constexpr Int_t kMaxTInteractionPointChunk = 1;
   static constexpr Int_t kMaxTInteractionPointChunk_chunk_id = 1;
   static constexpr Int_t kMaxTInteractionPointChunk_name = 1;
   static constexpr Int_t kMaxTOneTrackChunk = 2;
   static constexpr Int_t kMaxTOneTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTOneTrackChunk_name = 2;
   static constexpr Int_t kMaxTParticleIDChunk = 4;
   static constexpr Int_t kMaxTParticleIDChunk_chunk_id = 4;
   static constexpr Int_t kMaxTParticleIDChunk_name = 4;
   static constexpr Int_t kMaxTTwoTrackChunk = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackEndConditionsChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackInternalsChunk_name = 2;
   static constexpr Int_t kMaxTProtonChunk = 1;
   static constexpr Int_t kMaxTProtonChunk_chunk_id = 1;
   static constexpr Int_t kMaxTProtonChunk_name = 1;
   static constexpr Int_t kMaxTNeutronChunk = 1;
   static constexpr Int_t kMaxTNeutronChunk_chunk_id = 1;
   static constexpr Int_t kMaxTNeutronChunk_name = 1;
   static constexpr Int_t kMaxTVetoClusterChunk = 3;
   static constexpr Int_t kMaxTVetoClusterChunk_chunk_id = 3;
   static constexpr Int_t kMaxTVetoClusterChunk_name = 3;
   static constexpr Int_t kMaxTVetoLinkingChunk = 1;
   static constexpr Int_t kMaxTVetoLinkingChunk_chunk_id = 1;
   static constexpr Int_t kMaxTVetoLinkingChunk_name = 1;
   static constexpr Int_t kMaxTReweightToCVChunk = 1;
   static constexpr Int_t kMaxTReweightToCVChunk_chunk_id = 1;
   static constexpr Int_t kMaxTReweightToCVChunk_name = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk_chunk_id = 1;
   static constexpr Int_t kMaxTWeightDetailsChunk_name = 1;
   static constexpr Int_t kMaxTMulMatWeightsChunk = 13;
   static constexpr Int_t kMaxTMulMatWeightsChunk_chunk_id = 13;
   static constexpr Int_t kMaxTMulMatWeightsChunk_name = 13;

   // Declaration of leaf types
   Int_t           THistory_;
   UInt_t          THistory_fUniqueID[kMaxTHistory];   //[THistory_]
   UInt_t          THistory_fBits[kMaxTHistory];   //[THistory_]
   string          THistory_algo_name_[kMaxTHistory];
   string          THistory_algo_inst_[kMaxTHistory];
   string          THistory_chunk_name_[kMaxTHistory];
   string          THistory_ext_name_[kMaxTHistory];
   string          THistory_version_[kMaxTHistory];
   string          THistory_node_[kMaxTHistory];
   Char_t          THistory_database_[kMaxTHistory];   //[THistory_]
   Int_t           THistory_inst_num_[kMaxTHistory];   //[THistory_]
   Long_t          THistory_timestamp_[kMaxTHistory];   //[THistory_]
   ULong_t         THistory_rcpid_[kMaxTHistory];   //[THistory_]
   Int_t           THistory_chunkid_[kMaxTHistory];   //[THistory_]
   vector<int>     THistory_parents_[kMaxTHistory];
   vector<string>  THistory_tags_[kMaxTHistory];
   Int_t           TMonteCarloEVNTChunk_;
   Int_t           TMonteCarloEVNTChunk_chunk_id_[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   UInt_t          TMonteCarloEVNTChunk_data__fUniqueID[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   UInt_t          TMonteCarloEVNTChunk_data__fBits[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__VERSION[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__VAR_FLAGS[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__IEVNT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__EVWT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__INNO[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__PNEU[kMaxTMonteCarloEVNTChunk][4];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__NDCY[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__NFSP[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Float_t         TMonteCarloEVNTChunk_data__VRTX[kMaxTMonteCarloEVNTChunk][127][3];   //[TMonteCarloEVNTChunk_]
   Float_t        *TMonteCarloEVNTChunk_data__TIME[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t          *TMonteCarloEVNTChunk_data__IPFS[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Float_t         TMonteCarloEVNTChunk_data__PFSP[kMaxTMonteCarloEVNTChunk][127][4];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__NHTTCER[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t          *TMonteCarloEVNTChunk_data__NHTTSCI[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NFSP]
   Int_t           TMonteCarloEVNTChunk_data__NPROCTAG[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__IPROCTAG[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NPROCTAG]
   Int_t           TMonteCarloEVNTChunk_data__NHTT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t          *TMonteCarloEVNTChunk_data__NOTPMT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NHTT]
   Float_t        *TMonteCarloEVNTChunk_data__TITPMT[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_data__NHTT]
   Int_t           TMonteCarloEVNTChunk_data__RNDM1[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   Int_t           TMonteCarloEVNTChunk_data__RNDM2[kMaxTMonteCarloEVNTChunk];   //[TMonteCarloEVNTChunk_]
   string          TMonteCarloEVNTChunk_name_[kMaxTMonteCarloEVNTChunk];
   Int_t           TMonteCarloVETOChunk_;
   Int_t           TMonteCarloVETOChunk_chunk_id_[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   UInt_t          TMonteCarloVETOChunk_data__fUniqueID[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   UInt_t          TMonteCarloVETOChunk_data__fBits[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__VERSION[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__VAR_FLAGS[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__IEVNV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t           TMonteCarloVETOChunk_data__NFSPV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t          *TMonteCarloVETOChunk_data__NHTVCER[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NFSPV]
   Int_t          *TMonteCarloVETOChunk_data__NHTVSCI[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NFSPV]
   Int_t           TMonteCarloVETOChunk_data__NHTV[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_]
   Int_t          *TMonteCarloVETOChunk_data__NOVPMT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__TIVPMT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__XVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__YVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__ZVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   Float_t        *TMonteCarloVETOChunk_data__EVHT[kMaxTMonteCarloVETOChunk];   //[TMonteCarloVETOChunk_data__NHTV]
   string          TMonteCarloVETOChunk_name_[kMaxTMonteCarloVETOChunk];
   Int_t           TMonteCarloMUTRChunk_;
   Int_t           TMonteCarloMUTRChunk_chunk_id_[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   UInt_t          TMonteCarloMUTRChunk_data__fUniqueID[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   UInt_t          TMonteCarloMUTRChunk_data__fBits[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__VERSION[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__VAR_FLAGS[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__IEVNM[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__NHTMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t        *TMonteCarloMUTRChunk_data__XMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__YMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__ZMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__SMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__ELMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Float_t        *TMonteCarloMUTRChunk_data__TIMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Int_t          *TMonteCarloMUTRChunk_data__IPMUT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTMUT]
   Int_t           TMonteCarloMUTRChunk_data__NHTCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t        *TMonteCarloMUTRChunk_data__XCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__YCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__ZCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__ELCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Float_t        *TMonteCarloMUTRChunk_data__TICUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Int_t          *TMonteCarloMUTRChunk_data__PTCUB[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_data__NHTCUB]
   Int_t           TMonteCarloMUTRChunk_data__INVT[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRV[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__INTK[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRI[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__LVTK[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRO[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__MUSTP[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRS[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   Int_t           TMonteCarloMUTRChunk_data__MUDCY[kMaxTMonteCarloMUTRChunk];   //[TMonteCarloMUTRChunk_]
   Float_t         TMonteCarloMUTRChunk_data__TRE[kMaxTMonteCarloMUTRChunk][8];   //[TMonteCarloMUTRChunk_]
   string          TMonteCarloMUTRChunk_name_[kMaxTMonteCarloMUTRChunk];
   Int_t           TMonteCarloINVIChunk_;
   Int_t           TMonteCarloINVIChunk_chunk_id_[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   UInt_t          TMonteCarloINVIChunk_data__fUniqueID[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   UInt_t          TMonteCarloINVIChunk_data__fBits[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__VERSION[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__VAR_FLAGS[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__IEVNT[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t           TMonteCarloINVIChunk_data__NFSPI[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_]
   Int_t          *TMonteCarloINVIChunk_data__gotPE[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__distToSource[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceX[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceY[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   Float_t        *TMonteCarloINVIChunk_data__sourceZ[kMaxTMonteCarloINVIChunk];   //[TMonteCarloINVIChunk_data__NFSPI]
   string          TMonteCarloINVIChunk_name_[kMaxTMonteCarloINVIChunk];
   Int_t           TMonteCarloNUANChunk_;
   Int_t           TMonteCarloNUANChunk_chunk_id_[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   UInt_t          TMonteCarloNUANChunk_data__fUniqueID[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   UInt_t          TMonteCarloNUANChunk_data__fBits[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__VERSION[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__VAR_FLAGS[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Int_t           TMonteCarloNUANChunk_data__rateid[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__e_neutrino[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__e_lepton[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__k_target[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__qsq[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__w[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__x[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__y[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__phi_cm[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   Float_t         TMonteCarloNUANChunk_data__cos_fermi[kMaxTMonteCarloNUANChunk];   //[TMonteCarloNUANChunk_]
   string          TMonteCarloNUANChunk_name_[kMaxTMonteCarloNUANChunk];
   Int_t           TMonteCarloBEAMChunk_;
   Int_t           TMonteCarloBEAMChunk_chunk_id_[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   UInt_t          TMonteCarloBEAMChunk_data__fUniqueID[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   UInt_t          TMonteCarloBEAMChunk_data__fBits[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__VERSION[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__VAR_FLAGS[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__beamwgt[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__ntp[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t           TMonteCarloBEAMChunk_data__npart[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_]
   Int_t          *TMonteCarloBEAMChunk_data__id[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__ini_pos[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__ini_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t        *TMonteCarloBEAMChunk_data__ini_eng[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t        *TMonteCarloBEAMChunk_data__ini_t[kMaxTMonteCarloBEAMChunk];   //[TMonteCarloBEAMChunk_data__npart]
   Float_t         TMonteCarloBEAMChunk_data__fin_mom[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   Float_t         TMonteCarloBEAMChunk_data__fin_pol[kMaxTMonteCarloBEAMChunk][20][3];   //[TMonteCarloBEAMChunk_]
   string          TMonteCarloBEAMChunk_name_[kMaxTMonteCarloBEAMChunk];
   Int_t           TMCRawEventChunk_;
   Int_t           TMCRawEventChunk_chunk_id_[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   UInt_t          TMCRawEventChunk_data__fUniqueID[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   UInt_t          TMCRawEventChunk_data__fBits[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__numhits[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__MCVersion[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__varflags[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nutype[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nfsp[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__ndcy[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__evwt[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__pneu[kMaxTMCRawEventChunk][4];   //[TMCRawEventChunk_]
   Int_t          *TMCRawEventChunk_data__ipfs[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttcer[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttVcer[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttsci[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Int_t          *TMCRawEventChunk_data__nhttVsci[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Float_t        *TMCRawEventChunk_data__time[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nfsp]
   Float_t         TMCRawEventChunk_data__pfsp[kMaxTMCRawEventChunk][127][4];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__vrtx[kMaxTMCRawEventChunk][127][3];   //[TMCRawEventChunk_]
   Float_t         TMCRawEventChunk_data__svrtx[kMaxTMCRawEventChunk][3];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__ievnt[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t           TMCRawEventChunk_data__nproctag[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_]
   Int_t          *TMCRawEventChunk_data__iproctag[kMaxTMCRawEventChunk];   //[TMCRawEventChunk_data__nproctag]
   string          TMCRawEventChunk_name_[kMaxTMCRawEventChunk];
   Int_t           TMCHitMatchChunk_;
   Int_t           TMCHitMatchChunk_chunk_id_[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   UInt_t          TMCHitMatchChunk_data__fUniqueID[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   UInt_t          TMCHitMatchChunk_data__fBits[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Nhit[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Hit2FSP[kMaxTMCHitMatchChunk][17406];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__NumFSP[kMaxTMCHitMatchChunk];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__PEs[kMaxTMCHitMatchChunk][127];   //[TMCHitMatchChunk_]
   Int_t           TMCHitMatchChunk_data__Hits[kMaxTMCHitMatchChunk][127];   //[TMCHitMatchChunk_]
   string          TMCHitMatchChunk_name_[kMaxTMCHitMatchChunk];
   Int_t           TGlobalHeaderChunk_;
   Int_t           TGlobalHeaderChunk_chunk_id_[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   UInt_t          TGlobalHeaderChunk_data__fUniqueID[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   UInt_t          TGlobalHeaderChunk_data__fBits[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RECORD_TYPE[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RECORD_ORIGIN[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__NUM_BYTES[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__RUN_NUM[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__SECS[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   Int_t           TGlobalHeaderChunk_data__MSECS[kMaxTGlobalHeaderChunk];   //[TGlobalHeaderChunk_]
   string          TGlobalHeaderChunk_name_[kMaxTGlobalHeaderChunk];
   Int_t           TGlobalTankHeaderChunk_;
   Int_t           TGlobalTankHeaderChunk_chunk_id_[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   UInt_t          TGlobalTankHeaderChunk_data__fUniqueID[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   UInt_t          TGlobalTankHeaderChunk_data__fBits[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__RUN_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__EVENT_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__SUB_RUN_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__EVENT_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_EV_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_FIFO[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NTSAS_FIFO[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__GPS_LOWER[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__GPS_UPPER[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_EV_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_NTSAS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__TRIG_NBCASTS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_NUM[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_CMD[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_DIAG[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t          *TGlobalTankHeaderChunk_data__BCAST_LAT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_data__TRIG_NBCASTS]
   Int_t           TGlobalTankHeaderChunk_data__ACT_TIMER[kMaxTGlobalTankHeaderChunk][23];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__FIFO_HIST[kMaxTGlobalTankHeaderChunk][100];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__FIFO_HIST_POINT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__ACTIVITY_HIST[kMaxTGlobalTankHeaderChunk][30];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NTSAS[kMaxTGlobalTankHeaderChunk][30];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_RCVR[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_BUFSIZE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_NUM_HITS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__QTH_DATA_TYPE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   Int_t           TGlobalTankHeaderChunk_data__RATE[kMaxTGlobalTankHeaderChunk];   //[TGlobalTankHeaderChunk_]
   string          TGlobalTankHeaderChunk_name_[kMaxTGlobalTankHeaderChunk];
   Int_t           TUncalibratedDataChunk_;
   Int_t           TUncalibratedDataChunk_chunk_id_[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   UInt_t          TUncalibratedDataChunk_data__fUniqueID[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   UInt_t          TUncalibratedDataChunk_data__fBits[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   Int_t           TUncalibratedDataChunk_data__NUM_HITS[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_]
   Int_t          *TUncalibratedDataChunk_data__CHANNEL[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__OFFSET[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC0[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC1[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC2[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__Q_ADC3[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC0[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC1[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC2[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   Int_t          *TUncalibratedDataChunk_data__T_ADC3[kMaxTUncalibratedDataChunk];   //[TUncalibratedDataChunk_data__NUM_HITS]
   string          TUncalibratedDataChunk_name_[kMaxTUncalibratedDataChunk];
   Int_t           TCrate13Chunk_;
   Int_t           TCrate13Chunk_chunk_id_[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   UInt_t          TCrate13Chunk_data__fUniqueID[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   UInt_t          TCrate13Chunk_data__fBits[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__Laser_flask[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_laser[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_cubes[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_RWM[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_d90[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_MUTR[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e1[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e2[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e3[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__N_trig_e4[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Int_t           TCrate13Chunk_data__RWM_quality[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_refined_time[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_bounce_time[kMaxTCrate13Chunk];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__laser_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__laser_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_chan[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__cubes_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__RWM_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__d90_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__d90_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__MUTR_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__MUTR_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e1_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e1_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e2_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e2_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e3_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e3_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e4_t[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   Float_t         TCrate13Chunk_data__trig_e4_q[kMaxTCrate13Chunk][20];   //[TCrate13Chunk_]
   string          TCrate13Chunk_name_[kMaxTCrate13Chunk];
   Int_t           TSplitEventChunk_;
   Int_t           TSplitEventChunk_chunk_id_[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   UInt_t          TSplitEventChunk_data__fUniqueID[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   UInt_t          TSplitEventChunk_data__fBits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__Subevent[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__THits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__VHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__TposHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t           TSplitEventChunk_data__VposHits[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Int_t          *TSplitEventChunk_data__TPMT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Int_t          *TSplitEventChunk_data__VPMT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t        *TSplitEventChunk_data__TQ[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Float_t        *TSplitEventChunk_data__VQ[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t         TSplitEventChunk_data__Qtot[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__TQpos[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__VQpos[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t        *TSplitEventChunk_data__TT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__THits]
   Float_t        *TSplitEventChunk_data__VT[kMaxTSplitEventChunk];   //[TSplitEventChunk_data__VHits]
   Float_t         TSplitEventChunk_data__Tmin[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__Tmax[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__AvgTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__PeakTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__rmsTTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__AvgVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__PeakVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   Float_t         TSplitEventChunk_data__rmsVTim[kMaxTSplitEventChunk];   //[TSplitEventChunk_]
   string          TSplitEventChunk_name_[kMaxTSplitEventChunk];
   Int_t           TStancuFastChunk_;
   Int_t           TStancuFastChunk_chunk_id_[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   UInt_t          TStancuFastChunk_data__fUniqueID[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   UInt_t          TStancuFastChunk_data__fBits[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Int_t           TStancuFastChunk_data__IT[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__X[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__Y[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__Z[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UX[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UY[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__UZ[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__T[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__D[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__E[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   Float_t         TStancuFastChunk_data__F[kMaxTStancuFastChunk];   //[TStancuFastChunk_]
   string          TStancuFastChunk_name_[kMaxTStancuFastChunk];
   Int_t           TStancuFullChunk_;
   Int_t           TStancuFullChunk_chunk_id_[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   UInt_t          TStancuFullChunk_data__fUniqueID[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   UInt_t          TStancuFullChunk_data__fBits[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Int_t           TStancuFullChunk_data__IT[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__X[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Y[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Z[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UX[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UY[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__UZ[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__T[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__D[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__E[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__F[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__E_mu[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__S_tkint[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__RdR[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Fqlt05[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Fqlt10[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Xvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Yvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Zvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Rvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   Float_t         TStancuFullChunk_data__Tvtx[kMaxTStancuFullChunk];   //[TStancuFullChunk_]
   string          TStancuFullChunk_name_[kMaxTStancuFullChunk];
   Int_t           TStancuFluxChunk_;
   Int_t           TStancuFluxChunk_chunk_id_[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   UInt_t          TStancuFluxChunk_data__fUniqueID[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   UInt_t          TStancuFluxChunk_data__fBits[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Int_t           TStancuFluxChunk_data__IT[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__CER[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__SCI[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__F[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__EcerEl[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   Float_t         TStancuFluxChunk_data__EcerMu[kMaxTStancuFluxChunk];   //[TStancuFluxChunk_]
   string          TStancuFluxChunk_name_[kMaxTStancuFluxChunk];
   Int_t           TStancuTrakChunk_;
   Int_t           TStancuTrakChunk_chunk_id_[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   UInt_t          TStancuTrakChunk_data__fUniqueID[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   UInt_t          TStancuTrakChunk_data__fBits[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Int_t           TStancuTrakChunk_data__IT[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Float_t         TStancuTrakChunk_data__TRAK[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   Float_t         TStancuTrakChunk_data__F[kMaxTStancuTrakChunk];   //[TStancuTrakChunk_]
   string          TStancuTrakChunk_name_[kMaxTStancuTrakChunk];
   Int_t           TStancuMuvdChunk_;
   Int_t           TStancuMuvdChunk_chunk_id_[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   UInt_t          TStancuMuvdChunk_data__fUniqueID[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   UInt_t          TStancuMuvdChunk_data__fBits[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Int_t           TStancuMuvdChunk_data__IT[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__X[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__Y[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__Z[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UX[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UY[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__UZ[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__T[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__F[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   Float_t         TStancuMuvdChunk_data__L[kMaxTStancuMuvdChunk];   //[TStancuMuvdChunk_]
   string          TStancuMuvdChunk_name_[kMaxTStancuMuvdChunk];
   Int_t           TStancuPi0Chunk_;
   Int_t           TStancuPi0Chunk_chunk_id_[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   UInt_t          TStancuPi0Chunk_data__fUniqueID[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   UInt_t          TStancuPi0Chunk_data__fBits[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Int_t           TStancuPi0Chunk_data__iter[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__x[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__y[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__z[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__t[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__llike[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__mass[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__darec[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__fcer[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__phi1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__teta1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__phi2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__teta2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__cer1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__sci1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__cer2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__sci2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__srec1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__dist1[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__srec2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   Float_t         TStancuPi0Chunk_data__dist2[kMaxTStancuPi0Chunk];   //[TStancuPi0Chunk_]
   string          TStancuPi0Chunk_name_[kMaxTStancuPi0Chunk];
   Int_t           TStancuVarsChunk_;
   Int_t           TStancuVarsChunk_chunk_id_[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   UInt_t          TStancuVarsChunk_data__fUniqueID[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   UInt_t          TStancuVarsChunk_data__fBits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__nchunks[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__chunknr[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__energy[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__thits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Int_t           TStancuVarsChunk_data__vhits[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__d[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rdr[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__stint[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rawtsig[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rawtavg[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_trak[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlb45[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlb24[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlm22[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_tlsci[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qtmr4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_qtmr3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_fthvp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_fthvl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rslvl53[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EMu_rslvl64[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_mass[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_angle[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_trak[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlful[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlcer[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_rslvl53[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_rslvl64[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_scratio[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qqover[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_fmdiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qldiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tldiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_fcer[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qtmr0[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_dcbeam[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_qtmr56[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_tlb245[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__EPi_dist1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh11p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh9p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh1t5p1518[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh1p18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh13p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlkh11t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrpp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrmm[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr0p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr4p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr6p7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrc2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr17p18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr18p19[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqtmr16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rsqtmr14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p9[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit3p6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit4p10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph13p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph14p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph11p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph15p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph15p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlph16p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlt05[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlt10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthjp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthjl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fthvp[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk014p15[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk08p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk012p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk010p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk011p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk012p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk013p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqlk016p17[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec6t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t20[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec1t10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec6t10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fqrec15t18[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn018m14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn014p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fn010p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn013[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn011[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn010p13[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn010p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsn011p14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl9m1ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl3p9ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl7m4ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl1p8ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__rslvl8p9ovq[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlph16m12[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlph16m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02ql3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01tl2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02tl4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fnh1t5p1518[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fnh11t14[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftq4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frsq14p20[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqlk02p16[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__trakove[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fcertflx[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__srec1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__nqovovthit[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qcer2ovqtot[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqqov[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnqcer1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__cerfrdiff[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs7m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit9m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frchia10m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos4m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__chirsqrec[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ffast[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ffulmffas[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fflux[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frcer1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frcer2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnqcer1m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqqcer1m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcer1mov[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01ql3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02ql4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02fthl[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__srec2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__dist2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr5m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__chiqrec[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlfwd[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos5m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos7m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos10m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos10m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos6m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos10m3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frqcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ql0cos10[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlkcos3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlkcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlphcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qlppmtcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos5m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos6m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m4[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos10m9[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos10m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrsnb7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhnb8m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhrsnb5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frrs8m1[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__ftnhit3m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi02tl3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__pi01tl3[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr7m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr9m5[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmr4m2[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qcer1ovqtot[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__fscitflx[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__abscerasy[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__qtmrcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos8m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m6[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__tlphcos9m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos8m7[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   Float_t         TStancuVarsChunk_data__frnhcos9m8[kMaxTStancuVarsChunk];   //[TStancuVarsChunk_]
   string          TStancuVarsChunk_name_[kMaxTStancuVarsChunk];
   Int_t           TStancuVarsTwoChunk_;
   Int_t           TStancuVarsTwoChunk_chunk_id_[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   UInt_t          TStancuVarsTwoChunk_data__fUniqueID[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   UInt_t          TStancuVarsTwoChunk_data__fBits[kMaxTStancuVarsTwoChunk];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__cth_n000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__cth_nhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_mu[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qrec[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_chia[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qllk000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_qllkhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__cth_tllk[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__rs_n000[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__rs_nhit[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__rs_qrec[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__rs_mu[kMaxTStancuVarsTwoChunk][20];   //[TStancuVarsTwoChunk_]
   Int_t           TStancuVarsTwoChunk_data__tim_nhit[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__tim_qrec[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   Float_t         TStancuVarsTwoChunk_data__tim_mu[kMaxTStancuVarsTwoChunk][10];   //[TStancuVarsTwoChunk_]
   string          TStancuVarsTwoChunk_name_[kMaxTStancuVarsTwoChunk];
   Int_t           TCalibrateEnergyChunk_;
   Int_t           TCalibrateEnergyChunk_chunk_id_[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   UInt_t          TCalibrateEnergyChunk_data__fUniqueID[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   UInt_t          TCalibrateEnergyChunk_data__fBits[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Tlep_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Tlep_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Qsq_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__Qsq_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__EnuQE_e[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   Float_t         TCalibrateEnergyChunk_data__EnuQE_m[kMaxTCalibrateEnergyChunk];   //[TCalibrateEnergyChunk_]
   string          TCalibrateEnergyChunk_name_[kMaxTCalibrateEnergyChunk];
   Int_t           TInteractionPointChunk_;
   Int_t           TInteractionPointChunk_chunk_id_[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   UInt_t          TInteractionPointChunk_data__fUniqueID[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   UInt_t          TInteractionPointChunk_data__fBits[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__X_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Y_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Z_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__T_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__drive_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__tdrive_e[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__X_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Y_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__Z_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__T_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__drive_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   Float_t         TInteractionPointChunk_data__tdrive_m[kMaxTInteractionPointChunk];   //[TInteractionPointChunk_]
   string          TInteractionPointChunk_name_[kMaxTInteractionPointChunk];
   Int_t           TOneTrackChunk_;
   Int_t           TOneTrackChunk_chunk_id_[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   UInt_t          TOneTrackChunk_data__fUniqueID[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   UInt_t          TOneTrackChunk_data__fBits[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Int_t           TOneTrackChunk_data__iterations[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Int_t           TOneTrackChunk_data__trackType[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__X[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__Y[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__Z[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UX[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UY[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__UZ[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__T[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__E[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__distToMeanCer[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__fluxScale[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__relativeSci[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   Float_t         TOneTrackChunk_data__F[kMaxTOneTrackChunk];   //[TOneTrackChunk_]
   string          TOneTrackChunk_name_[kMaxTOneTrackChunk];
   Int_t           TParticleIDChunk_;
   Int_t           TParticleIDChunk_chunk_id_[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   UInt_t          TParticleIDChunk_data__fUniqueID[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   UInt_t          TParticleIDChunk_data__fBits[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Int_t           TParticleIDChunk_data__NUM_PAR[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Float_t        *TParticleIDChunk_data__PARAM[kMaxTParticleIDChunk];   //[TParticleIDChunk_data__NUM_PAR]
   Int_t           TParticleIDChunk_data__NUM_OUT[kMaxTParticleIDChunk];   //[TParticleIDChunk_]
   Float_t        *TParticleIDChunk_data__OUTPUT[kMaxTParticleIDChunk];   //[TParticleIDChunk_data__NUM_OUT]
   string          TParticleIDChunk_name_[kMaxTParticleIDChunk];
   Int_t           TTwoTrackChunk_;
   Int_t           TTwoTrackChunk_chunk_id_[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   UInt_t          TTwoTrackChunk_data__fUniqueID[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   UInt_t          TTwoTrackChunk_data__fBits[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__trackType1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__trackType2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__X[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Y[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Z[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__T[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__M[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__CosOp[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UX1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UY1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UZ1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__E1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__distToMeanCer1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__S1[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UX2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UY2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__UZ2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__E2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__distToMeanCer2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__S2[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__fluxScale[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__relativeSci[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Fqqq[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__Fttt[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Float_t         TTwoTrackChunk_data__F[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   Int_t           TTwoTrackChunk_data__fixedMass[kMaxTTwoTrackChunk];   //[TTwoTrackChunk_]
   string          TTwoTrackChunk_name_[kMaxTTwoTrackChunk];
   Int_t           TTwoTrackEndConditionsChunk_;
   Int_t           TTwoTrackEndConditionsChunk_chunk_id_[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   UInt_t          TTwoTrackEndConditionsChunk_data__fUniqueID[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   UInt_t          TTwoTrackEndConditionsChunk_data__fBits[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__OneTrack_E[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__OneTrack_F[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__end_F[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__cut_DeltaF[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Float_t         TTwoTrackEndConditionsChunk_data__end_DeltaF[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__fitWasAborted[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__enteredMainFit[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__finalStartPointer[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__finalStartOrder[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   Int_t           TTwoTrackEndConditionsChunk_data__fixedMass[kMaxTTwoTrackEndConditionsChunk];   //[TTwoTrackEndConditionsChunk_]
   string          TTwoTrackEndConditionsChunk_name_[kMaxTTwoTrackEndConditionsChunk];
   Int_t           TTwoTrackInternalsChunk_;
   Int_t           TTwoTrackInternalsChunk_chunk_id_[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   UInt_t          TTwoTrackInternalsChunk_data__fUniqueID[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   UInt_t          TTwoTrackInternalsChunk_data__fBits[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t           TTwoTrackInternalsChunk_data__numStarts[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t          *TTwoTrackInternalsChunk_data__startPointer[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startXpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startYpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startZpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startTime[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startE1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startE2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startS1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startPhi1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startThet1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startS2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startPhi2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startThet2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__startF[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endXpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endYpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endZpos[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endTime[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endE1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endE2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endS1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endPhi1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endThet1[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endS2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endPhi2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endThet2[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Float_t        *TTwoTrackInternalsChunk_data__endF[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Int_t          *TTwoTrackInternalsChunk_data__skipped[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_data__numStarts]
   Int_t           TTwoTrackInternalsChunk_data__fixedMass[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   Int_t           TTwoTrackInternalsChunk_data__fitWasAborted[kMaxTTwoTrackInternalsChunk];   //[TTwoTrackInternalsChunk_]
   string          TTwoTrackInternalsChunk_name_[kMaxTTwoTrackInternalsChunk];
   Int_t           TProtonChunk_;
   Int_t           TProtonChunk_chunk_id_[kMaxTProtonChunk];   //[TProtonChunk_]
   UInt_t          TProtonChunk_data__fUniqueID[kMaxTProtonChunk];   //[TProtonChunk_]
   UInt_t          TProtonChunk_data__fBits[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__E[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__X[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__Y[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__Z[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__T[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UX[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UY[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__UZ[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__TLLK[kMaxTProtonChunk];   //[TProtonChunk_]
   Float_t         TProtonChunk_data__QLLK[kMaxTProtonChunk];   //[TProtonChunk_]
   string          TProtonChunk_name_[kMaxTProtonChunk];
   Int_t           TNeutronChunk_;
   Int_t           TNeutronChunk_chunk_id_[kMaxTNeutronChunk];   //[TNeutronChunk_]
   UInt_t          TNeutronChunk_data__fUniqueID[kMaxTNeutronChunk];   //[TNeutronChunk_]
   UInt_t          TNeutronChunk_data__fBits[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__E[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__X[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__Y[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__Z[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__T[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__TLLK[kMaxTNeutronChunk];   //[TNeutronChunk_]
   Float_t         TNeutronChunk_data__QLLK[kMaxTNeutronChunk];   //[TNeutronChunk_]
   string          TNeutronChunk_name_[kMaxTNeutronChunk];
   Int_t           TVetoClusterChunk_;
   Int_t           TVetoClusterChunk_chunk_id_[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   UInt_t          TVetoClusterChunk_data__fUniqueID[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   UInt_t          TVetoClusterChunk_data__fBits[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Charge[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Time[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__X[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Y[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__Z[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__XSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__YSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__ZSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__SigMax[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__SepMean[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Float_t         TVetoClusterChunk_data__TSig[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Left[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__NC[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Hit_Indx[kMaxTVetoClusterChunk][240][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Hits[kMaxTVetoClusterChunk][10];   //[TVetoClusterChunk_]
   Int_t           TVetoClusterChunk_data__Subevent[kMaxTVetoClusterChunk];   //[TVetoClusterChunk_]
   string          TVetoClusterChunk_name_[kMaxTVetoClusterChunk];
   Int_t           TVetoLinkingChunk_;
   Int_t           TVetoLinkingChunk_chunk_id_[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   UInt_t          TVetoLinkingChunk_data__fUniqueID[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   UInt_t          TVetoLinkingChunk_data__fBits[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnDl[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExDl[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnSigma[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExSigma[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__EnDt[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Float_t         TVetoLinkingChunk_data__ExDt[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__NC[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__Enter[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   Int_t           TVetoLinkingChunk_data__Exit[kMaxTVetoLinkingChunk];   //[TVetoLinkingChunk_]
   string          TVetoLinkingChunk_name_[kMaxTVetoLinkingChunk];
   Int_t           TReweightToCVChunk_;
   Int_t           TReweightToCVChunk_chunk_id_[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   UInt_t          TReweightToCVChunk_data__fUniqueID[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   UInt_t          TReweightToCVChunk_data__fBits[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__radius[kMaxTReweightToCVChunk][3];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__ppi0[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__nuanceChannel[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__nuType[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__enu[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Int_t           TReweightToCVChunk_data__parentId[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__pParent[kMaxTReweightToCVChunk][3];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__xsecweight[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   Float_t         TReweightToCVChunk_data__fluxweight[kMaxTReweightToCVChunk];   //[TReweightToCVChunk_]
   string          TReweightToCVChunk_name_[kMaxTReweightToCVChunk];
   Int_t           TWeightDetailsChunk_;
   Int_t           TWeightDetailsChunk_chunk_id_[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   UInt_t          TWeightDetailsChunk_data__fUniqueID[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   UInt_t          TWeightDetailsChunk_data__fBits[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__resangle_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__dirt_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0mom_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__deltamom_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__raddelta_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0coh_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pi0res_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__nuance_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__multpi0_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__multdelta_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pipflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__pimflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__kpflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__kmflux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__k0flux_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__histo_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__npip_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__npim_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__absorber_wgt[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   Float_t         TWeightDetailsChunk_data__totalweight[kMaxTWeightDetailsChunk];   //[TWeightDetailsChunk_]
   string          TWeightDetailsChunk_name_[kMaxTWeightDetailsChunk];
   Int_t           TMulMatWeightsChunk_;
   Int_t           TMulMatWeightsChunk_chunk_id_[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   UInt_t          TMulMatWeightsChunk_data__fUniqueID[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   UInt_t          TMulMatWeightsChunk_data__fBits[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   Float_t         TMulMatWeightsChunk_data__CVWeight[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   Int_t           TMulMatWeightsChunk_data__NumSysts[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   Float_t        *TMulMatWeightsChunk_data__PosUniWeight[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_data__NumSysts]
   Float_t        *TMulMatWeightsChunk_data__NegUniWeight[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_data__NumSysts]
   Int_t           TMulMatWeightsChunk_data__NumMultisims[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_]
   Float_t        *TMulMatWeightsChunk_data__MultiWeight[kMaxTMulMatWeightsChunk];   //[TMulMatWeightsChunk_data__NumMultisims]
   string          TMulMatWeightsChunk_name_[kMaxTMulMatWeightsChunk];

   // List of branches
   TBranch        *b_THistory_;   //!
   TBranch        *b_THistory_fUniqueID;   //!
   TBranch        *b_THistory_fBits;   //!
   TBranch        *b_THistory_algo_name_;   //!
   TBranch        *b_THistory_algo_inst_;   //!
   TBranch        *b_THistory_chunk_name_;   //!
   TBranch        *b_THistory_ext_name_;   //!
   TBranch        *b_THistory_version_;   //!
   TBranch        *b_THistory_node_;   //!
   TBranch        *b_THistory_database_;   //!
   TBranch        *b_THistory_inst_num_;   //!
   TBranch        *b_THistory_timestamp_;   //!
   TBranch        *b_THistory_rcpid_;   //!
   TBranch        *b_THistory_chunkid_;   //!
   TBranch        *b_THistory_parents_;   //!
   TBranch        *b_THistory_tags_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IEVNT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__EVWT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__INNO;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__PNEU;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NDCY;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NFSP;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__VRTX;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__TIME;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IPFS;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__PFSP;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTTCER;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTTSCI;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NPROCTAG;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__IPROCTAG;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NHTT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__NOTPMT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__TITPMT;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__RNDM1;   //!
   TBranch        *b_TMonteCarloEVNTChunk_data__RNDM2;   //!
   TBranch        *b_TMonteCarloEVNTChunk_name_;   //!
   TBranch        *b_TMonteCarloVETOChunk_;   //!
   TBranch        *b_TMonteCarloVETOChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__IEVNV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NFSPV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTVCER;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTVSCI;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NHTV;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__NOVPMT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__TIVPMT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__XVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__YVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__ZVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_data__EVHT;   //!
   TBranch        *b_TMonteCarloVETOChunk_name_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__IEVNM;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__NHTMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__XMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__YMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ZMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__SMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ELMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TIMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__IPMUT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__NHTCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__XCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__YCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ZCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__ELCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TICUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__PTCUB;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__INVT;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRV;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__INTK;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRI;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__LVTK;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRO;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__MUSTP;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRS;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__MUDCY;   //!
   TBranch        *b_TMonteCarloMUTRChunk_data__TRE;   //!
   TBranch        *b_TMonteCarloMUTRChunk_name_;   //!
   TBranch        *b_TMonteCarloINVIChunk_;   //!
   TBranch        *b_TMonteCarloINVIChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__IEVNT;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__NFSPI;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__gotPE;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__distToSource;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceX;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceY;   //!
   TBranch        *b_TMonteCarloINVIChunk_data__sourceZ;   //!
   TBranch        *b_TMonteCarloINVIChunk_name_;   //!
   TBranch        *b_TMonteCarloNUANChunk_;   //!
   TBranch        *b_TMonteCarloNUANChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__rateid;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__e_neutrino;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__e_lepton;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__k_target;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__qsq;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__w;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__x;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__y;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__phi_cm;   //!
   TBranch        *b_TMonteCarloNUANChunk_data__cos_fermi;   //!
   TBranch        *b_TMonteCarloNUANChunk_name_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_chunk_id_;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fUniqueID;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fBits;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__VERSION;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__VAR_FLAGS;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__beamwgt;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ntp;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__npart;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__id;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_pos;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_eng;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__ini_t;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_mom;   //!
   TBranch        *b_TMonteCarloBEAMChunk_data__fin_pol;   //!
   TBranch        *b_TMonteCarloBEAMChunk_name_;   //!
   TBranch        *b_TMCRawEventChunk_;   //!
   TBranch        *b_TMCRawEventChunk_chunk_id_;   //!
   TBranch        *b_TMCRawEventChunk_data__fUniqueID;   //!
   TBranch        *b_TMCRawEventChunk_data__fBits;   //!
   TBranch        *b_TMCRawEventChunk_data__numhits;   //!
   TBranch        *b_TMCRawEventChunk_data__MCVersion;   //!
   TBranch        *b_TMCRawEventChunk_data__varflags;   //!
   TBranch        *b_TMCRawEventChunk_data__nutype;   //!
   TBranch        *b_TMCRawEventChunk_data__nfsp;   //!
   TBranch        *b_TMCRawEventChunk_data__ndcy;   //!
   TBranch        *b_TMCRawEventChunk_data__evwt;   //!
   TBranch        *b_TMCRawEventChunk_data__pneu;   //!
   TBranch        *b_TMCRawEventChunk_data__ipfs;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttcer;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttVcer;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttsci;   //!
   TBranch        *b_TMCRawEventChunk_data__nhttVsci;   //!
   TBranch        *b_TMCRawEventChunk_data__time;   //!
   TBranch        *b_TMCRawEventChunk_data__pfsp;   //!
   TBranch        *b_TMCRawEventChunk_data__vrtx;   //!
   TBranch        *b_TMCRawEventChunk_data__svrtx;   //!
   TBranch        *b_TMCRawEventChunk_data__ievnt;   //!
   TBranch        *b_TMCRawEventChunk_data__nproctag;   //!
   TBranch        *b_TMCRawEventChunk_data__iproctag;   //!
   TBranch        *b_TMCRawEventChunk_name_;   //!
   TBranch        *b_TMCHitMatchChunk_;   //!
   TBranch        *b_TMCHitMatchChunk_chunk_id_;   //!
   TBranch        *b_TMCHitMatchChunk_data__fUniqueID;   //!
   TBranch        *b_TMCHitMatchChunk_data__fBits;   //!
   TBranch        *b_TMCHitMatchChunk_data__Nhit;   //!
   TBranch        *b_TMCHitMatchChunk_data__Hit2FSP;   //!
   TBranch        *b_TMCHitMatchChunk_data__NumFSP;   //!
   TBranch        *b_TMCHitMatchChunk_data__PEs;   //!
   TBranch        *b_TMCHitMatchChunk_data__Hits;   //!
   TBranch        *b_TMCHitMatchChunk_name_;   //!
   TBranch        *b_TGlobalHeaderChunk_;   //!
   TBranch        *b_TGlobalHeaderChunk_chunk_id_;   //!
   TBranch        *b_TGlobalHeaderChunk_data__fUniqueID;   //!
   TBranch        *b_TGlobalHeaderChunk_data__fBits;   //!
   TBranch        *b_TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RECORD_TYPE;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RECORD_ORIGIN;   //!
   TBranch        *b_TGlobalHeaderChunk_data__NUM_BYTES;   //!
   TBranch        *b_TGlobalHeaderChunk_data__RUN_NUM;   //!
   TBranch        *b_TGlobalHeaderChunk_data__SECS;   //!
   TBranch        *b_TGlobalHeaderChunk_data__MSECS;   //!
   TBranch        *b_TGlobalHeaderChunk_name_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_chunk_id_;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__fUniqueID;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__fBits;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__RUN_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__EVENT_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__SUB_RUN_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__EVENT_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_EV_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_FIFO;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NTSAS_FIFO;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__GPS_LOWER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__GPS_UPPER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_EV_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_NTSAS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__TRIG_NBCASTS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_NUM;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_CMD;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_DIAG;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__BCAST_LAT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACT_TIMER;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__FIFO_HIST;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__FIFO_HIST_POINT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NTSAS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_RCVR;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_BUFSIZE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_NUM_HITS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__QTH_DATA_TYPE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS;   //!
   TBranch        *b_TGlobalTankHeaderChunk_data__RATE;   //!
   TBranch        *b_TGlobalTankHeaderChunk_name_;   //!
   TBranch        *b_TUncalibratedDataChunk_;   //!
   TBranch        *b_TUncalibratedDataChunk_chunk_id_;   //!
   TBranch        *b_TUncalibratedDataChunk_data__fUniqueID;   //!
   TBranch        *b_TUncalibratedDataChunk_data__fBits;   //!
   TBranch        *b_TUncalibratedDataChunk_data__NUM_HITS;   //!
   TBranch        *b_TUncalibratedDataChunk_data__CHANNEL;   //!
   TBranch        *b_TUncalibratedDataChunk_data__OFFSET;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC0;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC1;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC2;   //!
   TBranch        *b_TUncalibratedDataChunk_data__Q_ADC3;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC0;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC1;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC2;   //!
   TBranch        *b_TUncalibratedDataChunk_data__T_ADC3;   //!
   TBranch        *b_TUncalibratedDataChunk_name_;   //!
   TBranch        *b_TCrate13Chunk_;   //!
   TBranch        *b_TCrate13Chunk_chunk_id_;   //!
   TBranch        *b_TCrate13Chunk_data__fUniqueID;   //!
   TBranch        *b_TCrate13Chunk_data__fBits;   //!
   TBranch        *b_TCrate13Chunk_data__Laser_flask;   //!
   TBranch        *b_TCrate13Chunk_data__N_laser;   //!
   TBranch        *b_TCrate13Chunk_data__N_cubes;   //!
   TBranch        *b_TCrate13Chunk_data__N_RWM;   //!
   TBranch        *b_TCrate13Chunk_data__N_d90;   //!
   TBranch        *b_TCrate13Chunk_data__N_MUTR;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e1;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e2;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e3;   //!
   TBranch        *b_TCrate13Chunk_data__N_trig_e4;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_quality;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_refined_time;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_bounce_time;   //!
   TBranch        *b_TCrate13Chunk_data__laser_t;   //!
   TBranch        *b_TCrate13Chunk_data__laser_q;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_chan;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_t;   //!
   TBranch        *b_TCrate13Chunk_data__cubes_q;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_t;   //!
   TBranch        *b_TCrate13Chunk_data__RWM_q;   //!
   TBranch        *b_TCrate13Chunk_data__d90_t;   //!
   TBranch        *b_TCrate13Chunk_data__d90_q;   //!
   TBranch        *b_TCrate13Chunk_data__MUTR_t;   //!
   TBranch        *b_TCrate13Chunk_data__MUTR_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e1_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e1_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e2_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e2_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e3_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e3_q;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e4_t;   //!
   TBranch        *b_TCrate13Chunk_data__trig_e4_q;   //!
   TBranch        *b_TCrate13Chunk_name_;   //!
   TBranch        *b_TSplitEventChunk_;   //!
   TBranch        *b_TSplitEventChunk_chunk_id_;   //!
   TBranch        *b_TSplitEventChunk_data__fUniqueID;   //!
   TBranch        *b_TSplitEventChunk_data__fBits;   //!
   TBranch        *b_TSplitEventChunk_data__Subevent;   //!
   TBranch        *b_TSplitEventChunk_data__THits;   //!
   TBranch        *b_TSplitEventChunk_data__VHits;   //!
   TBranch        *b_TSplitEventChunk_data__TposHits;   //!
   TBranch        *b_TSplitEventChunk_data__VposHits;   //!
   TBranch        *b_TSplitEventChunk_data__TPMT;   //!
   TBranch        *b_TSplitEventChunk_data__VPMT;   //!
   TBranch        *b_TSplitEventChunk_data__TQ;   //!
   TBranch        *b_TSplitEventChunk_data__VQ;   //!
   TBranch        *b_TSplitEventChunk_data__Qtot;   //!
   TBranch        *b_TSplitEventChunk_data__TQpos;   //!
   TBranch        *b_TSplitEventChunk_data__VQpos;   //!
   TBranch        *b_TSplitEventChunk_data__TT;   //!
   TBranch        *b_TSplitEventChunk_data__VT;   //!
   TBranch        *b_TSplitEventChunk_data__Tmin;   //!
   TBranch        *b_TSplitEventChunk_data__Tmax;   //!
   TBranch        *b_TSplitEventChunk_data__AvgTTim;   //!
   TBranch        *b_TSplitEventChunk_data__PeakTTim;   //!
   TBranch        *b_TSplitEventChunk_data__rmsTTim;   //!
   TBranch        *b_TSplitEventChunk_data__AvgVTim;   //!
   TBranch        *b_TSplitEventChunk_data__PeakVTim;   //!
   TBranch        *b_TSplitEventChunk_data__rmsVTim;   //!
   TBranch        *b_TSplitEventChunk_name_;   //!
   TBranch        *b_TStancuFastChunk_;   //!
   TBranch        *b_TStancuFastChunk_chunk_id_;   //!
   TBranch        *b_TStancuFastChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFastChunk_data__fBits;   //!
   TBranch        *b_TStancuFastChunk_data__IT;   //!
   TBranch        *b_TStancuFastChunk_data__X;   //!
   TBranch        *b_TStancuFastChunk_data__Y;   //!
   TBranch        *b_TStancuFastChunk_data__Z;   //!
   TBranch        *b_TStancuFastChunk_data__UX;   //!
   TBranch        *b_TStancuFastChunk_data__UY;   //!
   TBranch        *b_TStancuFastChunk_data__UZ;   //!
   TBranch        *b_TStancuFastChunk_data__T;   //!
   TBranch        *b_TStancuFastChunk_data__D;   //!
   TBranch        *b_TStancuFastChunk_data__E;   //!
   TBranch        *b_TStancuFastChunk_data__F;   //!
   TBranch        *b_TStancuFastChunk_name_;   //!
   TBranch        *b_TStancuFullChunk_;   //!
   TBranch        *b_TStancuFullChunk_chunk_id_;   //!
   TBranch        *b_TStancuFullChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFullChunk_data__fBits;   //!
   TBranch        *b_TStancuFullChunk_data__IT;   //!
   TBranch        *b_TStancuFullChunk_data__X;   //!
   TBranch        *b_TStancuFullChunk_data__Y;   //!
   TBranch        *b_TStancuFullChunk_data__Z;   //!
   TBranch        *b_TStancuFullChunk_data__UX;   //!
   TBranch        *b_TStancuFullChunk_data__UY;   //!
   TBranch        *b_TStancuFullChunk_data__UZ;   //!
   TBranch        *b_TStancuFullChunk_data__T;   //!
   TBranch        *b_TStancuFullChunk_data__D;   //!
   TBranch        *b_TStancuFullChunk_data__E;   //!
   TBranch        *b_TStancuFullChunk_data__F;   //!
   TBranch        *b_TStancuFullChunk_data__E_mu;   //!
   TBranch        *b_TStancuFullChunk_data__S_tkint;   //!
   TBranch        *b_TStancuFullChunk_data__RdR;   //!
   TBranch        *b_TStancuFullChunk_data__Fqlt05;   //!
   TBranch        *b_TStancuFullChunk_data__Fqlt10;   //!
   TBranch        *b_TStancuFullChunk_data__Xvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Yvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Zvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Rvtx;   //!
   TBranch        *b_TStancuFullChunk_data__Tvtx;   //!
   TBranch        *b_TStancuFullChunk_name_;   //!
   TBranch        *b_TStancuFluxChunk_;   //!
   TBranch        *b_TStancuFluxChunk_chunk_id_;   //!
   TBranch        *b_TStancuFluxChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuFluxChunk_data__fBits;   //!
   TBranch        *b_TStancuFluxChunk_data__IT;   //!
   TBranch        *b_TStancuFluxChunk_data__CER;   //!
   TBranch        *b_TStancuFluxChunk_data__SCI;   //!
   TBranch        *b_TStancuFluxChunk_data__F;   //!
   TBranch        *b_TStancuFluxChunk_data__EcerEl;   //!
   TBranch        *b_TStancuFluxChunk_data__EcerMu;   //!
   TBranch        *b_TStancuFluxChunk_name_;   //!
   TBranch        *b_TStancuTrakChunk_;   //!
   TBranch        *b_TStancuTrakChunk_chunk_id_;   //!
   TBranch        *b_TStancuTrakChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuTrakChunk_data__fBits;   //!
   TBranch        *b_TStancuTrakChunk_data__IT;   //!
   TBranch        *b_TStancuTrakChunk_data__TRAK;   //!
   TBranch        *b_TStancuTrakChunk_data__F;   //!
   TBranch        *b_TStancuTrakChunk_name_;   //!
   TBranch        *b_TStancuMuvdChunk_;   //!
   TBranch        *b_TStancuMuvdChunk_chunk_id_;   //!
   TBranch        *b_TStancuMuvdChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuMuvdChunk_data__fBits;   //!
   TBranch        *b_TStancuMuvdChunk_data__IT;   //!
   TBranch        *b_TStancuMuvdChunk_data__X;   //!
   TBranch        *b_TStancuMuvdChunk_data__Y;   //!
   TBranch        *b_TStancuMuvdChunk_data__Z;   //!
   TBranch        *b_TStancuMuvdChunk_data__UX;   //!
   TBranch        *b_TStancuMuvdChunk_data__UY;   //!
   TBranch        *b_TStancuMuvdChunk_data__UZ;   //!
   TBranch        *b_TStancuMuvdChunk_data__T;   //!
   TBranch        *b_TStancuMuvdChunk_data__F;   //!
   TBranch        *b_TStancuMuvdChunk_data__L;   //!
   TBranch        *b_TStancuMuvdChunk_name_;   //!
   TBranch        *b_TStancuPi0Chunk_;   //!
   TBranch        *b_TStancuPi0Chunk_chunk_id_;   //!
   TBranch        *b_TStancuPi0Chunk_data__fUniqueID;   //!
   TBranch        *b_TStancuPi0Chunk_data__fBits;   //!
   TBranch        *b_TStancuPi0Chunk_data__iter;   //!
   TBranch        *b_TStancuPi0Chunk_data__x;   //!
   TBranch        *b_TStancuPi0Chunk_data__y;   //!
   TBranch        *b_TStancuPi0Chunk_data__z;   //!
   TBranch        *b_TStancuPi0Chunk_data__t;   //!
   TBranch        *b_TStancuPi0Chunk_data__llike;   //!
   TBranch        *b_TStancuPi0Chunk_data__mass;   //!
   TBranch        *b_TStancuPi0Chunk_data__darec;   //!
   TBranch        *b_TStancuPi0Chunk_data__fcer;   //!
   TBranch        *b_TStancuPi0Chunk_data__phi1;   //!
   TBranch        *b_TStancuPi0Chunk_data__teta1;   //!
   TBranch        *b_TStancuPi0Chunk_data__phi2;   //!
   TBranch        *b_TStancuPi0Chunk_data__teta2;   //!
   TBranch        *b_TStancuPi0Chunk_data__cer1;   //!
   TBranch        *b_TStancuPi0Chunk_data__sci1;   //!
   TBranch        *b_TStancuPi0Chunk_data__cer2;   //!
   TBranch        *b_TStancuPi0Chunk_data__sci2;   //!
   TBranch        *b_TStancuPi0Chunk_data__srec1;   //!
   TBranch        *b_TStancuPi0Chunk_data__dist1;   //!
   TBranch        *b_TStancuPi0Chunk_data__srec2;   //!
   TBranch        *b_TStancuPi0Chunk_data__dist2;   //!
   TBranch        *b_TStancuPi0Chunk_name_;   //!
   TBranch        *b_TStancuVarsChunk_;   //!
   TBranch        *b_TStancuVarsChunk_chunk_id_;   //!
   TBranch        *b_TStancuVarsChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuVarsChunk_data__fBits;   //!
   TBranch        *b_TStancuVarsChunk_data__nchunks;   //!
   TBranch        *b_TStancuVarsChunk_data__chunknr;   //!
   TBranch        *b_TStancuVarsChunk_data__energy;   //!
   TBranch        *b_TStancuVarsChunk_data__thits;   //!
   TBranch        *b_TStancuVarsChunk_data__vhits;   //!
   TBranch        *b_TStancuVarsChunk_data__d;   //!
   TBranch        *b_TStancuVarsChunk_data__rdr;   //!
   TBranch        *b_TStancuVarsChunk_data__stint;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rawtsig;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rawtavg;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_trak;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlb45;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlb24;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlm22;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_tlsci;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qtmr4;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_qtmr3;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_fthvp;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_fthvl;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rslvl53;   //!
   TBranch        *b_TStancuVarsChunk_data__EMu_rslvl64;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_mass;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_angle;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_trak;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlful;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlcer;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_rslvl53;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_rslvl64;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_scratio;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qqover;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_fmdiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qldiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tldiff;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_fcer;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qtmr0;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_dcbeam;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_qtmr56;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_tlb245;   //!
   TBranch        *b_TStancuVarsChunk_data__EPi_dist1;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh11p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh9p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh1t5p1518;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh1p18;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh13p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlkh11t14;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrpp;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrmm;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr0p5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr4p5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr6p7;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrc2;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr17p18;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr18p19;   //!
   TBranch        *b_TStancuVarsChunk_data__nqtmr16;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr13;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr16;   //!
   TBranch        *b_TStancuVarsChunk_data__rsqtmr14;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p9;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit3p6;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p5;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p8;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit4p10;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph13p14;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph14p15;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph16;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph11p15;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph15p17;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph15p16;   //!
   TBranch        *b_TStancuVarsChunk_data__tlph16p17;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlt05;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlt10;   //!
   TBranch        *b_TStancuVarsChunk_data__fthjp;   //!
   TBranch        *b_TStancuVarsChunk_data__fthjl;   //!
   TBranch        *b_TStancuVarsChunk_data__fthvp;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk014p15;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk08p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk012p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk010p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk011p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk012p13;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk013p14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqlk016p17;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec6t14;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t20;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t16;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec1t10;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec6t10;   //!
   TBranch        *b_TStancuVarsChunk_data__fqrec15t18;   //!
   TBranch        *b_TStancuVarsChunk_data__fn018m14;   //!
   TBranch        *b_TStancuVarsChunk_data__fn014p16;   //!
   TBranch        *b_TStancuVarsChunk_data__fn010p16;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn013;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn011;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn010p13;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn010p14;   //!
   TBranch        *b_TStancuVarsChunk_data__frsn011p14;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl9m1ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl3p9ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl7m4ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl1p8ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__rslvl8p9ovq;   //!
   TBranch        *b_TStancuVarsChunk_data__qlph16m12;   //!
   TBranch        *b_TStancuVarsChunk_data__qlph16m8;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql4;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02ql3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql1;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01tl2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02tl4;   //!
   TBranch        *b_TStancuVarsChunk_data__fnh1t5p1518;   //!
   TBranch        *b_TStancuVarsChunk_data__fnh11t14;   //!
   TBranch        *b_TStancuVarsChunk_data__ftq4;   //!
   TBranch        *b_TStancuVarsChunk_data__frsq14p20;   //!
   TBranch        *b_TStancuVarsChunk_data__frqlk02p16;   //!
   TBranch        *b_TStancuVarsChunk_data__trakove;   //!
   TBranch        *b_TStancuVarsChunk_data__fcertflx;   //!
   TBranch        *b_TStancuVarsChunk_data__srec1;   //!
   TBranch        *b_TStancuVarsChunk_data__nqovovthit;   //!
   TBranch        *b_TStancuVarsChunk_data__qcer2ovqtot;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frqqov;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__frnqcer1;   //!
   TBranch        *b_TStancuVarsChunk_data__cerfrdiff;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs7m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit9m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frchia10m4;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos4m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__chirsqrec;   //!
   TBranch        *b_TStancuVarsChunk_data__ffast;   //!
   TBranch        *b_TStancuVarsChunk_data__ffulmffas;   //!
   TBranch        *b_TStancuVarsChunk_data__fflux;   //!
   TBranch        *b_TStancuVarsChunk_data__frcer1;   //!
   TBranch        *b_TStancuVarsChunk_data__frcer2;   //!
   TBranch        *b_TStancuVarsChunk_data__frnqcer1m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frqqcer1m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcer1mov;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01ql3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02ql4;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02fthl;   //!
   TBranch        *b_TStancuVarsChunk_data__srec2;   //!
   TBranch        *b_TStancuVarsChunk_data__dist2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr5m4;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m6;   //!
   TBranch        *b_TStancuVarsChunk_data__chiqrec;   //!
   TBranch        *b_TStancuVarsChunk_data__tlfwd;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos6;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos5m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos7m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos10m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos10m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos6m1;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m4;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m5;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos10m3;   //!
   TBranch        *b_TStancuVarsChunk_data__frqcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos7;   //!
   TBranch        *b_TStancuVarsChunk_data__ql0cos10;   //!
   TBranch        *b_TStancuVarsChunk_data__qlkcos3;   //!
   TBranch        *b_TStancuVarsChunk_data__qlkcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__qlphcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos5;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos6;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__qlppmtcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos5;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos5m1;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos6m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m4;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m1;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m2;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos10m9;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos8;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos10m8;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrsnb7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhnb8m2;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhrsnb5;   //!
   TBranch        *b_TStancuVarsChunk_data__frrs8m1;   //!
   TBranch        *b_TStancuVarsChunk_data__ftnhit3m2;   //!
   TBranch        *b_TStancuVarsChunk_data__pi02tl3;   //!
   TBranch        *b_TStancuVarsChunk_data__pi01tl3;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr7m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr9m5;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmr4m2;   //!
   TBranch        *b_TStancuVarsChunk_data__qcer1ovqtot;   //!
   TBranch        *b_TStancuVarsChunk_data__fscitflx;   //!
   TBranch        *b_TStancuVarsChunk_data__abscerasy;   //!
   TBranch        *b_TStancuVarsChunk_data__qtmrcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos7;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos8m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m6;   //!
   TBranch        *b_TStancuVarsChunk_data__tlphcos9m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos8m7;   //!
   TBranch        *b_TStancuVarsChunk_data__frnhcos9m8;   //!
   TBranch        *b_TStancuVarsChunk_name_;   //!
   TBranch        *b_TStancuVarsTwoChunk_;   //!
   TBranch        *b_TStancuVarsTwoChunk_chunk_id_;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__fUniqueID;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__fBits;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_n000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_chia;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qllk000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_qllkhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__cth_tllk;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_n000;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__rs_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_nhit;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_qrec;   //!
   TBranch        *b_TStancuVarsTwoChunk_data__tim_mu;   //!
   TBranch        *b_TStancuVarsTwoChunk_name_;   //!
   TBranch        *b_TCalibrateEnergyChunk_;   //!
   TBranch        *b_TCalibrateEnergyChunk_chunk_id_;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__fUniqueID;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__fBits;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Tlep_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Tlep_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Qsq_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__Qsq_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__EnuQE_e;   //!
   TBranch        *b_TCalibrateEnergyChunk_data__EnuQE_m;   //!
   TBranch        *b_TCalibrateEnergyChunk_name_;   //!
   TBranch        *b_TInteractionPointChunk_;   //!
   TBranch        *b_TInteractionPointChunk_chunk_id_;   //!
   TBranch        *b_TInteractionPointChunk_data__fUniqueID;   //!
   TBranch        *b_TInteractionPointChunk_data__fBits;   //!
   TBranch        *b_TInteractionPointChunk_data__X_e;   //!
   TBranch        *b_TInteractionPointChunk_data__Y_e;   //!
   TBranch        *b_TInteractionPointChunk_data__Z_e;   //!
   TBranch        *b_TInteractionPointChunk_data__T_e;   //!
   TBranch        *b_TInteractionPointChunk_data__drive_e;   //!
   TBranch        *b_TInteractionPointChunk_data__tdrive_e;   //!
   TBranch        *b_TInteractionPointChunk_data__X_m;   //!
   TBranch        *b_TInteractionPointChunk_data__Y_m;   //!
   TBranch        *b_TInteractionPointChunk_data__Z_m;   //!
   TBranch        *b_TInteractionPointChunk_data__T_m;   //!
   TBranch        *b_TInteractionPointChunk_data__drive_m;   //!
   TBranch        *b_TInteractionPointChunk_data__tdrive_m;   //!
   TBranch        *b_TInteractionPointChunk_name_;   //!
   TBranch        *b_TOneTrackChunk_;   //!
   TBranch        *b_TOneTrackChunk_chunk_id_;   //!
   TBranch        *b_TOneTrackChunk_data__fUniqueID;   //!
   TBranch        *b_TOneTrackChunk_data__fBits;   //!
   TBranch        *b_TOneTrackChunk_data__iterations;   //!
   TBranch        *b_TOneTrackChunk_data__trackType;   //!
   TBranch        *b_TOneTrackChunk_data__X;   //!
   TBranch        *b_TOneTrackChunk_data__Y;   //!
   TBranch        *b_TOneTrackChunk_data__Z;   //!
   TBranch        *b_TOneTrackChunk_data__UX;   //!
   TBranch        *b_TOneTrackChunk_data__UY;   //!
   TBranch        *b_TOneTrackChunk_data__UZ;   //!
   TBranch        *b_TOneTrackChunk_data__T;   //!
   TBranch        *b_TOneTrackChunk_data__E;   //!
   TBranch        *b_TOneTrackChunk_data__distToMeanCer;   //!
   TBranch        *b_TOneTrackChunk_data__fluxScale;   //!
   TBranch        *b_TOneTrackChunk_data__relativeSci;   //!
   TBranch        *b_TOneTrackChunk_data__F;   //!
   TBranch        *b_TOneTrackChunk_name_;   //!
   TBranch        *b_TParticleIDChunk_;   //!
   TBranch        *b_TParticleIDChunk_chunk_id_;   //!
   TBranch        *b_TParticleIDChunk_data__fUniqueID;   //!
   TBranch        *b_TParticleIDChunk_data__fBits;   //!
   TBranch        *b_TParticleIDChunk_data__NUM_PAR;   //!
   TBranch        *b_TParticleIDChunk_data__PARAM;   //!
   TBranch        *b_TParticleIDChunk_data__NUM_OUT;   //!
   TBranch        *b_TParticleIDChunk_data__OUTPUT;   //!
   TBranch        *b_TParticleIDChunk_name_;   //!
   TBranch        *b_TTwoTrackChunk_;   //!
   TBranch        *b_TTwoTrackChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackChunk_data__trackType1;   //!
   TBranch        *b_TTwoTrackChunk_data__trackType2;   //!
   TBranch        *b_TTwoTrackChunk_data__X;   //!
   TBranch        *b_TTwoTrackChunk_data__Y;   //!
   TBranch        *b_TTwoTrackChunk_data__Z;   //!
   TBranch        *b_TTwoTrackChunk_data__T;   //!
   TBranch        *b_TTwoTrackChunk_data__M;   //!
   TBranch        *b_TTwoTrackChunk_data__CosOp;   //!
   TBranch        *b_TTwoTrackChunk_data__UX1;   //!
   TBranch        *b_TTwoTrackChunk_data__UY1;   //!
   TBranch        *b_TTwoTrackChunk_data__UZ1;   //!
   TBranch        *b_TTwoTrackChunk_data__E1;   //!
   TBranch        *b_TTwoTrackChunk_data__distToMeanCer1;   //!
   TBranch        *b_TTwoTrackChunk_data__S1;   //!
   TBranch        *b_TTwoTrackChunk_data__UX2;   //!
   TBranch        *b_TTwoTrackChunk_data__UY2;   //!
   TBranch        *b_TTwoTrackChunk_data__UZ2;   //!
   TBranch        *b_TTwoTrackChunk_data__E2;   //!
   TBranch        *b_TTwoTrackChunk_data__distToMeanCer2;   //!
   TBranch        *b_TTwoTrackChunk_data__S2;   //!
   TBranch        *b_TTwoTrackChunk_data__fluxScale;   //!
   TBranch        *b_TTwoTrackChunk_data__relativeSci;   //!
   TBranch        *b_TTwoTrackChunk_data__Fqqq;   //!
   TBranch        *b_TTwoTrackChunk_data__Fttt;   //!
   TBranch        *b_TTwoTrackChunk_data__F;   //!
   TBranch        *b_TTwoTrackChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackChunk_name_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__OneTrack_E;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__OneTrack_F;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__end_F;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__cut_DeltaF;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__end_DeltaF;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fitWasAborted;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__enteredMainFit;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__finalStartPointer;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__finalStartOrder;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackEndConditionsChunk_name_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_chunk_id_;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fUniqueID;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fBits;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__numStarts;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPointer;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startXpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startYpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startZpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startTime;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startE1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startE2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startS1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPhi1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startThet1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startS2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startPhi2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startThet2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__startF;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endXpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endYpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endZpos;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endTime;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endE1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endE2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endS1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endPhi1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endThet1;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endS2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endPhi2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endThet2;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__endF;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__skipped;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fixedMass;   //!
   TBranch        *b_TTwoTrackInternalsChunk_data__fitWasAborted;   //!
   TBranch        *b_TTwoTrackInternalsChunk_name_;   //!
   TBranch        *b_TProtonChunk_;   //!
   TBranch        *b_TProtonChunk_chunk_id_;   //!
   TBranch        *b_TProtonChunk_data__fUniqueID;   //!
   TBranch        *b_TProtonChunk_data__fBits;   //!
   TBranch        *b_TProtonChunk_data__E;   //!
   TBranch        *b_TProtonChunk_data__X;   //!
   TBranch        *b_TProtonChunk_data__Y;   //!
   TBranch        *b_TProtonChunk_data__Z;   //!
   TBranch        *b_TProtonChunk_data__T;   //!
   TBranch        *b_TProtonChunk_data__UX;   //!
   TBranch        *b_TProtonChunk_data__UY;   //!
   TBranch        *b_TProtonChunk_data__UZ;   //!
   TBranch        *b_TProtonChunk_data__TLLK;   //!
   TBranch        *b_TProtonChunk_data__QLLK;   //!
   TBranch        *b_TProtonChunk_name_;   //!
   TBranch        *b_TNeutronChunk_;   //!
   TBranch        *b_TNeutronChunk_chunk_id_;   //!
   TBranch        *b_TNeutronChunk_data__fUniqueID;   //!
   TBranch        *b_TNeutronChunk_data__fBits;   //!
   TBranch        *b_TNeutronChunk_data__E;   //!
   TBranch        *b_TNeutronChunk_data__X;   //!
   TBranch        *b_TNeutronChunk_data__Y;   //!
   TBranch        *b_TNeutronChunk_data__Z;   //!
   TBranch        *b_TNeutronChunk_data__T;   //!
   TBranch        *b_TNeutronChunk_data__TLLK;   //!
   TBranch        *b_TNeutronChunk_data__QLLK;   //!
   TBranch        *b_TNeutronChunk_name_;   //!
   TBranch        *b_TVetoClusterChunk_;   //!
   TBranch        *b_TVetoClusterChunk_chunk_id_;   //!
   TBranch        *b_TVetoClusterChunk_data__fUniqueID;   //!
   TBranch        *b_TVetoClusterChunk_data__fBits;   //!
   TBranch        *b_TVetoClusterChunk_data__Charge;   //!
   TBranch        *b_TVetoClusterChunk_data__Time;   //!
   TBranch        *b_TVetoClusterChunk_data__X;   //!
   TBranch        *b_TVetoClusterChunk_data__Y;   //!
   TBranch        *b_TVetoClusterChunk_data__Z;   //!
   TBranch        *b_TVetoClusterChunk_data__XSig;   //!
   TBranch        *b_TVetoClusterChunk_data__YSig;   //!
   TBranch        *b_TVetoClusterChunk_data__ZSig;   //!
   TBranch        *b_TVetoClusterChunk_data__SigMax;   //!
   TBranch        *b_TVetoClusterChunk_data__SepMean;   //!
   TBranch        *b_TVetoClusterChunk_data__TSig;   //!
   TBranch        *b_TVetoClusterChunk_data__Left;   //!
   TBranch        *b_TVetoClusterChunk_data__NC;   //!
   TBranch        *b_TVetoClusterChunk_data__Hit_Indx;   //!
   TBranch        *b_TVetoClusterChunk_data__Hits;   //!
   TBranch        *b_TVetoClusterChunk_data__Subevent;   //!
   TBranch        *b_TVetoClusterChunk_name_;   //!
   TBranch        *b_TVetoLinkingChunk_;   //!
   TBranch        *b_TVetoLinkingChunk_chunk_id_;   //!
   TBranch        *b_TVetoLinkingChunk_data__fUniqueID;   //!
   TBranch        *b_TVetoLinkingChunk_data__fBits;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnDl;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExDl;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnSigma;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExSigma;   //!
   TBranch        *b_TVetoLinkingChunk_data__EnDt;   //!
   TBranch        *b_TVetoLinkingChunk_data__ExDt;   //!
   TBranch        *b_TVetoLinkingChunk_data__NC;   //!
   TBranch        *b_TVetoLinkingChunk_data__Enter;   //!
   TBranch        *b_TVetoLinkingChunk_data__Exit;   //!
   TBranch        *b_TVetoLinkingChunk_name_;   //!
   TBranch        *b_TReweightToCVChunk_;   //!
   TBranch        *b_TReweightToCVChunk_chunk_id_;   //!
   TBranch        *b_TReweightToCVChunk_data__fUniqueID;   //!
   TBranch        *b_TReweightToCVChunk_data__fBits;   //!
   TBranch        *b_TReweightToCVChunk_data__radius;   //!
   TBranch        *b_TReweightToCVChunk_data__ppi0;   //!
   TBranch        *b_TReweightToCVChunk_data__nuanceChannel;   //!
   TBranch        *b_TReweightToCVChunk_data__nuType;   //!
   TBranch        *b_TReweightToCVChunk_data__enu;   //!
   TBranch        *b_TReweightToCVChunk_data__parentId;   //!
   TBranch        *b_TReweightToCVChunk_data__pParent;   //!
   TBranch        *b_TReweightToCVChunk_data__xsecweight;   //!
   TBranch        *b_TReweightToCVChunk_data__fluxweight;   //!
   TBranch        *b_TReweightToCVChunk_name_;   //!
   TBranch        *b_TWeightDetailsChunk_;   //!
   TBranch        *b_TWeightDetailsChunk_chunk_id_;   //!
   TBranch        *b_TWeightDetailsChunk_data__fUniqueID;   //!
   TBranch        *b_TWeightDetailsChunk_data__fBits;   //!
   TBranch        *b_TWeightDetailsChunk_data__resangle_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__dirt_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0mom_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__deltamom_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__raddelta_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0coh_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pi0res_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__nuance_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__multpi0_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__multdelta_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pipflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__pimflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__kpflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__kmflux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__k0flux_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__histo_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__npip_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__npim_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__absorber_wgt;   //!
   TBranch        *b_TWeightDetailsChunk_data__totalweight;   //!
   TBranch        *b_TWeightDetailsChunk_name_;   //!
   TBranch        *b_TMulMatWeightsChunk_;   //!
   TBranch        *b_TMulMatWeightsChunk_chunk_id_;   //!
   TBranch        *b_TMulMatWeightsChunk_data__fUniqueID;   //!
   TBranch        *b_TMulMatWeightsChunk_data__fBits;   //!
   TBranch        *b_TMulMatWeightsChunk_data__CVWeight;   //!
   TBranch        *b_TMulMatWeightsChunk_data__NumSysts;   //!
   TBranch        *b_TMulMatWeightsChunk_data__PosUniWeight;   //!
   TBranch        *b_TMulMatWeightsChunk_data__NegUniWeight;   //!
   TBranch        *b_TMulMatWeightsChunk_data__NumMultisims;   //!
   TBranch        *b_TMulMatWeightsChunk_data__MultiWeight;   //!
   TBranch        *b_TMulMatWeightsChunk_name_;   //!

   newroot(TTree *tree=0);
   virtual ~newroot();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   std::vector< int > entry_marks;
   void GrabVars(std::vector<std::vector< std::vector< Float_t> > > & container, int hndex, int index, int option, bool its_Multisim);
   void FillVars(int &nthrows, int multithrows, Float_t ovars[][1000], std::vector< std::vector< std::vector< Float_t > > > container, TTree* out_tree);
   int GetNpi0();
};

#endif

#ifdef newroot_cxx
newroot::newroot(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   std::vector<TString> filelist = {
	   "/scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul.root",
	   "/scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul_onlypi0_common_det.root",
	   "/scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07dirt_weighted_mul.root"};

   TString filename = filelist[0];
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(filename);
      if (!f || !f->IsOpen()) {
         f = new TFile(filename);      
		 }
      f->GetObject("MiniBooNE",tree);

   }
   Init(tree);
}

newroot::~newroot()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t newroot::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t newroot::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void newroot::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set array pointer
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TIME[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPFS[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTCER[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NHTTSCI[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__IPROCTAG[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__NOTPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloEVNTChunk; ++i) TMonteCarloEVNTChunk_data__TITPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NHTVCER[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NHTVSCI[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__NOVPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__TIVPMT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__XVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__YVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__ZVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloVETOChunk; ++i) TMonteCarloVETOChunk_data__EVHT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__XMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__YMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ZMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__SMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ELMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__TIMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__IPMUT[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__XCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__YCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ZCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__ELCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__TICUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloMUTRChunk; ++i) TMonteCarloMUTRChunk_data__PTCUB[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__gotPE[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__distToSource[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceX[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceY[i] = 0;
   for(int i=0; i<kMaxTMonteCarloINVIChunk; ++i) TMonteCarloINVIChunk_data__sourceZ[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__id[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_eng[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_t[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__ipfs[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttcer[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttVcer[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttsci[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__nhttVsci[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__time[i] = 0;
   for(int i=0; i<kMaxTMCRawEventChunk; ++i) TMCRawEventChunk_data__iproctag[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_NUM[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_CMD[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_DIAG[i] = 0;
   for(int i=0; i<kMaxTGlobalTankHeaderChunk; ++i) TGlobalTankHeaderChunk_data__BCAST_LAT[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__CHANNEL[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__OFFSET[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC0[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC1[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC2[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__Q_ADC3[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC0[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC1[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC2[i] = 0;
   for(int i=0; i<kMaxTUncalibratedDataChunk; ++i) TUncalibratedDataChunk_data__T_ADC3[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VPMT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VQ[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__TT[i] = 0;
   for(int i=0; i<kMaxTSplitEventChunk; ++i) TSplitEventChunk_data__VT[i] = 0;
   for(int i=0; i<kMaxTParticleIDChunk; ++i) TParticleIDChunk_data__PARAM[i] = 0;
   for(int i=0; i<kMaxTParticleIDChunk; ++i) TParticleIDChunk_data__OUTPUT[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPointer[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startXpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startYpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startZpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startTime[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startE1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startE2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startS1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPhi1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startThet1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startS2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startPhi2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startThet2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__startF[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endXpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endYpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endZpos[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endTime[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endE1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endE2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endS1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endPhi1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endThet1[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endS2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endPhi2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endThet2[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__endF[i] = 0;
   for(int i=0; i<kMaxTTwoTrackInternalsChunk; ++i) TTwoTrackInternalsChunk_data__skipped[i] = 0;
   for(int i=0; i<kMaxTMulMatWeightsChunk; ++i) TMulMatWeightsChunk_data__PosUniWeight[i] = 0;
   for(int i=0; i<kMaxTMulMatWeightsChunk; ++i) TMulMatWeightsChunk_data__NegUniWeight[i] = 0;
   for(int i=0; i<kMaxTMulMatWeightsChunk; ++i) TMulMatWeightsChunk_data__MultiWeight[i] = 0;

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("THistory", &THistory_, &b_THistory_);
   fChain->SetBranchAddress("THistory.fUniqueID", THistory_fUniqueID, &b_THistory_fUniqueID);
   fChain->SetBranchAddress("THistory.fBits", THistory_fBits, &b_THistory_fBits);
   fChain->SetBranchAddress("THistory.algo_name_", THistory_algo_name_, &b_THistory_algo_name_);
   fChain->SetBranchAddress("THistory.algo_inst_", THistory_algo_inst_, &b_THistory_algo_inst_);
   fChain->SetBranchAddress("THistory.chunk_name_", THistory_chunk_name_, &b_THistory_chunk_name_);
   fChain->SetBranchAddress("THistory.ext_name_", THistory_ext_name_, &b_THistory_ext_name_);
   fChain->SetBranchAddress("THistory.version_", THistory_version_, &b_THistory_version_);
   fChain->SetBranchAddress("THistory.node_", THistory_node_, &b_THistory_node_);
   fChain->SetBranchAddress("THistory.database_", THistory_database_, &b_THistory_database_);
   fChain->SetBranchAddress("THistory.inst_num_", THistory_inst_num_, &b_THistory_inst_num_);
   fChain->SetBranchAddress("THistory.timestamp_", THistory_timestamp_, &b_THistory_timestamp_);
   fChain->SetBranchAddress("THistory.rcpid_", THistory_rcpid_, &b_THistory_rcpid_);
   fChain->SetBranchAddress("THistory.chunkid_", THistory_chunkid_, &b_THistory_chunkid_);
   fChain->SetBranchAddress("THistory.parents_", THistory_parents_, &b_THistory_parents_);
   fChain->SetBranchAddress("THistory.tags_", THistory_tags_, &b_THistory_tags_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk", &TMonteCarloEVNTChunk_, &b_TMonteCarloEVNTChunk_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.chunk_id_", TMonteCarloEVNTChunk_chunk_id_, &b_TMonteCarloEVNTChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.fUniqueID", TMonteCarloEVNTChunk_data__fUniqueID, &b_TMonteCarloEVNTChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.fBits", TMonteCarloEVNTChunk_data__fBits, &b_TMonteCarloEVNTChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VERSION", TMonteCarloEVNTChunk_data__VERSION, &b_TMonteCarloEVNTChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VAR_FLAGS", TMonteCarloEVNTChunk_data__VAR_FLAGS, &b_TMonteCarloEVNTChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IEVNT", TMonteCarloEVNTChunk_data__IEVNT, &b_TMonteCarloEVNTChunk_data__IEVNT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.EVWT", TMonteCarloEVNTChunk_data__EVWT, &b_TMonteCarloEVNTChunk_data__EVWT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.INNO", TMonteCarloEVNTChunk_data__INNO, &b_TMonteCarloEVNTChunk_data__INNO);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.PNEU[4]", TMonteCarloEVNTChunk_data__PNEU, &b_TMonteCarloEVNTChunk_data__PNEU);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NDCY", TMonteCarloEVNTChunk_data__NDCY, &b_TMonteCarloEVNTChunk_data__NDCY);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NFSP", TMonteCarloEVNTChunk_data__NFSP, &b_TMonteCarloEVNTChunk_data__NFSP);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.VRTX[127][3]", TMonteCarloEVNTChunk_data__VRTX, &b_TMonteCarloEVNTChunk_data__VRTX);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.TIME", TMonteCarloEVNTChunk_data__TIME, &b_TMonteCarloEVNTChunk_data__TIME);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IPFS", TMonteCarloEVNTChunk_data__IPFS, &b_TMonteCarloEVNTChunk_data__IPFS);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.PFSP[127][4]", TMonteCarloEVNTChunk_data__PFSP, &b_TMonteCarloEVNTChunk_data__PFSP);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTTCER", TMonteCarloEVNTChunk_data__NHTTCER, &b_TMonteCarloEVNTChunk_data__NHTTCER);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTTSCI", TMonteCarloEVNTChunk_data__NHTTSCI, &b_TMonteCarloEVNTChunk_data__NHTTSCI);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NPROCTAG", TMonteCarloEVNTChunk_data__NPROCTAG, &b_TMonteCarloEVNTChunk_data__NPROCTAG);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.IPROCTAG", TMonteCarloEVNTChunk_data__IPROCTAG, &b_TMonteCarloEVNTChunk_data__IPROCTAG);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NHTT", TMonteCarloEVNTChunk_data__NHTT, &b_TMonteCarloEVNTChunk_data__NHTT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.NOTPMT", TMonteCarloEVNTChunk_data__NOTPMT, &b_TMonteCarloEVNTChunk_data__NOTPMT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.TITPMT", TMonteCarloEVNTChunk_data__TITPMT, &b_TMonteCarloEVNTChunk_data__TITPMT);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.RNDM1", TMonteCarloEVNTChunk_data__RNDM1, &b_TMonteCarloEVNTChunk_data__RNDM1);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.data_.RNDM2", TMonteCarloEVNTChunk_data__RNDM2, &b_TMonteCarloEVNTChunk_data__RNDM2);
   fChain->SetBranchAddress("TMonteCarloEVNTChunk.name_", TMonteCarloEVNTChunk_name_, &b_TMonteCarloEVNTChunk_name_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk", &TMonteCarloVETOChunk_, &b_TMonteCarloVETOChunk_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.chunk_id_", TMonteCarloVETOChunk_chunk_id_, &b_TMonteCarloVETOChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.fUniqueID", TMonteCarloVETOChunk_data__fUniqueID, &b_TMonteCarloVETOChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.fBits", TMonteCarloVETOChunk_data__fBits, &b_TMonteCarloVETOChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.VERSION", TMonteCarloVETOChunk_data__VERSION, &b_TMonteCarloVETOChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.VAR_FLAGS", TMonteCarloVETOChunk_data__VAR_FLAGS, &b_TMonteCarloVETOChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.IEVNV", TMonteCarloVETOChunk_data__IEVNV, &b_TMonteCarloVETOChunk_data__IEVNV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NFSPV", TMonteCarloVETOChunk_data__NFSPV, &b_TMonteCarloVETOChunk_data__NFSPV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTVCER", TMonteCarloVETOChunk_data__NHTVCER, &b_TMonteCarloVETOChunk_data__NHTVCER);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTVSCI", TMonteCarloVETOChunk_data__NHTVSCI, &b_TMonteCarloVETOChunk_data__NHTVSCI);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NHTV", TMonteCarloVETOChunk_data__NHTV, &b_TMonteCarloVETOChunk_data__NHTV);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.NOVPMT", TMonteCarloVETOChunk_data__NOVPMT, &b_TMonteCarloVETOChunk_data__NOVPMT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.TIVPMT", TMonteCarloVETOChunk_data__TIVPMT, &b_TMonteCarloVETOChunk_data__TIVPMT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.XVHT", TMonteCarloVETOChunk_data__XVHT, &b_TMonteCarloVETOChunk_data__XVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.YVHT", TMonteCarloVETOChunk_data__YVHT, &b_TMonteCarloVETOChunk_data__YVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.ZVHT", TMonteCarloVETOChunk_data__ZVHT, &b_TMonteCarloVETOChunk_data__ZVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.data_.EVHT", TMonteCarloVETOChunk_data__EVHT, &b_TMonteCarloVETOChunk_data__EVHT);
   fChain->SetBranchAddress("TMonteCarloVETOChunk.name_", TMonteCarloVETOChunk_name_, &b_TMonteCarloVETOChunk_name_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk", &TMonteCarloMUTRChunk_, &b_TMonteCarloMUTRChunk_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.chunk_id_", TMonteCarloMUTRChunk_chunk_id_, &b_TMonteCarloMUTRChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.fUniqueID", TMonteCarloMUTRChunk_data__fUniqueID, &b_TMonteCarloMUTRChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.fBits", TMonteCarloMUTRChunk_data__fBits, &b_TMonteCarloMUTRChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.VERSION", TMonteCarloMUTRChunk_data__VERSION, &b_TMonteCarloMUTRChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.VAR_FLAGS", TMonteCarloMUTRChunk_data__VAR_FLAGS, &b_TMonteCarloMUTRChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.IEVNM", TMonteCarloMUTRChunk_data__IEVNM, &b_TMonteCarloMUTRChunk_data__IEVNM);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.NHTMUT", TMonteCarloMUTRChunk_data__NHTMUT, &b_TMonteCarloMUTRChunk_data__NHTMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.XMUT", TMonteCarloMUTRChunk_data__XMUT, &b_TMonteCarloMUTRChunk_data__XMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.YMUT", TMonteCarloMUTRChunk_data__YMUT, &b_TMonteCarloMUTRChunk_data__YMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ZMUT", TMonteCarloMUTRChunk_data__ZMUT, &b_TMonteCarloMUTRChunk_data__ZMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.SMUT", TMonteCarloMUTRChunk_data__SMUT, &b_TMonteCarloMUTRChunk_data__SMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ELMUT", TMonteCarloMUTRChunk_data__ELMUT, &b_TMonteCarloMUTRChunk_data__ELMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TIMUT", TMonteCarloMUTRChunk_data__TIMUT, &b_TMonteCarloMUTRChunk_data__TIMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.IPMUT", TMonteCarloMUTRChunk_data__IPMUT, &b_TMonteCarloMUTRChunk_data__IPMUT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.NHTCUB", TMonteCarloMUTRChunk_data__NHTCUB, &b_TMonteCarloMUTRChunk_data__NHTCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.XCUB", TMonteCarloMUTRChunk_data__XCUB, &b_TMonteCarloMUTRChunk_data__XCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.YCUB", TMonteCarloMUTRChunk_data__YCUB, &b_TMonteCarloMUTRChunk_data__YCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ZCUB", TMonteCarloMUTRChunk_data__ZCUB, &b_TMonteCarloMUTRChunk_data__ZCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.ELCUB", TMonteCarloMUTRChunk_data__ELCUB, &b_TMonteCarloMUTRChunk_data__ELCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TICUB", TMonteCarloMUTRChunk_data__TICUB, &b_TMonteCarloMUTRChunk_data__TICUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.PTCUB", TMonteCarloMUTRChunk_data__PTCUB, &b_TMonteCarloMUTRChunk_data__PTCUB);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.INVT", TMonteCarloMUTRChunk_data__INVT, &b_TMonteCarloMUTRChunk_data__INVT);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRV[8]", TMonteCarloMUTRChunk_data__TRV, &b_TMonteCarloMUTRChunk_data__TRV);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.INTK", TMonteCarloMUTRChunk_data__INTK, &b_TMonteCarloMUTRChunk_data__INTK);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRI[8]", TMonteCarloMUTRChunk_data__TRI, &b_TMonteCarloMUTRChunk_data__TRI);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.LVTK", TMonteCarloMUTRChunk_data__LVTK, &b_TMonteCarloMUTRChunk_data__LVTK);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRO[8]", TMonteCarloMUTRChunk_data__TRO, &b_TMonteCarloMUTRChunk_data__TRO);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.MUSTP", TMonteCarloMUTRChunk_data__MUSTP, &b_TMonteCarloMUTRChunk_data__MUSTP);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRS[8]", TMonteCarloMUTRChunk_data__TRS, &b_TMonteCarloMUTRChunk_data__TRS);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.MUDCY", TMonteCarloMUTRChunk_data__MUDCY, &b_TMonteCarloMUTRChunk_data__MUDCY);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.data_.TRE[8]", TMonteCarloMUTRChunk_data__TRE, &b_TMonteCarloMUTRChunk_data__TRE);
   fChain->SetBranchAddress("TMonteCarloMUTRChunk.name_", TMonteCarloMUTRChunk_name_, &b_TMonteCarloMUTRChunk_name_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk", &TMonteCarloINVIChunk_, &b_TMonteCarloINVIChunk_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.chunk_id_", TMonteCarloINVIChunk_chunk_id_, &b_TMonteCarloINVIChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.fUniqueID", TMonteCarloINVIChunk_data__fUniqueID, &b_TMonteCarloINVIChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.fBits", TMonteCarloINVIChunk_data__fBits, &b_TMonteCarloINVIChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.VERSION", TMonteCarloINVIChunk_data__VERSION, &b_TMonteCarloINVIChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.VAR_FLAGS", TMonteCarloINVIChunk_data__VAR_FLAGS, &b_TMonteCarloINVIChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.IEVNT", TMonteCarloINVIChunk_data__IEVNT, &b_TMonteCarloINVIChunk_data__IEVNT);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.NFSPI", TMonteCarloINVIChunk_data__NFSPI, &b_TMonteCarloINVIChunk_data__NFSPI);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.gotPE", TMonteCarloINVIChunk_data__gotPE, &b_TMonteCarloINVIChunk_data__gotPE);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.distToSource", TMonteCarloINVIChunk_data__distToSource, &b_TMonteCarloINVIChunk_data__distToSource);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceX", TMonteCarloINVIChunk_data__sourceX, &b_TMonteCarloINVIChunk_data__sourceX);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceY", TMonteCarloINVIChunk_data__sourceY, &b_TMonteCarloINVIChunk_data__sourceY);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.data_.sourceZ", TMonteCarloINVIChunk_data__sourceZ, &b_TMonteCarloINVIChunk_data__sourceZ);
   fChain->SetBranchAddress("TMonteCarloINVIChunk.name_", TMonteCarloINVIChunk_name_, &b_TMonteCarloINVIChunk_name_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk", &TMonteCarloNUANChunk_, &b_TMonteCarloNUANChunk_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.chunk_id_", TMonteCarloNUANChunk_chunk_id_, &b_TMonteCarloNUANChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.fUniqueID", TMonteCarloNUANChunk_data__fUniqueID, &b_TMonteCarloNUANChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.fBits", TMonteCarloNUANChunk_data__fBits, &b_TMonteCarloNUANChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.VERSION", TMonteCarloNUANChunk_data__VERSION, &b_TMonteCarloNUANChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.VAR_FLAGS", TMonteCarloNUANChunk_data__VAR_FLAGS, &b_TMonteCarloNUANChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.rateid", TMonteCarloNUANChunk_data__rateid, &b_TMonteCarloNUANChunk_data__rateid);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.e_neutrino", TMonteCarloNUANChunk_data__e_neutrino, &b_TMonteCarloNUANChunk_data__e_neutrino);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.e_lepton", TMonteCarloNUANChunk_data__e_lepton, &b_TMonteCarloNUANChunk_data__e_lepton);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.k_target", TMonteCarloNUANChunk_data__k_target, &b_TMonteCarloNUANChunk_data__k_target);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.qsq", TMonteCarloNUANChunk_data__qsq, &b_TMonteCarloNUANChunk_data__qsq);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.w", TMonteCarloNUANChunk_data__w, &b_TMonteCarloNUANChunk_data__w);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.x", TMonteCarloNUANChunk_data__x, &b_TMonteCarloNUANChunk_data__x);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.y", TMonteCarloNUANChunk_data__y, &b_TMonteCarloNUANChunk_data__y);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.phi_cm", TMonteCarloNUANChunk_data__phi_cm, &b_TMonteCarloNUANChunk_data__phi_cm);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.data_.cos_fermi", TMonteCarloNUANChunk_data__cos_fermi, &b_TMonteCarloNUANChunk_data__cos_fermi);
   fChain->SetBranchAddress("TMonteCarloNUANChunk.name_", TMonteCarloNUANChunk_name_, &b_TMonteCarloNUANChunk_name_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk", &TMonteCarloBEAMChunk_, &b_TMonteCarloBEAMChunk_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.chunk_id_", TMonteCarloBEAMChunk_chunk_id_, &b_TMonteCarloBEAMChunk_chunk_id_);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fUniqueID", TMonteCarloBEAMChunk_data__fUniqueID, &b_TMonteCarloBEAMChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fBits", TMonteCarloBEAMChunk_data__fBits, &b_TMonteCarloBEAMChunk_data__fBits);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VERSION", TMonteCarloBEAMChunk_data__VERSION, &b_TMonteCarloBEAMChunk_data__VERSION);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.VAR_FLAGS", TMonteCarloBEAMChunk_data__VAR_FLAGS, &b_TMonteCarloBEAMChunk_data__VAR_FLAGS);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.beamwgt", TMonteCarloBEAMChunk_data__beamwgt, &b_TMonteCarloBEAMChunk_data__beamwgt);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ntp", TMonteCarloBEAMChunk_data__ntp, &b_TMonteCarloBEAMChunk_data__ntp);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.npart", TMonteCarloBEAMChunk_data__npart, &b_TMonteCarloBEAMChunk_data__npart);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.id", TMonteCarloBEAMChunk_data__id, &b_TMonteCarloBEAMChunk_data__id);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_pos[20][3]", TMonteCarloBEAMChunk_data__ini_pos, &b_TMonteCarloBEAMChunk_data__ini_pos);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_mom[20][3]", TMonteCarloBEAMChunk_data__ini_mom, &b_TMonteCarloBEAMChunk_data__ini_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_eng", TMonteCarloBEAMChunk_data__ini_eng, &b_TMonteCarloBEAMChunk_data__ini_eng);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.ini_t", TMonteCarloBEAMChunk_data__ini_t, &b_TMonteCarloBEAMChunk_data__ini_t);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_mom[20][3]", TMonteCarloBEAMChunk_data__fin_mom, &b_TMonteCarloBEAMChunk_data__fin_mom);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.data_.fin_pol[20][3]", TMonteCarloBEAMChunk_data__fin_pol, &b_TMonteCarloBEAMChunk_data__fin_pol);
   fChain->SetBranchAddress("TMonteCarloBEAMChunk.name_", TMonteCarloBEAMChunk_name_, &b_TMonteCarloBEAMChunk_name_);
   fChain->SetBranchAddress("TMCRawEventChunk", &TMCRawEventChunk_, &b_TMCRawEventChunk_);
   fChain->SetBranchAddress("TMCRawEventChunk.chunk_id_", TMCRawEventChunk_chunk_id_, &b_TMCRawEventChunk_chunk_id_);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.fUniqueID", TMCRawEventChunk_data__fUniqueID, &b_TMCRawEventChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.fBits", TMCRawEventChunk_data__fBits, &b_TMCRawEventChunk_data__fBits);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.numhits", TMCRawEventChunk_data__numhits, &b_TMCRawEventChunk_data__numhits);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.MCVersion", TMCRawEventChunk_data__MCVersion, &b_TMCRawEventChunk_data__MCVersion);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.varflags", TMCRawEventChunk_data__varflags, &b_TMCRawEventChunk_data__varflags);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nutype", TMCRawEventChunk_data__nutype, &b_TMCRawEventChunk_data__nutype);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nfsp", TMCRawEventChunk_data__nfsp, &b_TMCRawEventChunk_data__nfsp);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ndcy", TMCRawEventChunk_data__ndcy, &b_TMCRawEventChunk_data__ndcy);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.evwt", TMCRawEventChunk_data__evwt, &b_TMCRawEventChunk_data__evwt);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.pneu[4]", TMCRawEventChunk_data__pneu, &b_TMCRawEventChunk_data__pneu);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ipfs", TMCRawEventChunk_data__ipfs, &b_TMCRawEventChunk_data__ipfs);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttcer", TMCRawEventChunk_data__nhttcer, &b_TMCRawEventChunk_data__nhttcer);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttVcer", TMCRawEventChunk_data__nhttVcer, &b_TMCRawEventChunk_data__nhttVcer);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttsci", TMCRawEventChunk_data__nhttsci, &b_TMCRawEventChunk_data__nhttsci);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nhttVsci", TMCRawEventChunk_data__nhttVsci, &b_TMCRawEventChunk_data__nhttVsci);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.time", TMCRawEventChunk_data__time, &b_TMCRawEventChunk_data__time);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.pfsp[127][4]", TMCRawEventChunk_data__pfsp, &b_TMCRawEventChunk_data__pfsp);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.vrtx[127][3]", TMCRawEventChunk_data__vrtx, &b_TMCRawEventChunk_data__vrtx);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.svrtx[3]", TMCRawEventChunk_data__svrtx, &b_TMCRawEventChunk_data__svrtx);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.ievnt", TMCRawEventChunk_data__ievnt, &b_TMCRawEventChunk_data__ievnt);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.nproctag", TMCRawEventChunk_data__nproctag, &b_TMCRawEventChunk_data__nproctag);
   fChain->SetBranchAddress("TMCRawEventChunk.data_.iproctag", TMCRawEventChunk_data__iproctag, &b_TMCRawEventChunk_data__iproctag);
   fChain->SetBranchAddress("TMCRawEventChunk.name_", TMCRawEventChunk_name_, &b_TMCRawEventChunk_name_);
   fChain->SetBranchAddress("TMCHitMatchChunk", &TMCHitMatchChunk_, &b_TMCHitMatchChunk_);
   fChain->SetBranchAddress("TMCHitMatchChunk.chunk_id_", TMCHitMatchChunk_chunk_id_, &b_TMCHitMatchChunk_chunk_id_);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.fUniqueID", TMCHitMatchChunk_data__fUniqueID, &b_TMCHitMatchChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.fBits", TMCHitMatchChunk_data__fBits, &b_TMCHitMatchChunk_data__fBits);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Nhit", TMCHitMatchChunk_data__Nhit, &b_TMCHitMatchChunk_data__Nhit);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Hit2FSP[17406]", TMCHitMatchChunk_data__Hit2FSP, &b_TMCHitMatchChunk_data__Hit2FSP);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.NumFSP", TMCHitMatchChunk_data__NumFSP, &b_TMCHitMatchChunk_data__NumFSP);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.PEs[127]", TMCHitMatchChunk_data__PEs, &b_TMCHitMatchChunk_data__PEs);
   fChain->SetBranchAddress("TMCHitMatchChunk.data_.Hits[127]", TMCHitMatchChunk_data__Hits, &b_TMCHitMatchChunk_data__Hits);
   fChain->SetBranchAddress("TMCHitMatchChunk.name_", TMCHitMatchChunk_name_, &b_TMCHitMatchChunk_name_);
   fChain->SetBranchAddress("TGlobalHeaderChunk", &TGlobalHeaderChunk_, &b_TGlobalHeaderChunk_);
   fChain->SetBranchAddress("TGlobalHeaderChunk.chunk_id_", TGlobalHeaderChunk_chunk_id_, &b_TGlobalHeaderChunk_chunk_id_);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.fUniqueID", TGlobalHeaderChunk_data__fUniqueID, &b_TGlobalHeaderChunk_data__fUniqueID);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.fBits", TGlobalHeaderChunk_data__fBits, &b_TGlobalHeaderChunk_data__fBits);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.DAQ_VERSION_NUMBER", TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER, &b_TGlobalHeaderChunk_data__DAQ_VERSION_NUMBER);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RECORD_TYPE", TGlobalHeaderChunk_data__RECORD_TYPE, &b_TGlobalHeaderChunk_data__RECORD_TYPE);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RECORD_ORIGIN", TGlobalHeaderChunk_data__RECORD_ORIGIN, &b_TGlobalHeaderChunk_data__RECORD_ORIGIN);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.NUM_BYTES", TGlobalHeaderChunk_data__NUM_BYTES, &b_TGlobalHeaderChunk_data__NUM_BYTES);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.RUN_NUM", TGlobalHeaderChunk_data__RUN_NUM, &b_TGlobalHeaderChunk_data__RUN_NUM);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.SECS", TGlobalHeaderChunk_data__SECS, &b_TGlobalHeaderChunk_data__SECS);
   fChain->SetBranchAddress("TGlobalHeaderChunk.data_.MSECS", TGlobalHeaderChunk_data__MSECS, &b_TGlobalHeaderChunk_data__MSECS);
   fChain->SetBranchAddress("TGlobalHeaderChunk.name_", TGlobalHeaderChunk_name_, &b_TGlobalHeaderChunk_name_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk", &TGlobalTankHeaderChunk_, &b_TGlobalTankHeaderChunk_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.chunk_id_", TGlobalTankHeaderChunk_chunk_id_, &b_TGlobalTankHeaderChunk_chunk_id_);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.fUniqueID", TGlobalTankHeaderChunk_data__fUniqueID, &b_TGlobalTankHeaderChunk_data__fUniqueID);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.fBits", TGlobalTankHeaderChunk_data__fBits, &b_TGlobalTankHeaderChunk_data__fBits);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.RUN_NUM", TGlobalTankHeaderChunk_data__RUN_NUM, &b_TGlobalTankHeaderChunk_data__RUN_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.EVENT_NUM", TGlobalTankHeaderChunk_data__EVENT_NUM, &b_TGlobalTankHeaderChunk_data__EVENT_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.SUB_RUN_NUM", TGlobalTankHeaderChunk_data__SUB_RUN_NUM, &b_TGlobalTankHeaderChunk_data__SUB_RUN_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.EVENT_TYPE", TGlobalTankHeaderChunk_data__EVENT_TYPE, &b_TGlobalTankHeaderChunk_data__EVENT_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_EV_NUM", TGlobalTankHeaderChunk_data__TRIG_EV_NUM, &b_TGlobalTankHeaderChunk_data__TRIG_EV_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_FIFO", TGlobalTankHeaderChunk_data__TRIG_FIFO, &b_TGlobalTankHeaderChunk_data__TRIG_FIFO);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NTSAS_FIFO", TGlobalTankHeaderChunk_data__NTSAS_FIFO, &b_TGlobalTankHeaderChunk_data__NTSAS_FIFO);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.GPS_LOWER", TGlobalTankHeaderChunk_data__GPS_LOWER, &b_TGlobalTankHeaderChunk_data__GPS_LOWER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.GPS_UPPER", TGlobalTankHeaderChunk_data__GPS_UPPER, &b_TGlobalTankHeaderChunk_data__GPS_UPPER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_EV_TYPE", TGlobalTankHeaderChunk_data__TRIG_EV_TYPE, &b_TGlobalTankHeaderChunk_data__TRIG_EV_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_NTSAS", TGlobalTankHeaderChunk_data__TRIG_NTSAS, &b_TGlobalTankHeaderChunk_data__TRIG_NTSAS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.TRIG_NBCASTS", TGlobalTankHeaderChunk_data__TRIG_NBCASTS, &b_TGlobalTankHeaderChunk_data__TRIG_NBCASTS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_NUM", TGlobalTankHeaderChunk_data__BCAST_NUM, &b_TGlobalTankHeaderChunk_data__BCAST_NUM);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_CMD", TGlobalTankHeaderChunk_data__BCAST_CMD, &b_TGlobalTankHeaderChunk_data__BCAST_CMD);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_DIAG", TGlobalTankHeaderChunk_data__BCAST_DIAG, &b_TGlobalTankHeaderChunk_data__BCAST_DIAG);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.BCAST_LAT", TGlobalTankHeaderChunk_data__BCAST_LAT, &b_TGlobalTankHeaderChunk_data__BCAST_LAT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACT_TIMER[23]", TGlobalTankHeaderChunk_data__ACT_TIMER, &b_TGlobalTankHeaderChunk_data__ACT_TIMER);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.FIFO_HIST[100]", TGlobalTankHeaderChunk_data__FIFO_HIST, &b_TGlobalTankHeaderChunk_data__FIFO_HIST);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.FIFO_HIST_POINT", TGlobalTankHeaderChunk_data__FIFO_HIST_POINT, &b_TGlobalTankHeaderChunk_data__FIFO_HIST_POINT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACTIVITY_HIST[30]", TGlobalTankHeaderChunk_data__ACTIVITY_HIST, &b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NTSAS[30]", TGlobalTankHeaderChunk_data__NTSAS, &b_TGlobalTankHeaderChunk_data__NTSAS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.ACTIVITY_HIST_POINT", TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT, &b_TGlobalTankHeaderChunk_data__ACTIVITY_HIST_POINT);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_RCVR", TGlobalTankHeaderChunk_data__QTH_RCVR, &b_TGlobalTankHeaderChunk_data__QTH_RCVR);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_BUFSIZE", TGlobalTankHeaderChunk_data__QTH_BUFSIZE, &b_TGlobalTankHeaderChunk_data__QTH_BUFSIZE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_NUM_HITS", TGlobalTankHeaderChunk_data__QTH_NUM_HITS, &b_TGlobalTankHeaderChunk_data__QTH_NUM_HITS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.QTH_DATA_TYPE", TGlobalTankHeaderChunk_data__QTH_DATA_TYPE, &b_TGlobalTankHeaderChunk_data__QTH_DATA_TYPE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.NUM_UNCAL_HITS", TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS, &b_TGlobalTankHeaderChunk_data__NUM_UNCAL_HITS);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.data_.RATE", TGlobalTankHeaderChunk_data__RATE, &b_TGlobalTankHeaderChunk_data__RATE);
   fChain->SetBranchAddress("TGlobalTankHeaderChunk.name_", TGlobalTankHeaderChunk_name_, &b_TGlobalTankHeaderChunk_name_);
   fChain->SetBranchAddress("TUncalibratedDataChunk", &TUncalibratedDataChunk_, &b_TUncalibratedDataChunk_);
   fChain->SetBranchAddress("TUncalibratedDataChunk.chunk_id_", TUncalibratedDataChunk_chunk_id_, &b_TUncalibratedDataChunk_chunk_id_);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.fUniqueID", TUncalibratedDataChunk_data__fUniqueID, &b_TUncalibratedDataChunk_data__fUniqueID);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.fBits", TUncalibratedDataChunk_data__fBits, &b_TUncalibratedDataChunk_data__fBits);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.NUM_HITS", TUncalibratedDataChunk_data__NUM_HITS, &b_TUncalibratedDataChunk_data__NUM_HITS);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.CHANNEL", TUncalibratedDataChunk_data__CHANNEL, &b_TUncalibratedDataChunk_data__CHANNEL);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.OFFSET", TUncalibratedDataChunk_data__OFFSET, &b_TUncalibratedDataChunk_data__OFFSET);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC0", TUncalibratedDataChunk_data__Q_ADC0, &b_TUncalibratedDataChunk_data__Q_ADC0);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC1", TUncalibratedDataChunk_data__Q_ADC1, &b_TUncalibratedDataChunk_data__Q_ADC1);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC2", TUncalibratedDataChunk_data__Q_ADC2, &b_TUncalibratedDataChunk_data__Q_ADC2);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.Q_ADC3", TUncalibratedDataChunk_data__Q_ADC3, &b_TUncalibratedDataChunk_data__Q_ADC3);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC0", TUncalibratedDataChunk_data__T_ADC0, &b_TUncalibratedDataChunk_data__T_ADC0);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC1", TUncalibratedDataChunk_data__T_ADC1, &b_TUncalibratedDataChunk_data__T_ADC1);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC2", TUncalibratedDataChunk_data__T_ADC2, &b_TUncalibratedDataChunk_data__T_ADC2);
   fChain->SetBranchAddress("TUncalibratedDataChunk.data_.T_ADC3", TUncalibratedDataChunk_data__T_ADC3, &b_TUncalibratedDataChunk_data__T_ADC3);
   fChain->SetBranchAddress("TUncalibratedDataChunk.name_", TUncalibratedDataChunk_name_, &b_TUncalibratedDataChunk_name_);
   fChain->SetBranchAddress("TCrate13Chunk", &TCrate13Chunk_, &b_TCrate13Chunk_);
   fChain->SetBranchAddress("TCrate13Chunk.chunk_id_", TCrate13Chunk_chunk_id_, &b_TCrate13Chunk_chunk_id_);
   fChain->SetBranchAddress("TCrate13Chunk.data_.fUniqueID", TCrate13Chunk_data__fUniqueID, &b_TCrate13Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TCrate13Chunk.data_.fBits", TCrate13Chunk_data__fBits, &b_TCrate13Chunk_data__fBits);
   fChain->SetBranchAddress("TCrate13Chunk.data_.Laser_flask", TCrate13Chunk_data__Laser_flask, &b_TCrate13Chunk_data__Laser_flask);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_laser", TCrate13Chunk_data__N_laser, &b_TCrate13Chunk_data__N_laser);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_cubes", TCrate13Chunk_data__N_cubes, &b_TCrate13Chunk_data__N_cubes);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_RWM", TCrate13Chunk_data__N_RWM, &b_TCrate13Chunk_data__N_RWM);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_d90", TCrate13Chunk_data__N_d90, &b_TCrate13Chunk_data__N_d90);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_MUTR", TCrate13Chunk_data__N_MUTR, &b_TCrate13Chunk_data__N_MUTR);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e1", TCrate13Chunk_data__N_trig_e1, &b_TCrate13Chunk_data__N_trig_e1);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e2", TCrate13Chunk_data__N_trig_e2, &b_TCrate13Chunk_data__N_trig_e2);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e3", TCrate13Chunk_data__N_trig_e3, &b_TCrate13Chunk_data__N_trig_e3);
   fChain->SetBranchAddress("TCrate13Chunk.data_.N_trig_e4", TCrate13Chunk_data__N_trig_e4, &b_TCrate13Chunk_data__N_trig_e4);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_quality", TCrate13Chunk_data__RWM_quality, &b_TCrate13Chunk_data__RWM_quality);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_refined_time", TCrate13Chunk_data__RWM_refined_time, &b_TCrate13Chunk_data__RWM_refined_time);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_bounce_time", TCrate13Chunk_data__RWM_bounce_time, &b_TCrate13Chunk_data__RWM_bounce_time);
   fChain->SetBranchAddress("TCrate13Chunk.data_.laser_t[20]", TCrate13Chunk_data__laser_t, &b_TCrate13Chunk_data__laser_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.laser_q[20]", TCrate13Chunk_data__laser_q, &b_TCrate13Chunk_data__laser_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_chan[20]", TCrate13Chunk_data__cubes_chan, &b_TCrate13Chunk_data__cubes_chan);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_t[20]", TCrate13Chunk_data__cubes_t, &b_TCrate13Chunk_data__cubes_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.cubes_q[20]", TCrate13Chunk_data__cubes_q, &b_TCrate13Chunk_data__cubes_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_t[20]", TCrate13Chunk_data__RWM_t, &b_TCrate13Chunk_data__RWM_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.RWM_q[20]", TCrate13Chunk_data__RWM_q, &b_TCrate13Chunk_data__RWM_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.d90_t[20]", TCrate13Chunk_data__d90_t, &b_TCrate13Chunk_data__d90_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.d90_q[20]", TCrate13Chunk_data__d90_q, &b_TCrate13Chunk_data__d90_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.MUTR_t[20]", TCrate13Chunk_data__MUTR_t, &b_TCrate13Chunk_data__MUTR_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.MUTR_q[20]", TCrate13Chunk_data__MUTR_q, &b_TCrate13Chunk_data__MUTR_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e1_t[20]", TCrate13Chunk_data__trig_e1_t, &b_TCrate13Chunk_data__trig_e1_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e1_q[20]", TCrate13Chunk_data__trig_e1_q, &b_TCrate13Chunk_data__trig_e1_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e2_t[20]", TCrate13Chunk_data__trig_e2_t, &b_TCrate13Chunk_data__trig_e2_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e2_q[20]", TCrate13Chunk_data__trig_e2_q, &b_TCrate13Chunk_data__trig_e2_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e3_t[20]", TCrate13Chunk_data__trig_e3_t, &b_TCrate13Chunk_data__trig_e3_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e3_q[20]", TCrate13Chunk_data__trig_e3_q, &b_TCrate13Chunk_data__trig_e3_q);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e4_t[20]", TCrate13Chunk_data__trig_e4_t, &b_TCrate13Chunk_data__trig_e4_t);
   fChain->SetBranchAddress("TCrate13Chunk.data_.trig_e4_q[20]", TCrate13Chunk_data__trig_e4_q, &b_TCrate13Chunk_data__trig_e4_q);
   fChain->SetBranchAddress("TCrate13Chunk.name_", TCrate13Chunk_name_, &b_TCrate13Chunk_name_);
   fChain->SetBranchAddress("TSplitEventChunk", &TSplitEventChunk_, &b_TSplitEventChunk_);
   fChain->SetBranchAddress("TSplitEventChunk.chunk_id_", TSplitEventChunk_chunk_id_, &b_TSplitEventChunk_chunk_id_);
   fChain->SetBranchAddress("TSplitEventChunk.data_.fUniqueID", TSplitEventChunk_data__fUniqueID, &b_TSplitEventChunk_data__fUniqueID);
   fChain->SetBranchAddress("TSplitEventChunk.data_.fBits", TSplitEventChunk_data__fBits, &b_TSplitEventChunk_data__fBits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Subevent", TSplitEventChunk_data__Subevent, &b_TSplitEventChunk_data__Subevent);
   fChain->SetBranchAddress("TSplitEventChunk.data_.THits", TSplitEventChunk_data__THits, &b_TSplitEventChunk_data__THits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VHits", TSplitEventChunk_data__VHits, &b_TSplitEventChunk_data__VHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TposHits", TSplitEventChunk_data__TposHits, &b_TSplitEventChunk_data__TposHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VposHits", TSplitEventChunk_data__VposHits, &b_TSplitEventChunk_data__VposHits);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TPMT", TSplitEventChunk_data__TPMT, &b_TSplitEventChunk_data__TPMT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VPMT", TSplitEventChunk_data__VPMT, &b_TSplitEventChunk_data__VPMT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TQ", TSplitEventChunk_data__TQ, &b_TSplitEventChunk_data__TQ);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VQ", TSplitEventChunk_data__VQ, &b_TSplitEventChunk_data__VQ);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Qtot", TSplitEventChunk_data__Qtot, &b_TSplitEventChunk_data__Qtot);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TQpos", TSplitEventChunk_data__TQpos, &b_TSplitEventChunk_data__TQpos);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VQpos", TSplitEventChunk_data__VQpos, &b_TSplitEventChunk_data__VQpos);
   fChain->SetBranchAddress("TSplitEventChunk.data_.TT", TSplitEventChunk_data__TT, &b_TSplitEventChunk_data__TT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.VT", TSplitEventChunk_data__VT, &b_TSplitEventChunk_data__VT);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Tmin", TSplitEventChunk_data__Tmin, &b_TSplitEventChunk_data__Tmin);
   fChain->SetBranchAddress("TSplitEventChunk.data_.Tmax", TSplitEventChunk_data__Tmax, &b_TSplitEventChunk_data__Tmax);
   fChain->SetBranchAddress("TSplitEventChunk.data_.AvgTTim", TSplitEventChunk_data__AvgTTim, &b_TSplitEventChunk_data__AvgTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.PeakTTim", TSplitEventChunk_data__PeakTTim, &b_TSplitEventChunk_data__PeakTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.rmsTTim", TSplitEventChunk_data__rmsTTim, &b_TSplitEventChunk_data__rmsTTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.AvgVTim", TSplitEventChunk_data__AvgVTim, &b_TSplitEventChunk_data__AvgVTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.PeakVTim", TSplitEventChunk_data__PeakVTim, &b_TSplitEventChunk_data__PeakVTim);
   fChain->SetBranchAddress("TSplitEventChunk.data_.rmsVTim", TSplitEventChunk_data__rmsVTim, &b_TSplitEventChunk_data__rmsVTim);
   fChain->SetBranchAddress("TSplitEventChunk.name_", TSplitEventChunk_name_, &b_TSplitEventChunk_name_);
   fChain->SetBranchAddress("TStancuFastChunk", &TStancuFastChunk_, &b_TStancuFastChunk_);
   fChain->SetBranchAddress("TStancuFastChunk.chunk_id_", TStancuFastChunk_chunk_id_, &b_TStancuFastChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFastChunk.data_.fUniqueID", TStancuFastChunk_data__fUniqueID, &b_TStancuFastChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFastChunk.data_.fBits", TStancuFastChunk_data__fBits, &b_TStancuFastChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFastChunk.data_.IT", TStancuFastChunk_data__IT, &b_TStancuFastChunk_data__IT);
   fChain->SetBranchAddress("TStancuFastChunk.data_.X", TStancuFastChunk_data__X, &b_TStancuFastChunk_data__X);
   fChain->SetBranchAddress("TStancuFastChunk.data_.Y", TStancuFastChunk_data__Y, &b_TStancuFastChunk_data__Y);
   fChain->SetBranchAddress("TStancuFastChunk.data_.Z", TStancuFastChunk_data__Z, &b_TStancuFastChunk_data__Z);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UX", TStancuFastChunk_data__UX, &b_TStancuFastChunk_data__UX);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UY", TStancuFastChunk_data__UY, &b_TStancuFastChunk_data__UY);
   fChain->SetBranchAddress("TStancuFastChunk.data_.UZ", TStancuFastChunk_data__UZ, &b_TStancuFastChunk_data__UZ);
   fChain->SetBranchAddress("TStancuFastChunk.data_.T", TStancuFastChunk_data__T, &b_TStancuFastChunk_data__T);
   fChain->SetBranchAddress("TStancuFastChunk.data_.D", TStancuFastChunk_data__D, &b_TStancuFastChunk_data__D);
   fChain->SetBranchAddress("TStancuFastChunk.data_.E", TStancuFastChunk_data__E, &b_TStancuFastChunk_data__E);
   fChain->SetBranchAddress("TStancuFastChunk.data_.F", TStancuFastChunk_data__F, &b_TStancuFastChunk_data__F);
   fChain->SetBranchAddress("TStancuFastChunk.name_", TStancuFastChunk_name_, &b_TStancuFastChunk_name_);
   fChain->SetBranchAddress("TStancuFullChunk", &TStancuFullChunk_, &b_TStancuFullChunk_);
   fChain->SetBranchAddress("TStancuFullChunk.chunk_id_", TStancuFullChunk_chunk_id_, &b_TStancuFullChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFullChunk.data_.fUniqueID", TStancuFullChunk_data__fUniqueID, &b_TStancuFullChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFullChunk.data_.fBits", TStancuFullChunk_data__fBits, &b_TStancuFullChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFullChunk.data_.IT", TStancuFullChunk_data__IT, &b_TStancuFullChunk_data__IT);
   fChain->SetBranchAddress("TStancuFullChunk.data_.X", TStancuFullChunk_data__X, &b_TStancuFullChunk_data__X);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Y", TStancuFullChunk_data__Y, &b_TStancuFullChunk_data__Y);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Z", TStancuFullChunk_data__Z, &b_TStancuFullChunk_data__Z);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UX", TStancuFullChunk_data__UX, &b_TStancuFullChunk_data__UX);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UY", TStancuFullChunk_data__UY, &b_TStancuFullChunk_data__UY);
   fChain->SetBranchAddress("TStancuFullChunk.data_.UZ", TStancuFullChunk_data__UZ, &b_TStancuFullChunk_data__UZ);
   fChain->SetBranchAddress("TStancuFullChunk.data_.T", TStancuFullChunk_data__T, &b_TStancuFullChunk_data__T);
   fChain->SetBranchAddress("TStancuFullChunk.data_.D", TStancuFullChunk_data__D, &b_TStancuFullChunk_data__D);
   fChain->SetBranchAddress("TStancuFullChunk.data_.E", TStancuFullChunk_data__E, &b_TStancuFullChunk_data__E);
   fChain->SetBranchAddress("TStancuFullChunk.data_.F", TStancuFullChunk_data__F, &b_TStancuFullChunk_data__F);
   fChain->SetBranchAddress("TStancuFullChunk.data_.E_mu", TStancuFullChunk_data__E_mu, &b_TStancuFullChunk_data__E_mu);
   fChain->SetBranchAddress("TStancuFullChunk.data_.S_tkint", TStancuFullChunk_data__S_tkint, &b_TStancuFullChunk_data__S_tkint);
   fChain->SetBranchAddress("TStancuFullChunk.data_.RdR", TStancuFullChunk_data__RdR, &b_TStancuFullChunk_data__RdR);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Fqlt05", TStancuFullChunk_data__Fqlt05, &b_TStancuFullChunk_data__Fqlt05);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Fqlt10", TStancuFullChunk_data__Fqlt10, &b_TStancuFullChunk_data__Fqlt10);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Xvtx", TStancuFullChunk_data__Xvtx, &b_TStancuFullChunk_data__Xvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Yvtx", TStancuFullChunk_data__Yvtx, &b_TStancuFullChunk_data__Yvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Zvtx", TStancuFullChunk_data__Zvtx, &b_TStancuFullChunk_data__Zvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Rvtx", TStancuFullChunk_data__Rvtx, &b_TStancuFullChunk_data__Rvtx);
   fChain->SetBranchAddress("TStancuFullChunk.data_.Tvtx", TStancuFullChunk_data__Tvtx, &b_TStancuFullChunk_data__Tvtx);
   fChain->SetBranchAddress("TStancuFullChunk.name_", TStancuFullChunk_name_, &b_TStancuFullChunk_name_);
   fChain->SetBranchAddress("TStancuFluxChunk", &TStancuFluxChunk_, &b_TStancuFluxChunk_);
   fChain->SetBranchAddress("TStancuFluxChunk.chunk_id_", TStancuFluxChunk_chunk_id_, &b_TStancuFluxChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.fUniqueID", TStancuFluxChunk_data__fUniqueID, &b_TStancuFluxChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.fBits", TStancuFluxChunk_data__fBits, &b_TStancuFluxChunk_data__fBits);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.IT", TStancuFluxChunk_data__IT, &b_TStancuFluxChunk_data__IT);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.CER", TStancuFluxChunk_data__CER, &b_TStancuFluxChunk_data__CER);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.SCI", TStancuFluxChunk_data__SCI, &b_TStancuFluxChunk_data__SCI);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.F", TStancuFluxChunk_data__F, &b_TStancuFluxChunk_data__F);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.EcerEl", TStancuFluxChunk_data__EcerEl, &b_TStancuFluxChunk_data__EcerEl);
   fChain->SetBranchAddress("TStancuFluxChunk.data_.EcerMu", TStancuFluxChunk_data__EcerMu, &b_TStancuFluxChunk_data__EcerMu);
   fChain->SetBranchAddress("TStancuFluxChunk.name_", TStancuFluxChunk_name_, &b_TStancuFluxChunk_name_);
   fChain->SetBranchAddress("TStancuTrakChunk", &TStancuTrakChunk_, &b_TStancuTrakChunk_);
   fChain->SetBranchAddress("TStancuTrakChunk.chunk_id_", TStancuTrakChunk_chunk_id_, &b_TStancuTrakChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.fUniqueID", TStancuTrakChunk_data__fUniqueID, &b_TStancuTrakChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.fBits", TStancuTrakChunk_data__fBits, &b_TStancuTrakChunk_data__fBits);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.IT", TStancuTrakChunk_data__IT, &b_TStancuTrakChunk_data__IT);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.TRAK", TStancuTrakChunk_data__TRAK, &b_TStancuTrakChunk_data__TRAK);
   fChain->SetBranchAddress("TStancuTrakChunk.data_.F", TStancuTrakChunk_data__F, &b_TStancuTrakChunk_data__F);
   fChain->SetBranchAddress("TStancuTrakChunk.name_", TStancuTrakChunk_name_, &b_TStancuTrakChunk_name_);
   fChain->SetBranchAddress("TStancuMuvdChunk", &TStancuMuvdChunk_, &b_TStancuMuvdChunk_);
   fChain->SetBranchAddress("TStancuMuvdChunk.chunk_id_", TStancuMuvdChunk_chunk_id_, &b_TStancuMuvdChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.fUniqueID", TStancuMuvdChunk_data__fUniqueID, &b_TStancuMuvdChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.fBits", TStancuMuvdChunk_data__fBits, &b_TStancuMuvdChunk_data__fBits);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.IT", TStancuMuvdChunk_data__IT, &b_TStancuMuvdChunk_data__IT);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.X", TStancuMuvdChunk_data__X, &b_TStancuMuvdChunk_data__X);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.Y", TStancuMuvdChunk_data__Y, &b_TStancuMuvdChunk_data__Y);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.Z", TStancuMuvdChunk_data__Z, &b_TStancuMuvdChunk_data__Z);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UX", TStancuMuvdChunk_data__UX, &b_TStancuMuvdChunk_data__UX);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UY", TStancuMuvdChunk_data__UY, &b_TStancuMuvdChunk_data__UY);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.UZ", TStancuMuvdChunk_data__UZ, &b_TStancuMuvdChunk_data__UZ);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.T", TStancuMuvdChunk_data__T, &b_TStancuMuvdChunk_data__T);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.F", TStancuMuvdChunk_data__F, &b_TStancuMuvdChunk_data__F);
   fChain->SetBranchAddress("TStancuMuvdChunk.data_.L", TStancuMuvdChunk_data__L, &b_TStancuMuvdChunk_data__L);
   fChain->SetBranchAddress("TStancuMuvdChunk.name_", TStancuMuvdChunk_name_, &b_TStancuMuvdChunk_name_);
   fChain->SetBranchAddress("TStancuPi0Chunk", &TStancuPi0Chunk_, &b_TStancuPi0Chunk_);
   fChain->SetBranchAddress("TStancuPi0Chunk.chunk_id_", TStancuPi0Chunk_chunk_id_, &b_TStancuPi0Chunk_chunk_id_);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fUniqueID", TStancuPi0Chunk_data__fUniqueID, &b_TStancuPi0Chunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fBits", TStancuPi0Chunk_data__fBits, &b_TStancuPi0Chunk_data__fBits);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.iter", TStancuPi0Chunk_data__iter, &b_TStancuPi0Chunk_data__iter);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.x", TStancuPi0Chunk_data__x, &b_TStancuPi0Chunk_data__x);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.y", TStancuPi0Chunk_data__y, &b_TStancuPi0Chunk_data__y);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.z", TStancuPi0Chunk_data__z, &b_TStancuPi0Chunk_data__z);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.t", TStancuPi0Chunk_data__t, &b_TStancuPi0Chunk_data__t);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.llike", TStancuPi0Chunk_data__llike, &b_TStancuPi0Chunk_data__llike);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.mass", TStancuPi0Chunk_data__mass, &b_TStancuPi0Chunk_data__mass);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.darec", TStancuPi0Chunk_data__darec, &b_TStancuPi0Chunk_data__darec);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.fcer", TStancuPi0Chunk_data__fcer, &b_TStancuPi0Chunk_data__fcer);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.phi1", TStancuPi0Chunk_data__phi1, &b_TStancuPi0Chunk_data__phi1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.teta1", TStancuPi0Chunk_data__teta1, &b_TStancuPi0Chunk_data__teta1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.phi2", TStancuPi0Chunk_data__phi2, &b_TStancuPi0Chunk_data__phi2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.teta2", TStancuPi0Chunk_data__teta2, &b_TStancuPi0Chunk_data__teta2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.cer1", TStancuPi0Chunk_data__cer1, &b_TStancuPi0Chunk_data__cer1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.sci1", TStancuPi0Chunk_data__sci1, &b_TStancuPi0Chunk_data__sci1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.cer2", TStancuPi0Chunk_data__cer2, &b_TStancuPi0Chunk_data__cer2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.sci2", TStancuPi0Chunk_data__sci2, &b_TStancuPi0Chunk_data__sci2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.srec1", TStancuPi0Chunk_data__srec1, &b_TStancuPi0Chunk_data__srec1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.dist1", TStancuPi0Chunk_data__dist1, &b_TStancuPi0Chunk_data__dist1);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.srec2", TStancuPi0Chunk_data__srec2, &b_TStancuPi0Chunk_data__srec2);
   fChain->SetBranchAddress("TStancuPi0Chunk.data_.dist2", TStancuPi0Chunk_data__dist2, &b_TStancuPi0Chunk_data__dist2);
   fChain->SetBranchAddress("TStancuPi0Chunk.name_", TStancuPi0Chunk_name_, &b_TStancuPi0Chunk_name_);
   fChain->SetBranchAddress("TStancuVarsChunk", &TStancuVarsChunk_, &b_TStancuVarsChunk_);
   fChain->SetBranchAddress("TStancuVarsChunk.chunk_id_", TStancuVarsChunk_chunk_id_, &b_TStancuVarsChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fUniqueID", TStancuVarsChunk_data__fUniqueID, &b_TStancuVarsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fBits", TStancuVarsChunk_data__fBits, &b_TStancuVarsChunk_data__fBits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nchunks", TStancuVarsChunk_data__nchunks, &b_TStancuVarsChunk_data__nchunks);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chunknr", TStancuVarsChunk_data__chunknr, &b_TStancuVarsChunk_data__chunknr);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.energy", TStancuVarsChunk_data__energy, &b_TStancuVarsChunk_data__energy);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.thits", TStancuVarsChunk_data__thits, &b_TStancuVarsChunk_data__thits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.vhits", TStancuVarsChunk_data__vhits, &b_TStancuVarsChunk_data__vhits);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.d", TStancuVarsChunk_data__d, &b_TStancuVarsChunk_data__d);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rdr", TStancuVarsChunk_data__rdr, &b_TStancuVarsChunk_data__rdr);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.stint", TStancuVarsChunk_data__stint, &b_TStancuVarsChunk_data__stint);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rawtsig", TStancuVarsChunk_data__EMu_rawtsig, &b_TStancuVarsChunk_data__EMu_rawtsig);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rawtavg", TStancuVarsChunk_data__EMu_rawtavg, &b_TStancuVarsChunk_data__EMu_rawtavg);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_trak", TStancuVarsChunk_data__EMu_trak, &b_TStancuVarsChunk_data__EMu_trak);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qlful", TStancuVarsChunk_data__EMu_qlful, &b_TStancuVarsChunk_data__EMu_qlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlful", TStancuVarsChunk_data__EMu_tlful, &b_TStancuVarsChunk_data__EMu_tlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlb45", TStancuVarsChunk_data__EMu_tlb45, &b_TStancuVarsChunk_data__EMu_tlb45);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlb24", TStancuVarsChunk_data__EMu_tlb24, &b_TStancuVarsChunk_data__EMu_tlb24);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlm22", TStancuVarsChunk_data__EMu_tlm22, &b_TStancuVarsChunk_data__EMu_tlm22);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_tlsci", TStancuVarsChunk_data__EMu_tlsci, &b_TStancuVarsChunk_data__EMu_tlsci);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qtmr4", TStancuVarsChunk_data__EMu_qtmr4, &b_TStancuVarsChunk_data__EMu_qtmr4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_qtmr3", TStancuVarsChunk_data__EMu_qtmr3, &b_TStancuVarsChunk_data__EMu_qtmr3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_fthvp", TStancuVarsChunk_data__EMu_fthvp, &b_TStancuVarsChunk_data__EMu_fthvp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_fthvl", TStancuVarsChunk_data__EMu_fthvl, &b_TStancuVarsChunk_data__EMu_fthvl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rslvl53", TStancuVarsChunk_data__EMu_rslvl53, &b_TStancuVarsChunk_data__EMu_rslvl53);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EMu_rslvl64", TStancuVarsChunk_data__EMu_rslvl64, &b_TStancuVarsChunk_data__EMu_rslvl64);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_mass", TStancuVarsChunk_data__EPi_mass, &b_TStancuVarsChunk_data__EPi_mass);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_angle", TStancuVarsChunk_data__EPi_angle, &b_TStancuVarsChunk_data__EPi_angle);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_trak", TStancuVarsChunk_data__EPi_trak, &b_TStancuVarsChunk_data__EPi_trak);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qlful", TStancuVarsChunk_data__EPi_qlful, &b_TStancuVarsChunk_data__EPi_qlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlful", TStancuVarsChunk_data__EPi_tlful, &b_TStancuVarsChunk_data__EPi_tlful);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlcer", TStancuVarsChunk_data__EPi_tlcer, &b_TStancuVarsChunk_data__EPi_tlcer);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_rslvl53", TStancuVarsChunk_data__EPi_rslvl53, &b_TStancuVarsChunk_data__EPi_rslvl53);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_rslvl64", TStancuVarsChunk_data__EPi_rslvl64, &b_TStancuVarsChunk_data__EPi_rslvl64);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_scratio", TStancuVarsChunk_data__EPi_scratio, &b_TStancuVarsChunk_data__EPi_scratio);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qqover", TStancuVarsChunk_data__EPi_qqover, &b_TStancuVarsChunk_data__EPi_qqover);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_fmdiff", TStancuVarsChunk_data__EPi_fmdiff, &b_TStancuVarsChunk_data__EPi_fmdiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qldiff", TStancuVarsChunk_data__EPi_qldiff, &b_TStancuVarsChunk_data__EPi_qldiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tldiff", TStancuVarsChunk_data__EPi_tldiff, &b_TStancuVarsChunk_data__EPi_tldiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_fcer", TStancuVarsChunk_data__EPi_fcer, &b_TStancuVarsChunk_data__EPi_fcer);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qtmr0", TStancuVarsChunk_data__EPi_qtmr0, &b_TStancuVarsChunk_data__EPi_qtmr0);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_dcbeam", TStancuVarsChunk_data__EPi_dcbeam, &b_TStancuVarsChunk_data__EPi_dcbeam);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_qtmr56", TStancuVarsChunk_data__EPi_qtmr56, &b_TStancuVarsChunk_data__EPi_qtmr56);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_tlb245", TStancuVarsChunk_data__EPi_tlb245, &b_TStancuVarsChunk_data__EPi_tlb245);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.EPi_dist1", TStancuVarsChunk_data__EPi_dist1, &b_TStancuVarsChunk_data__EPi_dist1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh11p13", TStancuVarsChunk_data__fqlkh11p13, &b_TStancuVarsChunk_data__fqlkh11p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh9p14", TStancuVarsChunk_data__fqlkh9p14, &b_TStancuVarsChunk_data__fqlkh9p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh1t5p1518", TStancuVarsChunk_data__fqlkh1t5p1518, &b_TStancuVarsChunk_data__fqlkh1t5p1518);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh1p18", TStancuVarsChunk_data__fqlkh1p18, &b_TStancuVarsChunk_data__fqlkh1p18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh13p14", TStancuVarsChunk_data__fqlkh13p14, &b_TStancuVarsChunk_data__fqlkh13p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlkh11t14", TStancuVarsChunk_data__fqlkh11t14, &b_TStancuVarsChunk_data__fqlkh11t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrpp", TStancuVarsChunk_data__qtmrpp, &b_TStancuVarsChunk_data__qtmrpp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrmm", TStancuVarsChunk_data__qtmrmm, &b_TStancuVarsChunk_data__qtmrmm);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m2", TStancuVarsChunk_data__qtmr7m2, &b_TStancuVarsChunk_data__qtmr7m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr8m5", TStancuVarsChunk_data__qtmr8m5, &b_TStancuVarsChunk_data__qtmr8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m2", TStancuVarsChunk_data__qtmr5m2, &b_TStancuVarsChunk_data__qtmr5m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m3", TStancuVarsChunk_data__qtmr5m3, &b_TStancuVarsChunk_data__qtmr5m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr0p5", TStancuVarsChunk_data__qtmr0p5, &b_TStancuVarsChunk_data__qtmr0p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr4p5", TStancuVarsChunk_data__qtmr4p5, &b_TStancuVarsChunk_data__qtmr4p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr6p7", TStancuVarsChunk_data__qtmr6p7, &b_TStancuVarsChunk_data__qtmr6p7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrc2", TStancuVarsChunk_data__qtmrc2, &b_TStancuVarsChunk_data__qtmrc2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr17p18", TStancuVarsChunk_data__nqtmr17p18, &b_TStancuVarsChunk_data__nqtmr17p18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr18p19", TStancuVarsChunk_data__nqtmr18p19, &b_TStancuVarsChunk_data__nqtmr18p19);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqtmr16", TStancuVarsChunk_data__nqtmr16, &b_TStancuVarsChunk_data__nqtmr16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr13", TStancuVarsChunk_data__rsqtmr13, &b_TStancuVarsChunk_data__rsqtmr13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr16", TStancuVarsChunk_data__rsqtmr16, &b_TStancuVarsChunk_data__rsqtmr16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rsqtmr14", TStancuVarsChunk_data__rsqtmr14, &b_TStancuVarsChunk_data__rsqtmr14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p9", TStancuVarsChunk_data__ftnhit4p9, &b_TStancuVarsChunk_data__ftnhit4p9);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4", TStancuVarsChunk_data__ftnhit4, &b_TStancuVarsChunk_data__ftnhit4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit3p6", TStancuVarsChunk_data__ftnhit3p6, &b_TStancuVarsChunk_data__ftnhit3p6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p5", TStancuVarsChunk_data__ftnhit4p5, &b_TStancuVarsChunk_data__ftnhit4p5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p8", TStancuVarsChunk_data__ftnhit4p8, &b_TStancuVarsChunk_data__ftnhit4p8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit4p10", TStancuVarsChunk_data__ftnhit4p10, &b_TStancuVarsChunk_data__ftnhit4p10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph13p14", TStancuVarsChunk_data__tlph13p14, &b_TStancuVarsChunk_data__tlph13p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph14p15", TStancuVarsChunk_data__tlph14p15, &b_TStancuVarsChunk_data__tlph14p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph16", TStancuVarsChunk_data__tlph16, &b_TStancuVarsChunk_data__tlph16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph11p15", TStancuVarsChunk_data__tlph11p15, &b_TStancuVarsChunk_data__tlph11p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph15p17", TStancuVarsChunk_data__tlph15p17, &b_TStancuVarsChunk_data__tlph15p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph15p16", TStancuVarsChunk_data__tlph15p16, &b_TStancuVarsChunk_data__tlph15p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlph16p17", TStancuVarsChunk_data__tlph16p17, &b_TStancuVarsChunk_data__tlph16p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlt05", TStancuVarsChunk_data__fqlt05, &b_TStancuVarsChunk_data__fqlt05);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlt10", TStancuVarsChunk_data__fqlt10, &b_TStancuVarsChunk_data__fqlt10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthjp", TStancuVarsChunk_data__fthjp, &b_TStancuVarsChunk_data__fthjp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthjl", TStancuVarsChunk_data__fthjl, &b_TStancuVarsChunk_data__fthjl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fthvp", TStancuVarsChunk_data__fthvp, &b_TStancuVarsChunk_data__fthvp);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk014p15", TStancuVarsChunk_data__fqlk014p15, &b_TStancuVarsChunk_data__fqlk014p15);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk08p13", TStancuVarsChunk_data__fqlk08p13, &b_TStancuVarsChunk_data__fqlk08p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk012p14", TStancuVarsChunk_data__fqlk012p14, &b_TStancuVarsChunk_data__fqlk012p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk010p13", TStancuVarsChunk_data__fqlk010p13, &b_TStancuVarsChunk_data__fqlk010p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk011p13", TStancuVarsChunk_data__fqlk011p13, &b_TStancuVarsChunk_data__fqlk011p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk012p13", TStancuVarsChunk_data__fqlk012p13, &b_TStancuVarsChunk_data__fqlk012p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk013p14", TStancuVarsChunk_data__fqlk013p14, &b_TStancuVarsChunk_data__fqlk013p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqlk016p17", TStancuVarsChunk_data__fqlk016p17, &b_TStancuVarsChunk_data__fqlk016p17);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec6t14", TStancuVarsChunk_data__fqrec6t14, &b_TStancuVarsChunk_data__fqrec6t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t20", TStancuVarsChunk_data__fqrec15t20, &b_TStancuVarsChunk_data__fqrec15t20);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t16", TStancuVarsChunk_data__fqrec15t16, &b_TStancuVarsChunk_data__fqrec15t16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec1t10", TStancuVarsChunk_data__fqrec1t10, &b_TStancuVarsChunk_data__fqrec1t10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec6t10", TStancuVarsChunk_data__fqrec6t10, &b_TStancuVarsChunk_data__fqrec6t10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fqrec15t18", TStancuVarsChunk_data__fqrec15t18, &b_TStancuVarsChunk_data__fqrec15t18);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn018m14", TStancuVarsChunk_data__fn018m14, &b_TStancuVarsChunk_data__fn018m14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn014p16", TStancuVarsChunk_data__fn014p16, &b_TStancuVarsChunk_data__fn014p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fn010p16", TStancuVarsChunk_data__fn010p16, &b_TStancuVarsChunk_data__fn010p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn013", TStancuVarsChunk_data__frsn013, &b_TStancuVarsChunk_data__frsn013);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn011", TStancuVarsChunk_data__frsn011, &b_TStancuVarsChunk_data__frsn011);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn010p13", TStancuVarsChunk_data__frsn010p13, &b_TStancuVarsChunk_data__frsn010p13);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn010p14", TStancuVarsChunk_data__frsn010p14, &b_TStancuVarsChunk_data__frsn010p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsn011p14", TStancuVarsChunk_data__frsn011p14, &b_TStancuVarsChunk_data__frsn011p14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl9m1ovq", TStancuVarsChunk_data__rslvl9m1ovq, &b_TStancuVarsChunk_data__rslvl9m1ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl3p9ovq", TStancuVarsChunk_data__rslvl3p9ovq, &b_TStancuVarsChunk_data__rslvl3p9ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl7m4ovq", TStancuVarsChunk_data__rslvl7m4ovq, &b_TStancuVarsChunk_data__rslvl7m4ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl1p8ovq", TStancuVarsChunk_data__rslvl1p8ovq, &b_TStancuVarsChunk_data__rslvl1p8ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.rslvl8p9ovq", TStancuVarsChunk_data__rslvl8p9ovq, &b_TStancuVarsChunk_data__rslvl8p9ovq);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlph16m12", TStancuVarsChunk_data__qlph16m12, &b_TStancuVarsChunk_data__qlph16m12);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlph16m8", TStancuVarsChunk_data__qlph16m8, &b_TStancuVarsChunk_data__qlph16m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql2", TStancuVarsChunk_data__pi01ql2, &b_TStancuVarsChunk_data__pi01ql2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql4", TStancuVarsChunk_data__pi01ql4, &b_TStancuVarsChunk_data__pi01ql4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02ql3", TStancuVarsChunk_data__pi02ql3, &b_TStancuVarsChunk_data__pi02ql3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql1", TStancuVarsChunk_data__pi01ql1, &b_TStancuVarsChunk_data__pi01ql1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01tl2", TStancuVarsChunk_data__pi01tl2, &b_TStancuVarsChunk_data__pi01tl2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02tl4", TStancuVarsChunk_data__pi02tl4, &b_TStancuVarsChunk_data__pi02tl4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fnh1t5p1518", TStancuVarsChunk_data__fnh1t5p1518, &b_TStancuVarsChunk_data__fnh1t5p1518);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fnh11t14", TStancuVarsChunk_data__fnh11t14, &b_TStancuVarsChunk_data__fnh11t14);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftq4", TStancuVarsChunk_data__ftq4, &b_TStancuVarsChunk_data__ftq4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frsq14p20", TStancuVarsChunk_data__frsq14p20, &b_TStancuVarsChunk_data__frsq14p20);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqlk02p16", TStancuVarsChunk_data__frqlk02p16, &b_TStancuVarsChunk_data__frqlk02p16);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.trakove", TStancuVarsChunk_data__trakove, &b_TStancuVarsChunk_data__trakove);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fcertflx", TStancuVarsChunk_data__fcertflx, &b_TStancuVarsChunk_data__fcertflx);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.srec1", TStancuVarsChunk_data__srec1, &b_TStancuVarsChunk_data__srec1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.nqovovthit", TStancuVarsChunk_data__nqovovthit, &b_TStancuVarsChunk_data__nqovovthit);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qcer2ovqtot", TStancuVarsChunk_data__qcer2ovqtot, &b_TStancuVarsChunk_data__qcer2ovqtot);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8", TStancuVarsChunk_data__qtmrcos8, &b_TStancuVarsChunk_data__qtmrcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqqov", TStancuVarsChunk_data__frqqov, &b_TStancuVarsChunk_data__frqqov);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs6m1", TStancuVarsChunk_data__frrs6m1, &b_TStancuVarsChunk_data__frrs6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnqcer1", TStancuVarsChunk_data__frnqcer1, &b_TStancuVarsChunk_data__frnqcer1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.cerfrdiff", TStancuVarsChunk_data__cerfrdiff, &b_TStancuVarsChunk_data__cerfrdiff);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m1", TStancuVarsChunk_data__tlphcos8m1, &b_TStancuVarsChunk_data__tlphcos8m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos6", TStancuVarsChunk_data__ql0cos6, &b_TStancuVarsChunk_data__ql0cos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m5", TStancuVarsChunk_data__tlphcos8m5, &b_TStancuVarsChunk_data__tlphcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs7m1", TStancuVarsChunk_data__frrs7m1, &b_TStancuVarsChunk_data__frrs7m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit9m3", TStancuVarsChunk_data__ftnhit9m3, &b_TStancuVarsChunk_data__ftnhit9m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frchia10m4", TStancuVarsChunk_data__frchia10m4, &b_TStancuVarsChunk_data__frchia10m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m5", TStancuVarsChunk_data__qtmrcos8m5, &b_TStancuVarsChunk_data__qtmrcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos4m1", TStancuVarsChunk_data__tlphcos4m1, &b_TStancuVarsChunk_data__tlphcos4m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7", TStancuVarsChunk_data__qtmrcos7, &b_TStancuVarsChunk_data__qtmrcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chirsqrec", TStancuVarsChunk_data__chirsqrec, &b_TStancuVarsChunk_data__chirsqrec);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ffast", TStancuVarsChunk_data__ffast, &b_TStancuVarsChunk_data__ffast);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ffulmffas", TStancuVarsChunk_data__ffulmffas, &b_TStancuVarsChunk_data__ffulmffas);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fflux", TStancuVarsChunk_data__fflux, &b_TStancuVarsChunk_data__fflux);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frcer1", TStancuVarsChunk_data__frcer1, &b_TStancuVarsChunk_data__frcer1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frcer2", TStancuVarsChunk_data__frcer2, &b_TStancuVarsChunk_data__frcer2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnqcer1m2", TStancuVarsChunk_data__frnqcer1m2, &b_TStancuVarsChunk_data__frnqcer1m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqqcer1m2", TStancuVarsChunk_data__frqqcer1m2, &b_TStancuVarsChunk_data__frqqcer1m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcer1mov", TStancuVarsChunk_data__frqcer1mov, &b_TStancuVarsChunk_data__frqcer1mov);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01ql3", TStancuVarsChunk_data__pi01ql3, &b_TStancuVarsChunk_data__pi01ql3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02ql4", TStancuVarsChunk_data__pi02ql4, &b_TStancuVarsChunk_data__pi02ql4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02fthl", TStancuVarsChunk_data__pi02fthl, &b_TStancuVarsChunk_data__pi02fthl);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.srec2", TStancuVarsChunk_data__srec2, &b_TStancuVarsChunk_data__srec2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.dist2", TStancuVarsChunk_data__dist2, &b_TStancuVarsChunk_data__dist2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5", TStancuVarsChunk_data__qtmr5, &b_TStancuVarsChunk_data__qtmr5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr5m4", TStancuVarsChunk_data__qtmr5m4, &b_TStancuVarsChunk_data__qtmr5m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m6", TStancuVarsChunk_data__qtmr7m6, &b_TStancuVarsChunk_data__qtmr7m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.chiqrec", TStancuVarsChunk_data__chiqrec, &b_TStancuVarsChunk_data__chiqrec);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlfwd", TStancuVarsChunk_data__tlfwd, &b_TStancuVarsChunk_data__tlfwd);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos6", TStancuVarsChunk_data__qtmrcos6, &b_TStancuVarsChunk_data__qtmrcos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos5m1", TStancuVarsChunk_data__qtmrcos5m1, &b_TStancuVarsChunk_data__qtmrcos5m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos6m1", TStancuVarsChunk_data__qtmrcos6m1, &b_TStancuVarsChunk_data__qtmrcos6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7m2", TStancuVarsChunk_data__qtmrcos7m2, &b_TStancuVarsChunk_data__qtmrcos7m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos7m5", TStancuVarsChunk_data__qtmrcos7m5, &b_TStancuVarsChunk_data__qtmrcos7m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m3", TStancuVarsChunk_data__qtmrcos8m3, &b_TStancuVarsChunk_data__qtmrcos8m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m6", TStancuVarsChunk_data__qtmrcos8m6, &b_TStancuVarsChunk_data__qtmrcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos10m2", TStancuVarsChunk_data__qtmrcos10m2, &b_TStancuVarsChunk_data__qtmrcos10m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos10m5", TStancuVarsChunk_data__qtmrcos10m5, &b_TStancuVarsChunk_data__qtmrcos10m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8", TStancuVarsChunk_data__frqcos8, &b_TStancuVarsChunk_data__frqcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos6m1", TStancuVarsChunk_data__frqcos6m1, &b_TStancuVarsChunk_data__frqcos6m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m3", TStancuVarsChunk_data__frqcos8m3, &b_TStancuVarsChunk_data__frqcos8m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m4", TStancuVarsChunk_data__frqcos8m4, &b_TStancuVarsChunk_data__frqcos8m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m5", TStancuVarsChunk_data__frqcos8m5, &b_TStancuVarsChunk_data__frqcos8m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos8m7", TStancuVarsChunk_data__frqcos8m7, &b_TStancuVarsChunk_data__frqcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos10m3", TStancuVarsChunk_data__frqcos10m3, &b_TStancuVarsChunk_data__frqcos10m3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frqcos10m8", TStancuVarsChunk_data__frqcos10m8, &b_TStancuVarsChunk_data__frqcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos7", TStancuVarsChunk_data__ql0cos7, &b_TStancuVarsChunk_data__ql0cos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ql0cos10", TStancuVarsChunk_data__ql0cos10, &b_TStancuVarsChunk_data__ql0cos10);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlkcos3", TStancuVarsChunk_data__qlkcos3, &b_TStancuVarsChunk_data__qlkcos3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlkcos8", TStancuVarsChunk_data__qlkcos8, &b_TStancuVarsChunk_data__qlkcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlphcos7", TStancuVarsChunk_data__qlphcos7, &b_TStancuVarsChunk_data__qlphcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos5", TStancuVarsChunk_data__qlppmtcos5, &b_TStancuVarsChunk_data__qlppmtcos5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos6", TStancuVarsChunk_data__qlppmtcos6, &b_TStancuVarsChunk_data__qlppmtcos6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos8", TStancuVarsChunk_data__qlppmtcos8, &b_TStancuVarsChunk_data__qlppmtcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qlppmtcos8m6", TStancuVarsChunk_data__qlppmtcos8m6, &b_TStancuVarsChunk_data__qlppmtcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos5", TStancuVarsChunk_data__tlphcos5, &b_TStancuVarsChunk_data__tlphcos5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8", TStancuVarsChunk_data__tlphcos8, &b_TStancuVarsChunk_data__tlphcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos5m1", TStancuVarsChunk_data__tlphcos5m1, &b_TStancuVarsChunk_data__tlphcos5m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos6m2", TStancuVarsChunk_data__tlphcos6m2, &b_TStancuVarsChunk_data__tlphcos6m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m2", TStancuVarsChunk_data__tlphcos8m2, &b_TStancuVarsChunk_data__tlphcos8m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m4", TStancuVarsChunk_data__tlphcos8m4, &b_TStancuVarsChunk_data__tlphcos8m4);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m7", TStancuVarsChunk_data__tlphcos8m7, &b_TStancuVarsChunk_data__tlphcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m1", TStancuVarsChunk_data__tlphcos9m1, &b_TStancuVarsChunk_data__tlphcos9m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m2", TStancuVarsChunk_data__tlphcos9m2, &b_TStancuVarsChunk_data__tlphcos9m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos10m8", TStancuVarsChunk_data__tlphcos10m8, &b_TStancuVarsChunk_data__tlphcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos10m9", TStancuVarsChunk_data__tlphcos10m9, &b_TStancuVarsChunk_data__tlphcos10m9);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos8", TStancuVarsChunk_data__frnhcos8, &b_TStancuVarsChunk_data__frnhcos8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos10m8", TStancuVarsChunk_data__frnhcos10m8, &b_TStancuVarsChunk_data__frnhcos10m8);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrsnb7", TStancuVarsChunk_data__qtmrsnb7, &b_TStancuVarsChunk_data__qtmrsnb7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhnb8m2", TStancuVarsChunk_data__frnhnb8m2, &b_TStancuVarsChunk_data__frnhnb8m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhrsnb5", TStancuVarsChunk_data__frnhrsnb5, &b_TStancuVarsChunk_data__frnhrsnb5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frrs8m1", TStancuVarsChunk_data__frrs8m1, &b_TStancuVarsChunk_data__frrs8m1);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.ftnhit3m2", TStancuVarsChunk_data__ftnhit3m2, &b_TStancuVarsChunk_data__ftnhit3m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi02tl3", TStancuVarsChunk_data__pi02tl3, &b_TStancuVarsChunk_data__pi02tl3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.pi01tl3", TStancuVarsChunk_data__pi01tl3, &b_TStancuVarsChunk_data__pi01tl3);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr7m5", TStancuVarsChunk_data__qtmr7m5, &b_TStancuVarsChunk_data__qtmr7m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr9m5", TStancuVarsChunk_data__qtmr9m5, &b_TStancuVarsChunk_data__qtmr9m5);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmr4m2", TStancuVarsChunk_data__qtmr4m2, &b_TStancuVarsChunk_data__qtmr4m2);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qcer1ovqtot", TStancuVarsChunk_data__qcer1ovqtot, &b_TStancuVarsChunk_data__qcer1ovqtot);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.fscitflx", TStancuVarsChunk_data__fscitflx, &b_TStancuVarsChunk_data__fscitflx);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.abscerasy", TStancuVarsChunk_data__abscerasy, &b_TStancuVarsChunk_data__abscerasy);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.qtmrcos8m7", TStancuVarsChunk_data__qtmrcos8m7, &b_TStancuVarsChunk_data__qtmrcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos7", TStancuVarsChunk_data__tlphcos7, &b_TStancuVarsChunk_data__tlphcos7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos8m6", TStancuVarsChunk_data__tlphcos8m6, &b_TStancuVarsChunk_data__tlphcos8m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m6", TStancuVarsChunk_data__tlphcos9m6, &b_TStancuVarsChunk_data__tlphcos9m6);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.tlphcos9m7", TStancuVarsChunk_data__tlphcos9m7, &b_TStancuVarsChunk_data__tlphcos9m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos8m7", TStancuVarsChunk_data__frnhcos8m7, &b_TStancuVarsChunk_data__frnhcos8m7);
   fChain->SetBranchAddress("TStancuVarsChunk.data_.frnhcos9m8", TStancuVarsChunk_data__frnhcos9m8, &b_TStancuVarsChunk_data__frnhcos9m8);
   fChain->SetBranchAddress("TStancuVarsChunk.name_", TStancuVarsChunk_name_, &b_TStancuVarsChunk_name_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk", &TStancuVarsTwoChunk_, &b_TStancuVarsTwoChunk_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.chunk_id_", TStancuVarsTwoChunk_chunk_id_, &b_TStancuVarsTwoChunk_chunk_id_);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.fUniqueID", TStancuVarsTwoChunk_data__fUniqueID, &b_TStancuVarsTwoChunk_data__fUniqueID);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.fBits", TStancuVarsTwoChunk_data__fBits, &b_TStancuVarsTwoChunk_data__fBits);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_n000[20]", TStancuVarsTwoChunk_data__cth_n000, &b_TStancuVarsTwoChunk_data__cth_n000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_nhit[20]", TStancuVarsTwoChunk_data__cth_nhit, &b_TStancuVarsTwoChunk_data__cth_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_mu[20]", TStancuVarsTwoChunk_data__cth_mu, &b_TStancuVarsTwoChunk_data__cth_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qrec[20]", TStancuVarsTwoChunk_data__cth_qrec, &b_TStancuVarsTwoChunk_data__cth_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_chia[20]", TStancuVarsTwoChunk_data__cth_chia, &b_TStancuVarsTwoChunk_data__cth_chia);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qllk000[20]", TStancuVarsTwoChunk_data__cth_qllk000, &b_TStancuVarsTwoChunk_data__cth_qllk000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_qllkhit[20]", TStancuVarsTwoChunk_data__cth_qllkhit, &b_TStancuVarsTwoChunk_data__cth_qllkhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.cth_tllk[20]", TStancuVarsTwoChunk_data__cth_tllk, &b_TStancuVarsTwoChunk_data__cth_tllk);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_n000[20]", TStancuVarsTwoChunk_data__rs_n000, &b_TStancuVarsTwoChunk_data__rs_n000);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_nhit[20]", TStancuVarsTwoChunk_data__rs_nhit, &b_TStancuVarsTwoChunk_data__rs_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_qrec[20]", TStancuVarsTwoChunk_data__rs_qrec, &b_TStancuVarsTwoChunk_data__rs_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.rs_mu[20]", TStancuVarsTwoChunk_data__rs_mu, &b_TStancuVarsTwoChunk_data__rs_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_nhit[10]", TStancuVarsTwoChunk_data__tim_nhit, &b_TStancuVarsTwoChunk_data__tim_nhit);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_qrec[10]", TStancuVarsTwoChunk_data__tim_qrec, &b_TStancuVarsTwoChunk_data__tim_qrec);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.data_.tim_mu[10]", TStancuVarsTwoChunk_data__tim_mu, &b_TStancuVarsTwoChunk_data__tim_mu);
   fChain->SetBranchAddress("TStancuVarsTwoChunk.name_", TStancuVarsTwoChunk_name_, &b_TStancuVarsTwoChunk_name_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk", &TCalibrateEnergyChunk_, &b_TCalibrateEnergyChunk_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.chunk_id_", TCalibrateEnergyChunk_chunk_id_, &b_TCalibrateEnergyChunk_chunk_id_);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.fUniqueID", TCalibrateEnergyChunk_data__fUniqueID, &b_TCalibrateEnergyChunk_data__fUniqueID);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.fBits", TCalibrateEnergyChunk_data__fBits, &b_TCalibrateEnergyChunk_data__fBits);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Tlep_e", TCalibrateEnergyChunk_data__Tlep_e, &b_TCalibrateEnergyChunk_data__Tlep_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Tlep_m", TCalibrateEnergyChunk_data__Tlep_m, &b_TCalibrateEnergyChunk_data__Tlep_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Qsq_e", TCalibrateEnergyChunk_data__Qsq_e, &b_TCalibrateEnergyChunk_data__Qsq_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.Qsq_m", TCalibrateEnergyChunk_data__Qsq_m, &b_TCalibrateEnergyChunk_data__Qsq_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.EnuQE_e", TCalibrateEnergyChunk_data__EnuQE_e, &b_TCalibrateEnergyChunk_data__EnuQE_e);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.data_.EnuQE_m", TCalibrateEnergyChunk_data__EnuQE_m, &b_TCalibrateEnergyChunk_data__EnuQE_m);
   fChain->SetBranchAddress("TCalibrateEnergyChunk.name_", TCalibrateEnergyChunk_name_, &b_TCalibrateEnergyChunk_name_);
   fChain->SetBranchAddress("TInteractionPointChunk", &TInteractionPointChunk_, &b_TInteractionPointChunk_);
   fChain->SetBranchAddress("TInteractionPointChunk.chunk_id_", TInteractionPointChunk_chunk_id_, &b_TInteractionPointChunk_chunk_id_);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.fUniqueID", TInteractionPointChunk_data__fUniqueID, &b_TInteractionPointChunk_data__fUniqueID);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.fBits", TInteractionPointChunk_data__fBits, &b_TInteractionPointChunk_data__fBits);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.X_e", TInteractionPointChunk_data__X_e, &b_TInteractionPointChunk_data__X_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Y_e", TInteractionPointChunk_data__Y_e, &b_TInteractionPointChunk_data__Y_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Z_e", TInteractionPointChunk_data__Z_e, &b_TInteractionPointChunk_data__Z_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.T_e", TInteractionPointChunk_data__T_e, &b_TInteractionPointChunk_data__T_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.drive_e", TInteractionPointChunk_data__drive_e, &b_TInteractionPointChunk_data__drive_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.tdrive_e", TInteractionPointChunk_data__tdrive_e, &b_TInteractionPointChunk_data__tdrive_e);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.X_m", TInteractionPointChunk_data__X_m, &b_TInteractionPointChunk_data__X_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Y_m", TInteractionPointChunk_data__Y_m, &b_TInteractionPointChunk_data__Y_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.Z_m", TInteractionPointChunk_data__Z_m, &b_TInteractionPointChunk_data__Z_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.T_m", TInteractionPointChunk_data__T_m, &b_TInteractionPointChunk_data__T_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.drive_m", TInteractionPointChunk_data__drive_m, &b_TInteractionPointChunk_data__drive_m);
   fChain->SetBranchAddress("TInteractionPointChunk.data_.tdrive_m", TInteractionPointChunk_data__tdrive_m, &b_TInteractionPointChunk_data__tdrive_m);
   fChain->SetBranchAddress("TInteractionPointChunk.name_", TInteractionPointChunk_name_, &b_TInteractionPointChunk_name_);
   fChain->SetBranchAddress("TOneTrackChunk", &TOneTrackChunk_, &b_TOneTrackChunk_);
   fChain->SetBranchAddress("TOneTrackChunk.chunk_id_", TOneTrackChunk_chunk_id_, &b_TOneTrackChunk_chunk_id_);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fUniqueID", TOneTrackChunk_data__fUniqueID, &b_TOneTrackChunk_data__fUniqueID);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fBits", TOneTrackChunk_data__fBits, &b_TOneTrackChunk_data__fBits);
   fChain->SetBranchAddress("TOneTrackChunk.data_.iterations", TOneTrackChunk_data__iterations, &b_TOneTrackChunk_data__iterations);
   fChain->SetBranchAddress("TOneTrackChunk.data_.trackType", TOneTrackChunk_data__trackType, &b_TOneTrackChunk_data__trackType);
   fChain->SetBranchAddress("TOneTrackChunk.data_.X", TOneTrackChunk_data__X, &b_TOneTrackChunk_data__X);
   fChain->SetBranchAddress("TOneTrackChunk.data_.Y", TOneTrackChunk_data__Y, &b_TOneTrackChunk_data__Y);
   fChain->SetBranchAddress("TOneTrackChunk.data_.Z", TOneTrackChunk_data__Z, &b_TOneTrackChunk_data__Z);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UX", TOneTrackChunk_data__UX, &b_TOneTrackChunk_data__UX);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UY", TOneTrackChunk_data__UY, &b_TOneTrackChunk_data__UY);
   fChain->SetBranchAddress("TOneTrackChunk.data_.UZ", TOneTrackChunk_data__UZ, &b_TOneTrackChunk_data__UZ);
   fChain->SetBranchAddress("TOneTrackChunk.data_.T", TOneTrackChunk_data__T, &b_TOneTrackChunk_data__T);
   fChain->SetBranchAddress("TOneTrackChunk.data_.E", TOneTrackChunk_data__E, &b_TOneTrackChunk_data__E);
   fChain->SetBranchAddress("TOneTrackChunk.data_.distToMeanCer", TOneTrackChunk_data__distToMeanCer, &b_TOneTrackChunk_data__distToMeanCer);
   fChain->SetBranchAddress("TOneTrackChunk.data_.fluxScale", TOneTrackChunk_data__fluxScale, &b_TOneTrackChunk_data__fluxScale);
   fChain->SetBranchAddress("TOneTrackChunk.data_.relativeSci", TOneTrackChunk_data__relativeSci, &b_TOneTrackChunk_data__relativeSci);
   fChain->SetBranchAddress("TOneTrackChunk.data_.F", TOneTrackChunk_data__F, &b_TOneTrackChunk_data__F);
   fChain->SetBranchAddress("TOneTrackChunk.name_", TOneTrackChunk_name_, &b_TOneTrackChunk_name_);
   fChain->SetBranchAddress("TParticleIDChunk", &TParticleIDChunk_, &b_TParticleIDChunk_);
   fChain->SetBranchAddress("TParticleIDChunk.chunk_id_", TParticleIDChunk_chunk_id_, &b_TParticleIDChunk_chunk_id_);
   fChain->SetBranchAddress("TParticleIDChunk.data_.fUniqueID", TParticleIDChunk_data__fUniqueID, &b_TParticleIDChunk_data__fUniqueID);
   fChain->SetBranchAddress("TParticleIDChunk.data_.fBits", TParticleIDChunk_data__fBits, &b_TParticleIDChunk_data__fBits);
   fChain->SetBranchAddress("TParticleIDChunk.data_.NUM_PAR", TParticleIDChunk_data__NUM_PAR, &b_TParticleIDChunk_data__NUM_PAR);
   fChain->SetBranchAddress("TParticleIDChunk.data_.PARAM", TParticleIDChunk_data__PARAM, &b_TParticleIDChunk_data__PARAM);
   fChain->SetBranchAddress("TParticleIDChunk.data_.NUM_OUT", TParticleIDChunk_data__NUM_OUT, &b_TParticleIDChunk_data__NUM_OUT);
   fChain->SetBranchAddress("TParticleIDChunk.data_.OUTPUT", TParticleIDChunk_data__OUTPUT, &b_TParticleIDChunk_data__OUTPUT);
   fChain->SetBranchAddress("TParticleIDChunk.name_", TParticleIDChunk_name_, &b_TParticleIDChunk_name_);
   fChain->SetBranchAddress("TTwoTrackChunk", &TTwoTrackChunk_, &b_TTwoTrackChunk_);
   fChain->SetBranchAddress("TTwoTrackChunk.chunk_id_", TTwoTrackChunk_chunk_id_, &b_TTwoTrackChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fUniqueID", TTwoTrackChunk_data__fUniqueID, &b_TTwoTrackChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fBits", TTwoTrackChunk_data__fBits, &b_TTwoTrackChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.trackType1", TTwoTrackChunk_data__trackType1, &b_TTwoTrackChunk_data__trackType1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.trackType2", TTwoTrackChunk_data__trackType2, &b_TTwoTrackChunk_data__trackType2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.X", TTwoTrackChunk_data__X, &b_TTwoTrackChunk_data__X);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Y", TTwoTrackChunk_data__Y, &b_TTwoTrackChunk_data__Y);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Z", TTwoTrackChunk_data__Z, &b_TTwoTrackChunk_data__Z);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.T", TTwoTrackChunk_data__T, &b_TTwoTrackChunk_data__T);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.M", TTwoTrackChunk_data__M, &b_TTwoTrackChunk_data__M);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.CosOp", TTwoTrackChunk_data__CosOp, &b_TTwoTrackChunk_data__CosOp);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UX1", TTwoTrackChunk_data__UX1, &b_TTwoTrackChunk_data__UX1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UY1", TTwoTrackChunk_data__UY1, &b_TTwoTrackChunk_data__UY1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UZ1", TTwoTrackChunk_data__UZ1, &b_TTwoTrackChunk_data__UZ1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.E1", TTwoTrackChunk_data__E1, &b_TTwoTrackChunk_data__E1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.distToMeanCer1", TTwoTrackChunk_data__distToMeanCer1, &b_TTwoTrackChunk_data__distToMeanCer1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.S1", TTwoTrackChunk_data__S1, &b_TTwoTrackChunk_data__S1);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UX2", TTwoTrackChunk_data__UX2, &b_TTwoTrackChunk_data__UX2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UY2", TTwoTrackChunk_data__UY2, &b_TTwoTrackChunk_data__UY2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.UZ2", TTwoTrackChunk_data__UZ2, &b_TTwoTrackChunk_data__UZ2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.E2", TTwoTrackChunk_data__E2, &b_TTwoTrackChunk_data__E2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.distToMeanCer2", TTwoTrackChunk_data__distToMeanCer2, &b_TTwoTrackChunk_data__distToMeanCer2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.S2", TTwoTrackChunk_data__S2, &b_TTwoTrackChunk_data__S2);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fluxScale", TTwoTrackChunk_data__fluxScale, &b_TTwoTrackChunk_data__fluxScale);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.relativeSci", TTwoTrackChunk_data__relativeSci, &b_TTwoTrackChunk_data__relativeSci);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Fqqq", TTwoTrackChunk_data__Fqqq, &b_TTwoTrackChunk_data__Fqqq);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.Fttt", TTwoTrackChunk_data__Fttt, &b_TTwoTrackChunk_data__Fttt);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.F", TTwoTrackChunk_data__F, &b_TTwoTrackChunk_data__F);
   fChain->SetBranchAddress("TTwoTrackChunk.data_.fixedMass", TTwoTrackChunk_data__fixedMass, &b_TTwoTrackChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackChunk.name_", TTwoTrackChunk_name_, &b_TTwoTrackChunk_name_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk", &TTwoTrackEndConditionsChunk_, &b_TTwoTrackEndConditionsChunk_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.chunk_id_", TTwoTrackEndConditionsChunk_chunk_id_, &b_TTwoTrackEndConditionsChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fUniqueID", TTwoTrackEndConditionsChunk_data__fUniqueID, &b_TTwoTrackEndConditionsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fBits", TTwoTrackEndConditionsChunk_data__fBits, &b_TTwoTrackEndConditionsChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.OneTrack_E", TTwoTrackEndConditionsChunk_data__OneTrack_E, &b_TTwoTrackEndConditionsChunk_data__OneTrack_E);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.OneTrack_F", TTwoTrackEndConditionsChunk_data__OneTrack_F, &b_TTwoTrackEndConditionsChunk_data__OneTrack_F);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.end_F", TTwoTrackEndConditionsChunk_data__end_F, &b_TTwoTrackEndConditionsChunk_data__end_F);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.cut_DeltaF", TTwoTrackEndConditionsChunk_data__cut_DeltaF, &b_TTwoTrackEndConditionsChunk_data__cut_DeltaF);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.end_DeltaF", TTwoTrackEndConditionsChunk_data__end_DeltaF, &b_TTwoTrackEndConditionsChunk_data__end_DeltaF);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fitWasAborted", TTwoTrackEndConditionsChunk_data__fitWasAborted, &b_TTwoTrackEndConditionsChunk_data__fitWasAborted);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.enteredMainFit", TTwoTrackEndConditionsChunk_data__enteredMainFit, &b_TTwoTrackEndConditionsChunk_data__enteredMainFit);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.finalStartPointer", TTwoTrackEndConditionsChunk_data__finalStartPointer, &b_TTwoTrackEndConditionsChunk_data__finalStartPointer);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.finalStartOrder", TTwoTrackEndConditionsChunk_data__finalStartOrder, &b_TTwoTrackEndConditionsChunk_data__finalStartOrder);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.data_.fixedMass", TTwoTrackEndConditionsChunk_data__fixedMass, &b_TTwoTrackEndConditionsChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackEndConditionsChunk.name_", TTwoTrackEndConditionsChunk_name_, &b_TTwoTrackEndConditionsChunk_name_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk", &TTwoTrackInternalsChunk_, &b_TTwoTrackInternalsChunk_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.chunk_id_", TTwoTrackInternalsChunk_chunk_id_, &b_TTwoTrackInternalsChunk_chunk_id_);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fUniqueID", TTwoTrackInternalsChunk_data__fUniqueID, &b_TTwoTrackInternalsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fBits", TTwoTrackInternalsChunk_data__fBits, &b_TTwoTrackInternalsChunk_data__fBits);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.numStarts", TTwoTrackInternalsChunk_data__numStarts, &b_TTwoTrackInternalsChunk_data__numStarts);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPointer", TTwoTrackInternalsChunk_data__startPointer, &b_TTwoTrackInternalsChunk_data__startPointer);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startXpos", TTwoTrackInternalsChunk_data__startXpos, &b_TTwoTrackInternalsChunk_data__startXpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startYpos", TTwoTrackInternalsChunk_data__startYpos, &b_TTwoTrackInternalsChunk_data__startYpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startZpos", TTwoTrackInternalsChunk_data__startZpos, &b_TTwoTrackInternalsChunk_data__startZpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startTime", TTwoTrackInternalsChunk_data__startTime, &b_TTwoTrackInternalsChunk_data__startTime);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startE1", TTwoTrackInternalsChunk_data__startE1, &b_TTwoTrackInternalsChunk_data__startE1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startE2", TTwoTrackInternalsChunk_data__startE2, &b_TTwoTrackInternalsChunk_data__startE2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startS1", TTwoTrackInternalsChunk_data__startS1, &b_TTwoTrackInternalsChunk_data__startS1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPhi1", TTwoTrackInternalsChunk_data__startPhi1, &b_TTwoTrackInternalsChunk_data__startPhi1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startThet1", TTwoTrackInternalsChunk_data__startThet1, &b_TTwoTrackInternalsChunk_data__startThet1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startS2", TTwoTrackInternalsChunk_data__startS2, &b_TTwoTrackInternalsChunk_data__startS2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startPhi2", TTwoTrackInternalsChunk_data__startPhi2, &b_TTwoTrackInternalsChunk_data__startPhi2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startThet2", TTwoTrackInternalsChunk_data__startThet2, &b_TTwoTrackInternalsChunk_data__startThet2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.startF", TTwoTrackInternalsChunk_data__startF, &b_TTwoTrackInternalsChunk_data__startF);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endXpos", TTwoTrackInternalsChunk_data__endXpos, &b_TTwoTrackInternalsChunk_data__endXpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endYpos", TTwoTrackInternalsChunk_data__endYpos, &b_TTwoTrackInternalsChunk_data__endYpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endZpos", TTwoTrackInternalsChunk_data__endZpos, &b_TTwoTrackInternalsChunk_data__endZpos);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endTime", TTwoTrackInternalsChunk_data__endTime, &b_TTwoTrackInternalsChunk_data__endTime);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endE1", TTwoTrackInternalsChunk_data__endE1, &b_TTwoTrackInternalsChunk_data__endE1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endE2", TTwoTrackInternalsChunk_data__endE2, &b_TTwoTrackInternalsChunk_data__endE2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endS1", TTwoTrackInternalsChunk_data__endS1, &b_TTwoTrackInternalsChunk_data__endS1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endPhi1", TTwoTrackInternalsChunk_data__endPhi1, &b_TTwoTrackInternalsChunk_data__endPhi1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endThet1", TTwoTrackInternalsChunk_data__endThet1, &b_TTwoTrackInternalsChunk_data__endThet1);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endS2", TTwoTrackInternalsChunk_data__endS2, &b_TTwoTrackInternalsChunk_data__endS2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endPhi2", TTwoTrackInternalsChunk_data__endPhi2, &b_TTwoTrackInternalsChunk_data__endPhi2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endThet2", TTwoTrackInternalsChunk_data__endThet2, &b_TTwoTrackInternalsChunk_data__endThet2);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.endF", TTwoTrackInternalsChunk_data__endF, &b_TTwoTrackInternalsChunk_data__endF);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.skipped", TTwoTrackInternalsChunk_data__skipped, &b_TTwoTrackInternalsChunk_data__skipped);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fixedMass", TTwoTrackInternalsChunk_data__fixedMass, &b_TTwoTrackInternalsChunk_data__fixedMass);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.data_.fitWasAborted", TTwoTrackInternalsChunk_data__fitWasAborted, &b_TTwoTrackInternalsChunk_data__fitWasAborted);
   fChain->SetBranchAddress("TTwoTrackInternalsChunk.name_", TTwoTrackInternalsChunk_name_, &b_TTwoTrackInternalsChunk_name_);
   fChain->SetBranchAddress("TProtonChunk", &TProtonChunk_, &b_TProtonChunk_);
   fChain->SetBranchAddress("TProtonChunk.chunk_id_", TProtonChunk_chunk_id_, &b_TProtonChunk_chunk_id_);
   fChain->SetBranchAddress("TProtonChunk.data_.fUniqueID", TProtonChunk_data__fUniqueID, &b_TProtonChunk_data__fUniqueID);
   fChain->SetBranchAddress("TProtonChunk.data_.fBits", TProtonChunk_data__fBits, &b_TProtonChunk_data__fBits);
   fChain->SetBranchAddress("TProtonChunk.data_.E", TProtonChunk_data__E, &b_TProtonChunk_data__E);
   fChain->SetBranchAddress("TProtonChunk.data_.X", TProtonChunk_data__X, &b_TProtonChunk_data__X);
   fChain->SetBranchAddress("TProtonChunk.data_.Y", TProtonChunk_data__Y, &b_TProtonChunk_data__Y);
   fChain->SetBranchAddress("TProtonChunk.data_.Z", TProtonChunk_data__Z, &b_TProtonChunk_data__Z);
   fChain->SetBranchAddress("TProtonChunk.data_.T", TProtonChunk_data__T, &b_TProtonChunk_data__T);
   fChain->SetBranchAddress("TProtonChunk.data_.UX", TProtonChunk_data__UX, &b_TProtonChunk_data__UX);
   fChain->SetBranchAddress("TProtonChunk.data_.UY", TProtonChunk_data__UY, &b_TProtonChunk_data__UY);
   fChain->SetBranchAddress("TProtonChunk.data_.UZ", TProtonChunk_data__UZ, &b_TProtonChunk_data__UZ);
   fChain->SetBranchAddress("TProtonChunk.data_.TLLK", TProtonChunk_data__TLLK, &b_TProtonChunk_data__TLLK);
   fChain->SetBranchAddress("TProtonChunk.data_.QLLK", TProtonChunk_data__QLLK, &b_TProtonChunk_data__QLLK);
   fChain->SetBranchAddress("TProtonChunk.name_", TProtonChunk_name_, &b_TProtonChunk_name_);
   fChain->SetBranchAddress("TNeutronChunk", &TNeutronChunk_, &b_TNeutronChunk_);
   fChain->SetBranchAddress("TNeutronChunk.chunk_id_", TNeutronChunk_chunk_id_, &b_TNeutronChunk_chunk_id_);
   fChain->SetBranchAddress("TNeutronChunk.data_.fUniqueID", TNeutronChunk_data__fUniqueID, &b_TNeutronChunk_data__fUniqueID);
   fChain->SetBranchAddress("TNeutronChunk.data_.fBits", TNeutronChunk_data__fBits, &b_TNeutronChunk_data__fBits);
   fChain->SetBranchAddress("TNeutronChunk.data_.E", TNeutronChunk_data__E, &b_TNeutronChunk_data__E);
   fChain->SetBranchAddress("TNeutronChunk.data_.X", TNeutronChunk_data__X, &b_TNeutronChunk_data__X);
   fChain->SetBranchAddress("TNeutronChunk.data_.Y", TNeutronChunk_data__Y, &b_TNeutronChunk_data__Y);
   fChain->SetBranchAddress("TNeutronChunk.data_.Z", TNeutronChunk_data__Z, &b_TNeutronChunk_data__Z);
   fChain->SetBranchAddress("TNeutronChunk.data_.T", TNeutronChunk_data__T, &b_TNeutronChunk_data__T);
   fChain->SetBranchAddress("TNeutronChunk.data_.TLLK", TNeutronChunk_data__TLLK, &b_TNeutronChunk_data__TLLK);
   fChain->SetBranchAddress("TNeutronChunk.data_.QLLK", TNeutronChunk_data__QLLK, &b_TNeutronChunk_data__QLLK);
   fChain->SetBranchAddress("TNeutronChunk.name_", TNeutronChunk_name_, &b_TNeutronChunk_name_);
   fChain->SetBranchAddress("TVetoClusterChunk", &TVetoClusterChunk_, &b_TVetoClusterChunk_);
   fChain->SetBranchAddress("TVetoClusterChunk.chunk_id_", TVetoClusterChunk_chunk_id_, &b_TVetoClusterChunk_chunk_id_);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.fUniqueID", TVetoClusterChunk_data__fUniqueID, &b_TVetoClusterChunk_data__fUniqueID);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.fBits", TVetoClusterChunk_data__fBits, &b_TVetoClusterChunk_data__fBits);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Charge[10]", TVetoClusterChunk_data__Charge, &b_TVetoClusterChunk_data__Charge);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Time[10]", TVetoClusterChunk_data__Time, &b_TVetoClusterChunk_data__Time);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.X[10]", TVetoClusterChunk_data__X, &b_TVetoClusterChunk_data__X);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Y[10]", TVetoClusterChunk_data__Y, &b_TVetoClusterChunk_data__Y);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Z[10]", TVetoClusterChunk_data__Z, &b_TVetoClusterChunk_data__Z);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.XSig[10]", TVetoClusterChunk_data__XSig, &b_TVetoClusterChunk_data__XSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.YSig[10]", TVetoClusterChunk_data__YSig, &b_TVetoClusterChunk_data__YSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.ZSig[10]", TVetoClusterChunk_data__ZSig, &b_TVetoClusterChunk_data__ZSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.SigMax[10]", TVetoClusterChunk_data__SigMax, &b_TVetoClusterChunk_data__SigMax);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.SepMean[10]", TVetoClusterChunk_data__SepMean, &b_TVetoClusterChunk_data__SepMean);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.TSig[10]", TVetoClusterChunk_data__TSig, &b_TVetoClusterChunk_data__TSig);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Left", TVetoClusterChunk_data__Left, &b_TVetoClusterChunk_data__Left);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.NC", TVetoClusterChunk_data__NC, &b_TVetoClusterChunk_data__NC);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Hit_Indx[240][10]", TVetoClusterChunk_data__Hit_Indx, &b_TVetoClusterChunk_data__Hit_Indx);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Hits[10]", TVetoClusterChunk_data__Hits, &b_TVetoClusterChunk_data__Hits);
   fChain->SetBranchAddress("TVetoClusterChunk.data_.Subevent", TVetoClusterChunk_data__Subevent, &b_TVetoClusterChunk_data__Subevent);
   fChain->SetBranchAddress("TVetoClusterChunk.name_", TVetoClusterChunk_name_, &b_TVetoClusterChunk_name_);
   fChain->SetBranchAddress("TVetoLinkingChunk", &TVetoLinkingChunk_, &b_TVetoLinkingChunk_);
   fChain->SetBranchAddress("TVetoLinkingChunk.chunk_id_", TVetoLinkingChunk_chunk_id_, &b_TVetoLinkingChunk_chunk_id_);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.fUniqueID", TVetoLinkingChunk_data__fUniqueID, &b_TVetoLinkingChunk_data__fUniqueID);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.fBits", TVetoLinkingChunk_data__fBits, &b_TVetoLinkingChunk_data__fBits);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnDl", TVetoLinkingChunk_data__EnDl, &b_TVetoLinkingChunk_data__EnDl);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExDl", TVetoLinkingChunk_data__ExDl, &b_TVetoLinkingChunk_data__ExDl);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnSigma", TVetoLinkingChunk_data__EnSigma, &b_TVetoLinkingChunk_data__EnSigma);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExSigma", TVetoLinkingChunk_data__ExSigma, &b_TVetoLinkingChunk_data__ExSigma);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.EnDt", TVetoLinkingChunk_data__EnDt, &b_TVetoLinkingChunk_data__EnDt);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.ExDt", TVetoLinkingChunk_data__ExDt, &b_TVetoLinkingChunk_data__ExDt);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.NC", TVetoLinkingChunk_data__NC, &b_TVetoLinkingChunk_data__NC);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.Enter", TVetoLinkingChunk_data__Enter, &b_TVetoLinkingChunk_data__Enter);
   fChain->SetBranchAddress("TVetoLinkingChunk.data_.Exit", TVetoLinkingChunk_data__Exit, &b_TVetoLinkingChunk_data__Exit);
   fChain->SetBranchAddress("TVetoLinkingChunk.name_", TVetoLinkingChunk_name_, &b_TVetoLinkingChunk_name_);
   fChain->SetBranchAddress("TReweightToCVChunk", &TReweightToCVChunk_, &b_TReweightToCVChunk_);
   fChain->SetBranchAddress("TReweightToCVChunk.chunk_id_", TReweightToCVChunk_chunk_id_, &b_TReweightToCVChunk_chunk_id_);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fUniqueID", TReweightToCVChunk_data__fUniqueID, &b_TReweightToCVChunk_data__fUniqueID);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fBits", TReweightToCVChunk_data__fBits, &b_TReweightToCVChunk_data__fBits);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.radius[3]", TReweightToCVChunk_data__radius, &b_TReweightToCVChunk_data__radius);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.ppi0", TReweightToCVChunk_data__ppi0, &b_TReweightToCVChunk_data__ppi0);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.nuanceChannel", TReweightToCVChunk_data__nuanceChannel, &b_TReweightToCVChunk_data__nuanceChannel);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.nuType", TReweightToCVChunk_data__nuType, &b_TReweightToCVChunk_data__nuType);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.enu", TReweightToCVChunk_data__enu, &b_TReweightToCVChunk_data__enu);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.parentId", TReweightToCVChunk_data__parentId, &b_TReweightToCVChunk_data__parentId);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.pParent[3]", TReweightToCVChunk_data__pParent, &b_TReweightToCVChunk_data__pParent);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.xsecweight", TReweightToCVChunk_data__xsecweight, &b_TReweightToCVChunk_data__xsecweight);
   fChain->SetBranchAddress("TReweightToCVChunk.data_.fluxweight", TReweightToCVChunk_data__fluxweight, &b_TReweightToCVChunk_data__fluxweight);
   fChain->SetBranchAddress("TReweightToCVChunk.name_", TReweightToCVChunk_name_, &b_TReweightToCVChunk_name_);
   fChain->SetBranchAddress("TWeightDetailsChunk", &TWeightDetailsChunk_, &b_TWeightDetailsChunk_);
   fChain->SetBranchAddress("TWeightDetailsChunk.chunk_id_", TWeightDetailsChunk_chunk_id_, &b_TWeightDetailsChunk_chunk_id_);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.fUniqueID", TWeightDetailsChunk_data__fUniqueID, &b_TWeightDetailsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.fBits", TWeightDetailsChunk_data__fBits, &b_TWeightDetailsChunk_data__fBits);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.resangle_wgt", TWeightDetailsChunk_data__resangle_wgt, &b_TWeightDetailsChunk_data__resangle_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.dirt_wgt", TWeightDetailsChunk_data__dirt_wgt, &b_TWeightDetailsChunk_data__dirt_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0mom_wgt", TWeightDetailsChunk_data__pi0mom_wgt, &b_TWeightDetailsChunk_data__pi0mom_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.deltamom_wgt", TWeightDetailsChunk_data__deltamom_wgt, &b_TWeightDetailsChunk_data__deltamom_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.raddelta_wgt", TWeightDetailsChunk_data__raddelta_wgt, &b_TWeightDetailsChunk_data__raddelta_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0coh_wgt", TWeightDetailsChunk_data__pi0coh_wgt, &b_TWeightDetailsChunk_data__pi0coh_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pi0res_wgt", TWeightDetailsChunk_data__pi0res_wgt, &b_TWeightDetailsChunk_data__pi0res_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.nuance_wgt", TWeightDetailsChunk_data__nuance_wgt, &b_TWeightDetailsChunk_data__nuance_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.multpi0_wgt", TWeightDetailsChunk_data__multpi0_wgt, &b_TWeightDetailsChunk_data__multpi0_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.multdelta_wgt", TWeightDetailsChunk_data__multdelta_wgt, &b_TWeightDetailsChunk_data__multdelta_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pipflux_wgt", TWeightDetailsChunk_data__pipflux_wgt, &b_TWeightDetailsChunk_data__pipflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.pimflux_wgt", TWeightDetailsChunk_data__pimflux_wgt, &b_TWeightDetailsChunk_data__pimflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.kpflux_wgt", TWeightDetailsChunk_data__kpflux_wgt, &b_TWeightDetailsChunk_data__kpflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.kmflux_wgt", TWeightDetailsChunk_data__kmflux_wgt, &b_TWeightDetailsChunk_data__kmflux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.k0flux_wgt", TWeightDetailsChunk_data__k0flux_wgt, &b_TWeightDetailsChunk_data__k0flux_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.histo_wgt", TWeightDetailsChunk_data__histo_wgt, &b_TWeightDetailsChunk_data__histo_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.npip_wgt", TWeightDetailsChunk_data__npip_wgt, &b_TWeightDetailsChunk_data__npip_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.npim_wgt", TWeightDetailsChunk_data__npim_wgt, &b_TWeightDetailsChunk_data__npim_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.absorber_wgt", TWeightDetailsChunk_data__absorber_wgt, &b_TWeightDetailsChunk_data__absorber_wgt);
   fChain->SetBranchAddress("TWeightDetailsChunk.data_.totalweight", TWeightDetailsChunk_data__totalweight, &b_TWeightDetailsChunk_data__totalweight);
   fChain->SetBranchAddress("TWeightDetailsChunk.name_", TWeightDetailsChunk_name_, &b_TWeightDetailsChunk_name_);
   fChain->SetBranchAddress("TMulMatWeightsChunk", &TMulMatWeightsChunk_, &b_TMulMatWeightsChunk_);
   fChain->SetBranchAddress("TMulMatWeightsChunk.chunk_id_", TMulMatWeightsChunk_chunk_id_, &b_TMulMatWeightsChunk_chunk_id_);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.fUniqueID", TMulMatWeightsChunk_data__fUniqueID, &b_TMulMatWeightsChunk_data__fUniqueID);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.fBits", TMulMatWeightsChunk_data__fBits, &b_TMulMatWeightsChunk_data__fBits);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.CVWeight", TMulMatWeightsChunk_data__CVWeight, &b_TMulMatWeightsChunk_data__CVWeight);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.NumSysts", TMulMatWeightsChunk_data__NumSysts, &b_TMulMatWeightsChunk_data__NumSysts);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.PosUniWeight", TMulMatWeightsChunk_data__PosUniWeight, &b_TMulMatWeightsChunk_data__PosUniWeight);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.NegUniWeight", TMulMatWeightsChunk_data__NegUniWeight, &b_TMulMatWeightsChunk_data__NegUniWeight);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.NumMultisims", TMulMatWeightsChunk_data__NumMultisims, &b_TMulMatWeightsChunk_data__NumMultisims);
   fChain->SetBranchAddress("TMulMatWeightsChunk.data_.MultiWeight", TMulMatWeightsChunk_data__MultiWeight, &b_TMulMatWeightsChunk_data__MultiWeight);
   fChain->SetBranchAddress("TMulMatWeightsChunk.name_", TMulMatWeightsChunk_name_, &b_TMulMatWeightsChunk_name_);
   Notify();
}

Bool_t newroot::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void newroot::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t newroot::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef newroot_cxx
