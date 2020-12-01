#! /bin/bash

#THIS IS IMPORTANT... 
. reset_global.sh

export INCLUDE_OUTCHUNKS="MonteCarloBEAMChunk"\ "MonteCarloEVNTChunk"\ "OneTrackChunk"\ "TwoTrackChunk"\ "MulMatWeightsChunk"\ "WeightDetailsChunk"

export EXCLUDE_OUTCHUNKS="OneTrackPredictionsChunk"\ "TwoTrackPredictionsChunk"\ "CalibratedDataChunk"\ "ConnectTheHitsChunk"\ "PFitterlogmuChunk"\ "FittersChunk"\ "FittersPi0Chunk"\ "PFitterChunk"\ "RoeFastChunk"\ "RoeFullChunk"\ "RoePiChunk"\ "YangVarChunk"\ "OptionalWeightsChunk"

export PARENT_OUTDIR="/scratch/klin/SystematicFiles/numu/"

INPUTARG=$1


if [[ $# -eq 0 ]]; then

echo "Try this to run everything:"
echo ". Run_numu.sh \"OM MCMultisims Dirt Pi0Add MCUnisims OMCV\""

fi

omnums="005  010  018  022  025  028  031  034  037  040  043  046  049  052  055  058  061  064  067  070  073  076  079 006  015  020  023  026  029  032  035  038  041  044  047  050  053  056  059  062  065  068  071  074  077  007  016  021  024  027  030  033  036  039  042  045  048  051  054  057  060  063  066  069  072  075 078"
#omnums excludes one ### directory that contains insufficient events in the root files;

label=""
for string in $INPUTARG; do
	
	case $string in
		OM)
			echo Got argument $string

			for n in $omnums; do
				echo Executing file number ${n}
				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/May06_Multisim/May06_Cocktail_NumuPreCuts/${n}/Likelihood_Numu_CCQE/*${label}.root"
				. ../rcpsScripts/nue_may06_OMMultisim.sh $n >>/dev/null
			done
			;;
		OMCV)
			echo Got argument $string
			#Large event numbers needs special settings - one root one output
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/May06_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may06_OMCV.sh >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done
			;;
		MCMultisims)
			echo Got argument $string
			#Large event numbers needs special settings - one root one output
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may07_allhad_Multisims.sh >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done
#				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*${label}.root"
#				. ../rcpsScripts/nue_may07_allhad_Multisims.sh >>/dev/null
			;;
		Dirt)
			echo Got argument $string
			#Large event numbers needs special settings - one root one output
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may07_allhad_Dirt.sh >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done

#				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*${label}.root"
#				. ../rcpsScripts/nue_may07_allhad_Dirt.sh >>/dev/null
			;;
		Pi0Add)
			echo Got argument $string
			#Large event numbers needs special settings - one root one output
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may07_allhad_pi0Add.sh >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done


#				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Cocktail_NumuPreCuts/Likelihood_Numu_CCQE/*${label}.root"
#				. ../rcpsScripts/nue_may07_allhad_pi0Add.sh >>/dev/null
			;;
		MCUnisims)
			echo Got argument $string

			#Large event numbers needs special settings - one root one output
			#qtcorr
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NumuPreCuts/qtcorr/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh qtcorr >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done

			#disc
			ONE2ONE="$(ls /scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NumuPreCuts/disc/Likelihood_Numu_CCQE/*.root)"
			LOOP_COUNT=0

				for ROOTNAME in $ONE2ONE; do
					echo "output file order number ${LOOP_COUNT}"
					export GLOTAG="_${LOOP_COUNT}"
					export INPUTFILES="${ROOTNAME}"
					. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh disc >>/dev/null
					LOOP_COUNT=$((LOOP_COUNT+1))
				done


#				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NumuPreCuts/qtcorr/Likelihood_Numu_CCQE/*${label}.root"
#				. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh qtcorr >>/dev/null
#				export INPUTFILES="/scratch/condor-tmp/zarko/data_area/numode/AllHad_Unisim/AllHad_Cocktail_NumuPreCuts/disc/Likelihood_Numu_CCQE/*${label}.root"
#				. ../rcpsScripts/nue_may07_allhad_MCUnisim.sh disc >>/dev/null
			;;
		*)
			echo Argument $string is not an option here.
			;;

	esac

	echo "Finish!"
done

. reset_global.sh
