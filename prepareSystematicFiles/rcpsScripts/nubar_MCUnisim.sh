#! /bin/bash
export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight out"
export EVENTWEIGHT_RCP="standardconfig_nubarmode_npi"
export MULTYPE="my_standardconfig_nubar_mar12" #Note, this is no used, but just to pass a check; bc, no mulmat at line 2
export OUTDIR="${PARENT_OUTDIR}/TTree_MiniBooNE/"

export RCPFILE=../rcps/nubar_allin1.rcp



if [ -f $RCPFILE ]
then
   #07MCUnisims, 1 = qtcorr, disc
   export OUTTAG="${OUTDIR}may07_weighted_${1}_Dec20"
   export OUTFILE="${OUTTAG}.root"

   echo "Iutput files: ${INPUTFILES}"
   echo "Output file: ${OUTFILE}"
   echo "Analysis Framework runs in 5 seconds ..."
   sleep 5

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi
