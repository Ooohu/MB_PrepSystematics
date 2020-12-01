#! /bin/bash

export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight out"
export EVENTWEIGHT_RCP="my_may06_config_npi_cv"

export RCPFILE=../rcps/nu_may06_OM.rcp

export OUTDIR="${PARENT_OUTDIR}fullosc/TTree_MiniBooNE/"

if [ -f $RCPFILE ]
then

  export OUTTAG="${OUTDIR}may06_om_reweighted_cv"
   export OUTFILE="${OUTTAG}.root"

  export INPUTFILES="/e898-data/Links/detMC_buffer/may2006fix_baseline/osc_samples/May06_FullOsc_NuePreCuts/Likelihood_Final_Full_Dirtcut/may06_fullosc_nueprecuts_likelihood_final_full_dirtcut_0*.root"

   echo "Iutput files: ${INPUTFILES}"
   echo "Output file: ${OUTFILE}"
   echo "Analysis Framework runs in 5 seconds ..."
   sleep 5

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi

