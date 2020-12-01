#! /bin/bash

export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight out"
export EVENTWEIGHT_RCP="my_standardconfig_npi"
export MULTYPE="myconfig_numode" #Note, this is no used, but just to pass a check; 
export OUTDIR="${PARENT_OUTDIR}/TTree_MiniBooNE/"

export RCPFILE=../rcps/nu_may07_MultisimsMCUnisims.rcp



if [ -f $RCPFILE ]
then
   #07MCUnisims, 1 = qtcorr, disc
   export OUTTAG="${OUTDIR}may07_weighted_${1}_Oct20"
   export OUTFILE="${OUTTAG}.root"
   export INPUTFILES="${INPUTFILES_PREFIX}/${1}/Likelihood_Final_Full_Dirtcut/*.root"

   echo "Iutput files: ${INPUTFILES}"
   echo "Output file: ${OUTFILE}"
   echo "Analysis Framework runs in 5 seconds ..."
   sleep 5

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi
