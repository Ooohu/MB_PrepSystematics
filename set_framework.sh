	source /miniboone/app/app/Scripts/setup_miniboone.sh
	export PRODUCTS=/grid/fermiapp/products/uboone:/grid/fermiapp/products/common/db:/grid/fermiapp/products/larsoft/:$PRODUCTS

	echo "Prepare Analysis Framework!"

	echo "Setting up cmake v3_7_1"
		setup cmake v3_7_1
	echo "Setting up gcc v6_4_0"
		setup gcc v6_4_0 # will mess up AnalysisFramework
	echo "Setting up root v6_12_04e" 
		setup root v6_12_04e -q e15:prof # will mess up AnalysisFramework
#	echo "Setting up root v6_06_04b -qe10:nu:prof"
#		setup root v6_06_04b -qe10:nu:prof # will mess up AnalysisFramework
	setup ifdhc
