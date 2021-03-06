#! /bin/bash

export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight mulmat out"
export EVENTWEIGHT_RCP="my_standardconfig_npi"
export MULTYPE="myconfig_numode"
export OUTDIR="${PARENT_OUTDIR}/TTree_MiniBooNE/"

export RCPFILE=../rcps/nu_may07_MultisimsMCUnisims.rcp

if [ -f $RCPFILE ]
then
   #07Det
   export OUTTAG="${OUTDIR}may07_weighted_mul_Oct20"
   export OUTFILE="${OUTTAG}.root"
   export INPUTFILES="${INPUTFILES_PREFIX}/*.root"

   echo "Iutput files: ${INPUTFILES}"
   echo "Output file: ${OUTFILE}"
   echo "Analysis Framework runs in 5 seconds ..."
   sleep 5

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi
