echo "Set Python!"

export PYTHONUSERBASE=/scratch/condor-tmp/klin/python_libs
#	mkdir -p $PYTHONUSERBASE
export PYTHONPATH=$PYTHONUSERBASE/bin:$PYTHONPATH
export PATH=$PYTHONUSERBASE/bin:$PATH
#from https://github.com/wesketchum/MicroBooNE_Notebooks/blob/master/README.md

#prepaer the AnalysisFramework, following https://www-boone.fnal.gov/software_and_analysis/current_framework/doc/index.html
export LD_LIBRARY_PATH=$ROOTSYS/lib

echo "Set up python v2_7_14 and numpy v1_11_0d -qe10Lp2711:prof" 
setup python v2_7_14;setup numpy v1_11_0d -qe10:p2711:prof # will mess up AnalysisFramework

