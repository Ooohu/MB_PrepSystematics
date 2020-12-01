
#include "TCanvas.h"
#include "TROOT.h"
#include "TF1.h"

using namespace std;


	template <typename T>
TString gadget_i2s(const T a_value, const int n = 0)
{
	std::ostringstream out;
	out <<std::fixed<< std::setprecision(n) << a_value;

		return out.str();
}

class Input_cov{

	public:
	TString  target_root;//root file to be modified;
	TString  sysname;
	TString  sw;

	int first_bin = 19;
	double inPOT;
	double outPOT;

	//constructor
	Input_cov( TString itarget_root,  TString isysname,  TString isw, double iinPOT, double ioutPOT, int ifirst_bin){
		target_root = itarget_root;//root file to be modified;
		sysname = isysname;
		sw=isw;

		first_bin = ifirst_bin;//CHECK
		inPOT = 18.75e20;//iinPOT;
		outPOT = ioutPOT;

	};	

};


void covrep(){
	//Configure
	TString input_dir = "./origin/";
	TString output_dir = "./output/";
	TString nue_root_name = "finalcov_elEnuQE_bgap25_s1_h8261672200918285872_CombinedFitPlus.root";
//	TString nue_root_name = "finalcov_elEnuQE_bgap25_s1_h14780019286981655865_CombinedFitPlus.root";//R<3
//	TString nue_root_name = "finalcov_elEnuQE_bgap25_s1_h14792307764117877360_CombinedFitPlus.root";//R<4

	vector<Input_cov*> inputs;
	inputs.push_back(new Input_cov("beamunisims","NueMCMultism_data","BeamUnisims",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("ccpiq2rewt","NueMCMultism_data","CCQECCpi",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("dirt","NueMCDetDirtMultism_dirt","Dirt",51.76e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("hadronic","NueMCMultism_data","Hadronic",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("k0prod","NueMCMultism_data","K0Prod",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("kmprod","NueMCMultism_data","KmProd",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("kpprod","NueMCMultism_data","KpProd",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("pi0yield_common_det","NueMCMultismPi0Det_data","Pi0Yield_common_det",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("pi0yield_statbkg","NueMCMultismPi0Stat_data","Pi0Yield_statbkg",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("pi0yield","NueMCMultism_data","Pi0Yield",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("pimprodrawaboutsw","NueMCMultism_data","PimProd_RawAboutSW",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("pipprodrawaboutsw","NueMCMultism_data","PipProd_RawAboutSW",41.08e20, 41.08e20, 19));
	inputs.push_back(new Input_cov("xsec","NueMCMultism_data","XSec",41.08e20, 41.08e20, 19));
  inputs.push_back(new Input_cov("mcunisims_smoothed","NueMCUnisim_data","XsecxFluxWgt",41.08e20, 5.579e20, 19));
	inputs.push_back(new Input_cov("opticalmodel","NueMCOpticalModel_data","XsecxFluxWgt",6.58848e20,18.75e20, 19));

//	vector<double> binnings = {200, 250, 300, 375, 475, 550, 600, 675, 750, 800, 950, 1100, 1150, 
//	                   1250, 1300, 1500, 1700, 1900, 3000};


	//Load nue root
	TFile* nue_root = TFile::Open( input_dir + nue_root_name);

	//Loop combine roots
	for(size_t index = 0; index<inputs.size(); ++index){

		Input_cov* temp_sys =  inputs[index];	
		double ratio = temp_sys->outPOT/temp_sys->inPOT;
		std::cout<<"Rescale ratio: "<<ratio<<std::endl;
		TFile* combine_root = TFile::Open( input_dir + temp_sys->target_root+"_matrix.root","READ");
		TFile* output_root = (TFile*) TFile::Open( output_dir + temp_sys->target_root+"_matrix.root","RECREATE");
		
		//load bgcv
		//Load nue hist
		TH2D* in_th2d = (TH2D*) nue_root->Get(temp_sys->sysname+"_"+temp_sys->sw+"_FracMatrix_drawn");
		std::cout<<"Get 2dhist "<<temp_sys->sysname+"_"+temp_sys->sw+"_FracMatrix_drawn"<<std::endl;

		//Load target to-be-modified histogram
		TH2D* out_th2d = (TH2D*) combine_root->Get(temp_sys->target_root);
		
		//Load cv
		TH1F* in_cv = (TH1F*) nue_root->Get(temp_sys->sysname+"_"+temp_sys->sw+"_CV_drawn");

		TH1F* out_cv = (TH1F*) combine_root->Get("bigcv");

//		in_th2d->Scale(ratio);
		in_cv->Scale(ratio);
		int nb = in_th2d->GetNbinsX();
		std::cout<<"nb"<<nb<<std::endl;
		
		for(int bindex = 0; bindex < nb; bindex++){
			double in_bin_value = in_th2d->GetBinContent(bindex+1, bindex+1); 
			double old_bin_value = out_th2d->GetBinContent(bindex+temp_sys->first_bin,bindex+temp_sys->first_bin); 
			std::cout<<"Update bin content :";
			std::cout<<std::setw(13)<<old_bin_value<<" -> ";
			std::cout<<std::setw(13)<<in_bin_value;

			out_th2d->SetBinContent(bindex+temp_sys->first_bin, bindex+temp_sys->first_bin, in_bin_value);

			double in_cv_value = in_cv->GetBinContent(bindex+1);
			double old_cv_value = out_cv->GetBinContent(bindex+temp_sys->first_bin);
			out_cv->SetBinContent(bindex+temp_sys->first_bin, in_cv_value);

			std::cout<<" ratio:"<<in_bin_value/old_bin_value<<"; CV :"<<old_cv_value<<" to "<<in_cv_value;
			std::cout<<" ratio:"<<in_cv_value/old_cv_value<<std::endl;
		}

		
		output_root->cd();
		out_cv->Write("bigcv");
		out_th2d->Write(temp_sys->target_root);
		combine_root->Close();
		output_root->Close();
	}//next systematics



}
