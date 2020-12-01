#! /bin/bash
#fullosc does not contain dirt samples;

export INCLUDE_OUTCHUNKS="MonteCarloBEAMChunk"\ "MonteCarloEVNTChunk"\ "OneTrackChunk"\ "TwoTrackChunk"\ "MulMatWeightsChunk"\ "RenueToCVChunk"\ "WeightDetailsChunk"
export PARENT_OUTDIR="/scratch/klin/SystematicFiles/fullosc/"

INPUTARG=$1


if [[ $# -eq 0 ]]; then

echo "Try this to run everything:"
echo ". Run_fullosc \"OM MCMultisims Pi0Add MCUnisims OMCV\""

fi

omnums="005  010  018  022  025  028  031  034  037  040  043  046  049  052  055  058  061  064  067  070  073  076  079 006  015  020  023  026  029  032  035  038  041  044  047  050  053  056  059  062  065  068  071  074  077  007  016  021  024  027  030  033  036  039  042  045  048  051  054  057  060  063  066  069  072  075 078"

label=""

for string in $INPUTARG; do
	
	case $string in
		OM)
			echo Got argument $string

			for n in $nums; do
				echo Executing file number ${n}
				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/May06_Multisim/May06_FullOsc_NuePreCuts/${n}/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may06_OMMultisim.sh $n >>/dev/null
			done
			;;
		OMCV)
			echo Got argument $string

				export INPUTFILES="/e898-data/Links/detMC_buffer/may2006fix_baseline/osc_samples/May06_FullOsc_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may06_OMCV.sh >>/dev/null
			;;
		MCMultisims)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_FullOsc_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_Multisims.sh >>/dev/null
			;;
		Pi0Add)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_FullOsc_NuePreCuts/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_pi0Add.sh >>/dev/null
			;;
		MCUnisims)
			echo Got argument $string

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_FullOsc_NuePreCuts/qtcorr/Likelihood_Final_Full_Dirtcut/*${label}.root"
				. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh qtcorr >>/dev/null

				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_FullOsc_NuePreCuts/disc/Likelihood_Final_Full_Dirtcut/*${label}.root"
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

