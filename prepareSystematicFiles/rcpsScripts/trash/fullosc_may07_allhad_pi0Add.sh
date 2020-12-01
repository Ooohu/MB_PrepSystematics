#! /bin/bash

export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight mulmat out"
export EVENTWEIGHT_RCP="my_standardconfig_npi"
export MULTYPE="myconfig_numode_Pi0Yield_add"
export OUTDIR="${PARENT_OUTDIR}fullosc/TTree_MiniBooNE/"

export RCPFILE=../rcps/nu_may07_MultisimsMCUnisims.rcp

if [ -f $RCPFILE ]
then
   #07Det
   export OUTTAG="${OUTDIR}may07_weighted_mul_Pi0Yield_Oct20"
   export OUTFILE="${OUTTAG}.root"
   export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/multisim_reweightings/AllHad_FullOsc_NuePreCuts/Likelihood_Final_Full_Dirtcut/allhad_fullosc_nueprecuts_likelihood_final_full_dirtcut_*.root"

   echo "Iutput files: ${INPUTFILES}"
   echo "Output file: ${OUTFILE}"
   echo "Analysis Framework runs in 5 seconds ..."
   sleep 5

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi
