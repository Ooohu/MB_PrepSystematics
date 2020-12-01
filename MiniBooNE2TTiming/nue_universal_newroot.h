//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Oct 13 17:19:57 2020 by ROOT version 6.12/04
// from TTree MiniBooNE/Created in /scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul_Oct20.root
// found on file: /scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul_Oct20.root
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
   static constexpr Int_t kMaxTHistory = 78;
   static constexpr Int_t kMaxTHistory_algo_name = 78;
   static constexpr Int_t kMaxTHistory_algo_inst = 78;
   static constexpr Int_t kMaxTHistory_chunk_name = 78;
   static constexpr Int_t kMaxTHistory_ext_name = 78;
   static constexpr Int_t kMaxTHistory_version = 78;
   static constexpr Int_t kMaxTHistory_node = 78;
   static constexpr Int_t kMaxTHistory_database = 78;
   static constexpr Int_t kMaxTHistory_inst_num = 78;
   static constexpr Int_t kMaxTHistory_timestamp = 78;
   static constexpr Int_t kMaxTHistory_rcpid = 78;
   static constexpr Int_t kMaxTHistory_chunkid = 78;
   static constexpr Int_t kMaxTHistory_parents = 78;
   static constexpr Int_t kMaxTHistory_tags = 78;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloEVNTChunk_name = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_chunk_id = 1;
   static constexpr Int_t kMaxTMonteCarloBEAMChunk_name = 1;
   static constexpr Int_t kMaxTOneTrackChunk = 2;
   static constexpr Int_t kMaxTOneTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTOneTrackChunk_name = 2;
   static constexpr Int_t kMaxTTwoTrackChunk = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_chunk_id = 2;
   static constexpr Int_t kMaxTTwoTrackChunk_name = 2;
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
   void FillVars(int &nthrows, int multithrows, Float_t ovars[][1], std::vector< std::vector< std::vector< Float_t > > > container, TTree* out_tree);
   int GetNpi0();
};

#endif

#ifdef newroot_cxx
newroot::newroot(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   std::vector<TString> filelist = {
	   "/scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul_Oct20.root",
	   "/scratch/klin/SystematicFiles/nue/TTree_MiniBooNE/may07_weighted_mul_Pi0Yield_Oct20.root",//1
	   "/scratch/klin/SystematicFiles/fullosc/TTree_MiniBooNE/may07_weighted_mul_Oct20.root",
	   "/scratch/klin/SystematicFiles/fullosc/TTree_MiniBooNE/may07_weighted_disc_Oct20.root",//3
	   "/scratch/klin/SystematicFiles/fullosc/TTree_MiniBooNE/may07_weighted_qtcorr_Oct20.root"};

   TString filename = filelist[4];

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
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__id[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_eng[i] = 0;
   for(int i=0; i<kMaxTMonteCarloBEAMChunk; ++i) TMonteCarloBEAMChunk_data__ini_t[i] = 0;
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
