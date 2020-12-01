#! /bin/bash

export PACKAGE_LIST="boodbinterface nuanceinterface inputtree eventweight out"
export EVENTWEIGHT_RCP="my_may06_config_npi_mul"

export RCPFILE=../rcps/nu_may06_OM.rcp

export OUTDIR="${PARENT_OUTDIR}/TTree_MiniBooNE/"

#read weights
export omMulPi0wgt=`cat ../may06_om_DeltaPi0Weights/multisim_reweight_${1}_pi0.dat`
export omMulDeltawgt=`cat ../may06_om_DeltaPi0Weights/multisim_reweight_${1}_delta.dat`

#run the file
if [ -f $RCPFILE ]
then

  export OUTTAG="${OUTDIR}may06_om_mul/may06_om_reweighted_mul${1}"
   export OUTFILE="${OUTTAG}.root"

  export INPUTFILES="${INPUTFILES_PREFIX}/${1}/Likelihood_Final_Full_Dirtcut/*.root"

  $FRAMEWORK_BIN/AnalysisFramework -srcp $RCPFILE | tee -a ${OUTTAG}.out
fi

