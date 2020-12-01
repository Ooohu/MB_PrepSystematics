#! /bin/bash

export INCLUDE_OUTCHUNKS="MonteCarloBEAMChunk"\ "MonteCarloEVNTChunk"\ "OneTrackChunk"\ "TwoTrackChunk"\ "MulMatWeightsChunk"\ "RenueToCVChunk"\ "WeightDetailsChunk"
export PARENT_OUTDIR="/scratch/klin/SystematicFiles/nuebar/"

INPUTARG=$1


if [[ $# -eq 0 ]]; then

echo "Try this to run everything:"
echo ". Run_nue.sh \"OM MCMultisims Dirt Pi0Add MCUnisims OMCV\""

fi


label=""

for string in $INPUTARG; do
	
	case $string in
		OM)
			echo Got argument $string

			for n in $nums; do
				echo Executing file number ${n}
				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/May06_Multisim/May06_Cocktail_NuePreCuts/${n}/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may06_OMMultisim.sh $n >>/dev/null
			done
			;;
		OMCV)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/May06_Cocktail_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may06_OMCV.sh >>/dev/null
			;;
		MCMultisims)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_Multisims.sh >>/dev/null
			;;
		Dirt)
			echo Got argument $string
				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_OutOfTank_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_Dirt.sh >>/dev/null
			;;
		Pi0Add)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_pi0Add.sh >>/dev/null
			;;
		MCUnisims)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NuePreCuts/qtcorr/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh qtcorr >>/dev/null
				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NuePreCuts/disc/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh disc >>/dev/null
			;;
		*)
			echo Argument $string is not an option here.
			;;

	esac

	echo "Finish!"
done
#. nue_may06_om_cv.sh
#. aid_nue_may06_om_mul.sh
#. nue_may07_allhad_dirt.sh
#. nue_may07_allhad_MCUnisimExp.sh disc
#. nue_may07_allhad_MCUnisimExp.sh qtcorr
#. nue_may07_allhad.sh
#. nue_may07_allhad_onlypi0_common_det.sh

