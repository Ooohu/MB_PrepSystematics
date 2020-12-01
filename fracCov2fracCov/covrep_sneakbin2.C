
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

	int first_bin = 1;
	double inPOT;
	double outPOT;

	//constructor
	Input_cov( TString itarget_root,  TString isysname,  TString isw, double iinPOT, double ioutPOT, int ifirst_bin){
		target_root = itarget_root;//root file to be modified;
		sysname = isysname;
		sw=isw;

		first_bin = ifirst_bin;
		inPOT = 18.75e20;//iinPOT;
		outPOT = ioutPOT;

	};	

};


void covrep_sneakbin2(){
	//Configure
	TString input_dir = "./output_Oct20_nueUpdated_addbin/";
	TString output_dir = "./test/";
	TString nue_root_name = "../origin/finalcov_elEnuQE_bgap25_s1_h8261672200918285872_FullOsc150MeVBin.root";
//	TString nue_root_name = "../origin/finalcov_elEnuQE_bgap25_s1_h8261672200918285872_universal.root";
//	TString nue_root_name = "finalcov_elEnuQE_bgap25_s1_h14780019286981655865_CombinedFitPlus.root";//R<3
//	TString nue_root_name = "finalcov_elEnuQE_bgap25_s1_h14792307764117877360_CombinedFitPlus.root";//R<4

	vector<Input_cov*> inputs;
	inputs.push_back(new Input_cov("beamunisims","FullOscMCMultism_data","BeamUnisims",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("ccpiq2rewt","FullOscMCMultism_data","CCQECCpi",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("dirt","FullOscMCDetMultism_dirt","Dirt",51.76e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("hadronic","FullOscMCMultism_data","Hadronic",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("k0prod","FullOscMCMultism_data","K0Prod",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("kmprod","FullOscMCMultism_data","KmProd",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("kpprod","FullOscMCMultism_data","KpProd",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("pi0yield_common_det","FullOscMCMultismPi0Det_data","Pi0Yield_common_det",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("pi0yield_statbkg","FullOscMCMultismPi0Stat_data","Pi0Yield_statbkg",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("pi0yield","FullOscMCMultism_data","Pi0Yield",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("pimprodrawaboutsw","FullOscMCMultism_data","PimProd_RawAboutSW",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("pipprodrawaboutsw","FullOscMCMultism_data","PipProd_RawAboutSW",1.3198e20, 1.3198e20, 1));
	inputs.push_back(new Input_cov("xsec","FullOscMCMultism_data","XSec",1.3198e20, 1.3198e20, 1));
  inputs.push_back(new Input_cov("mcunisims_smoothed","FullOscMCUnisim_data","XsecxFluxWgt",1.3198e20,1.788e19, 1));
	inputs.push_back(new Input_cov("opticalmodel","FullOscMCOpticalModel_data","XsecxFluxWgt",6.58848e20,2.351e19, 1));

//	vector<double> binnings = {200, 250, 300, 375, 475, 550, 600, 675, 750, 800, 950, 1100, 1150, 
//	                   1250, 1300, 1500, 1700, 1900, 3000};

//GOAL: sneak first bin (universal.root) to the 19th bin, after pushing all bins  from 19th back one bin.

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

std::cout<<" On "<<temp_sys->sysname+"_"+temp_sys->sw+"_CV_drawn"<<std::endl;
//		in_th2d->Scale(ratio);
		in_cv->Scale(ratio);
		int nb = 1;//in_th2d->GetNbinsX();
		std::cout<<"Name "<<temp_sys->target_root+"2"<<std::endl;
		
		int manybins = out_th2d->GetNbinsX();
		TH2D* new_outth2d = new TH2D(temp_sys->target_root+"2",temp_sys->target_root+"2",manybins+1, 0, manybins+1, manybins+1, 0, manybins+1);
		TH1D* new_outth1d = new TH1D(temp_sys->target_root+"1d",temp_sys->target_root+"1d",manybins+1, 0, manybins+1);
		

		int fs = 0;
		for(int bindex = 0; bindex < manybins+1; bindex++){//only do one bin;
 
			double updated_value = out_th2d->GetBinContent(bindex+1+fs , bindex+1+fs); 
			double old_bin_value = out_th2d->GetBinContent(bindex+1,bindex+1); 
			std::cout<<"Update bin "<<bindex+1<<"content :";
			std::cout<<std::setw(13)<<old_bin_value<<" -> ";
			std::cout<<std::setw(13)<<updated_value;

			new_outth2d->SetBinContent(bindex+1, bindex+1, updated_value);

			double updated_cv_value = out_cv->GetBinContent(bindex+1+fs);
			double old_cv_value = out_cv->GetBinContent(bindex+1);
			new_outth1d->SetBinContent(bindex+1, updated_cv_value);

			std::cout<<" ratio:"<<updated_value/old_bin_value<<"; CV :"<<old_cv_value<<" to "<<updated_cv_value;
			std::cout<<" ratio:"<<updated_cv_value/old_cv_value<<std::endl;

			if(bindex +1 == temp_sys->first_bin){//this one is from the input file;
				std::cout<<"At bindex "<<bindex+1;
				double th2d_value = in_th2d->GetBinContent(2,2);
				new_outth2d->SetBinContent(bindex+1, bindex+1, th2d_value);//19th bin
				double th1d_value = in_cv->GetBinContent(2);
				new_outth1d->SetBinContent(bindex+1, th1d_value);
				fs = -1;//continue copying;
				std::cout<<" Actually we use M_ii "<<th2d_value<<" CV:"<< th1d_value<<std::endl;
			}
		}

		
		output_root->cd();
		new_outth1d->Write("bigcv");
		new_outth2d->Write(temp_sys->target_root);
		combine_root->Close();
		output_root->Close();
	}//next systematics



}
