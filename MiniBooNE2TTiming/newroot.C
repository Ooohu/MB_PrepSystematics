#define newroot_cxx
#include "newroot.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TClass.h>

using namespace std;

void newroot::Loop()
{
//   In a ROOT session, you can do:
//      root> .L newroot.C
//      root> newroot t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

   if (fChain == 0) return;

//configuration
	TString dir = "./output_root/";//output directory
	bool Multiwgt = false;//read weights from TMultiWeight Chunk, if true;
	bool multifiles = true;//reset entry at some specific entries, if true; this is for OM_SW
	//CHANGE line 409 for the correct throws; 
	const int multithrows = 67;//67 = entry_marks.size() for OM; others, 1000
	const int num_vars = 51;// has to be constant for the array size;
	
	int output_type = 2;//choose type of outputs
	//set output info.
	TString label = "Numu";
	std::vector<TString > list = {
		"may07DetMC",//0, type 0
		"may07DetMC_Pi0Yield_add",//1, type 1
		"may07DirtMC",//2, type 0
		"may07DISCMC",//type 2
		"may07QTCORRMC",//type 2
		"may06OM_MCCV",//5, type 2
		"may06OM_MC",//type 2
	};
	//numu use this line;
	TString outputname= label + list[6] + file_order[global_index]+".root";

//	TString outputname= label + list[1] +".root";


	TString output = dir + outputname;
	std::cout<<" Create file "<<output<<std::endl;

	TFile* out_file = TFile::Open(output, "RECREATE");
	TTree* out_tree = new TTree("TTiming", "test");
	std::vector< int> marks;
	
	if(multifiles){ marks = entry_marks;} else{ marks = {0};};
	//varaibles that we need to store in the output file:
	//define, out_tree->Branch("name", &var, "name+/type");

	std::vector< TString> ovname = {
		"el.X",//0
		"el.Y",//1
		"el.Z",//2
		"el.UX",//3
		"el.UY",//4
		"el.UZ",//5
		"el.E",//6
		"el.F",//7
		"el.R",//8, Float_t*
		"el.EnuQE",//9
		"el.RtoWallB",//10
		"el.RtoWallF",//11
		"mu.X",//0+12
		"mu.Y",//1+12
		"mu.Z",//2+12
		"mu.UX",//3+12
		"mu.UY",//4+12
		"mu.UZ",//5+12
		"mu.E",//6+12
		"mu.F",//7+12
		"mu.R",//8+12, Float_t*
		"mu.EnuQE",//9+12
		"mu.RtoWallB",//10+12
		"mu.RtoWallF",//11+12
		"piFix.F",//13+11
		"piNoFix.M",//14+11
		//and systematic stuff
		"CV",//26
		"Dirt",//27, sw 0
		"Pi0Yield",//28, sw 0
		"Hadronic",//29, sw 1
		"CCQECCpi",//30, sw 2
		"XSec",// sw 3
		"BeamUnisims",// sw 4
		"KmProd",// sw 5
		"K0Prod",// sw 6
		"KpProd",// sw 7
		"PimProd_RawAboutSW",// sw 8
		"PipProd_RawAboutSW",// sw 9
		//additional variables
		"nuleng",//38
		"enugen",
		"inno",
		"nuchan",
		"parid",//42
		"isdirt",
		"ispi0",
		"backgroundType",//45
		"Pi0Yield_statbkg",//46, sw 0
		"Pi0Yield_common_det",//47, sw 0
		"AntinuDirt",//48
		"AntinuPi0Yield",//49
		"AntinuBeamUnisims",//50
	};

	
	//Set Branches for outputs;
	//a special one
	int nthrows = 0;
	out_tree->Branch("Nthrows", &nthrows, "Nthrows/I");

	Float_t ovars[num_vars][multithrows] = {0};

	for(int index = 0; index < num_vars; ++index){
		out_tree->Branch( ovname[index], ovars[index], ovname[index] + "[Nthrows]/F");
	}

	//Need a giant container to store values before feeding to the tree;
	Long64_t nentries = (multifiles)? std::accumulate(marks.begin(),marks.end(),0) : fChain->GetEntriesFast();
	int max_entry = (multifiles)? *max_element(marks.begin(), marks.end()) : nentries;

	for(size_t index = 0 ; index < marks.size(); index ++){
	std::cout<<"Mark "<< index <<" has "<<marks[index]<<std::endl;

	}
	int kick_off_entry = 0;
	int step = max_entry/3;//once the #=step event is reached, reset.
	int total_entries=max_entry;
	std::cout<<"One loop reads "<<step <<" entries"<<std::endl;
	while(kick_off_entry<total_entries){
		std::cout<<"Started with entry "<<kick_off_entry<<std::endl;
		if(kick_off_entry+step > total_entries) step = total_entries - kick_off_entry;

		std::vector< std::vector< std::vector< Float_t > > > container( step , 
				std::vector< std::vector< Float_t > > ( num_vars, 
					std::vector< Float_t >( multithrows, 0
						)));

		int om_index = 0;//for OM, this keep track of the nth element of given vector;
		int om_entries = 0;//for OM, this keep track of the nth element of given vector;
		bool its_numu = label.Contains("mu");
		for (Long64_t jentry=kick_off_entry; jentry<nentries;jentry++) {//all entries

			if(jentry == kick_off_entry+step + std::accumulate(marks.begin(),marks.begin()+om_index,0) &&multifiles){//nth entry of each files;
//			if(jentry == std::accumulate(marks.begin(),marks.begin()+om_index+1,0)&&multifiles){//nth entry of each files;}
				jentry+=marks[om_index];//take sectional entries, e.g. 1, 1000, 2000, etc. as first output entry
				om_index++;
				om_entries = 0;
				std::cout<<"\t\t\t\tJump";
				if(om_index>67) break;
				//			std::cout<<"This "<<jentry<<std::endl;
			}

			//		   std::cout<<" At entries at "<<jentry<<" reset om_entries "<<om_jentry+1 <<" and finish throw: "<<om_index<<std::endl;

					   gSystem->RedirectOutput("/dev/null");
			Long64_t ientry = LoadTree( jentry);
			fChain->GetEntry( jentry);
					   gSystem->RedirectOutput(0,0);

			//------not important stuff;
			if (ientry < 0) break;
			//	   nb = fChain->GetEntry(jentry);   nbytes += nb;

			if (TOneTrackChunk_ == 0 && !its_numu) {
				//cout<<"Skip No TOneTrackChunk"<<endl;
				//			   exit(0);
				continue;
			}

			int track = 0;
			for (; track < TOneTrackChunk_; ++track) {
				// 1 for electron fit
				// 2 for muon fit
				// 3 for proton fit (not used)
				// 4 for pionplus fit (not used)
				if (TOneTrackChunk_data__trackType[track] == 1) {
					//			   exit(0);
					break;
				}
			}

			if (track == TOneTrackChunk_ && !its_numu) {
				//cout<<"Skip No TOneTrackChunk2"<<endl;
				//			   exit(0);
				continue;
			}
			if(multifiles){
				std::cout<<"\r Looping "<<std::setw(5)<<jentry<<"/"<<setw(5)<<nentries<<" throws "<<std::setw(3)<<om_index<<" subentries: "<<setw(4)<<om_entries;
				GrabVars(container,om_entries, om_index, output_type, Multiwgt,its_numu);//one entry one throw
			} else{
				std::cout<<"\r Looping "<<std::setw(5)<<jentry<<"/"<<setw(5)<<nentries;
				for(int temp_index = 0; temp_index< multithrows; ++temp_index){//one entry multiple throws;
					GrabVars(container,om_entries, temp_index, output_type, Multiwgt,its_numu);
				}
			}
			om_entries++;
		}//end of looping entries;


		// vector<vector<int> > vec( n , vector<int> (m)); 
		//  vector<int> vect(n, 10);

		cout<<"\nFinish the loop!"<<endl;

		FillVars(nthrows, multithrows, ovars, container, out_tree);

		kick_off_entry+= step;
	};

	out_file->cd(); 
	out_tree->Write();
	out_file->Close();

   //save them according to types:

	TFile* check_file = TFile::Open(output, "READ");
	TTree* check_tree = (TTree*) check_file->Get("TTiming");

	std::cout<<"Write entires:"<<check_tree->GetEntries()<<std::endl;
	check_file->Close();
}

/*
 * Update the container that stores values of variables.
 */
void newroot::GrabVars(std::vector<std::vector< std::vector< Float_t> >> & container, int entryndex, int throwndex, int option, bool its_Multisim, bool its_numu){

			   int target_wgt = 1;
			   double adjusted_wgt = 1;//might not need this now;
			   std::vector<int> e_mu_index(2);//for e,mu now;
			   size_t num_tracks = 2;
			   for(size_t index = 0; index < num_tracks; ++index){//figure out e_mu_index;
					if(TOneTrackChunk_data__trackType[index] == 1) e_mu_index[0] = index;//trackType 1 is the code for e
					if(TOneTrackChunk_data__trackType[index] == 2) e_mu_index[1] = index;//trackType 2 is the code for mu
			   }

			   if(e_mu_index[0] == e_mu_index[1] ){ 
					std::cerr<<"trackType throwndex are not identified!"<<std::endl;
					exit(EXIT_FAILURE);
			   }
			 
			   //Some  constants;
			   int varsAset = 11; //el. & mu. has 12 variables each
			   std::vector<Float_t> Mlep = {0.511,105.7};//electron mass
			   Float_t Mp = 938.27;//proton mass
			   Float_t Mn = 939.56;//neutron mass
			   Float_t mbRadius = 548.17;//radius of the MiniBooNE;
//el. & mu. variables;
			   for(int lndex = 0; lndex < 2; ++lndex){//same parameter sets for el. and mu.;
				   int undex = e_mu_index[lndex];//e_mu_index[0] stands for electron;
				   int ofset = lndex*varsAset;//offset the throwndex for el. and mu.;
				   container[entryndex][0+ofset][throwndex] = TOneTrackChunk_data__X[undex];
				   container[entryndex][1+ofset][throwndex] = TOneTrackChunk_data__Y[undex];
				   container[entryndex][2+ofset][throwndex] = TOneTrackChunk_data__Z[undex];
				   container[entryndex][3+ofset][throwndex] = TOneTrackChunk_data__UX[undex];
				   container[entryndex][4+ofset][throwndex] = TOneTrackChunk_data__UY[undex];
				   container[entryndex][5+ofset][throwndex] = TOneTrackChunk_data__UZ[undex];
				   container[entryndex][6+ofset][throwndex] = TOneTrackChunk_data__E[undex];
				   container[entryndex][7+ofset][throwndex] = TOneTrackChunk_data__F[undex];
				   //derivated R
				   container[entryndex][8+ofset][throwndex] = sqrt( pow( TOneTrackChunk_data__X[undex],2) + pow( TOneTrackChunk_data__Y[undex],2) + pow( TOneTrackChunk_data__Z[undex],2)); 

					// EnuQE
				   container[entryndex][9+ofset][throwndex] = 0.5*(2.0*Mn* (Mlep[lndex]+ TOneTrackChunk_data__E[undex] ) + pow(Mp,2) - pow(Mn,2) - pow(Mlep[lndex],2))/(Mn - (Mlep[lndex]+ TOneTrackChunk_data__E[undex] ) + TOneTrackChunk_data__UZ[undex] * sqrt( pow(Mlep[lndex]+ TOneTrackChunk_data__E[undex] ,2) - pow(Mlep[lndex], 2) ));

				   //RtoWall aid
				   Float_t UdotR = TOneTrackChunk_data__X[undex]*TOneTrackChunk_data__UX[undex] 
								 + TOneTrackChunk_data__Y[undex]*TOneTrackChunk_data__UY[undex] 
								 + TOneTrackChunk_data__Z[undex]*TOneTrackChunk_data__UZ[undex] ;
				//RtoWallB
				   container[entryndex][10+ofset][throwndex] = (container[entryndex][8+ofset][throwndex]<mbRadius)? 
				   UdotR + sqrt(pow( mbRadius,2) - pow(container[entryndex][8+ofset][throwndex],2) + pow( UdotR, 2)) 
				   : -9999;

				//RtoWallF
				   container[entryndex][11+ofset][throwndex] = (container[entryndex][8+ofset][throwndex]<mbRadius)? 
				   - UdotR + sqrt(pow( mbRadius,2) - pow(container[entryndex][8+ofset][throwndex],2) + pow( UdotR, 2))
				   : -9999;
			   }//the followings are unique variables

				//Pion stuff;
			   int pionFixindex = (its_numu)? 0: ((TTwoTrackChunk_data__fixedMass[0]< 10e-20)?  1:0);
			   container[entryndex][24][throwndex] = (its_numu)? 0: TTwoTrackChunk_data__F[pionFixindex];

			   int pionNoFixindex = (its_numu)? 0: ((TTwoTrackChunk_data__fixedMass[0]< 10e-20)?  0:1);
			   container[entryndex][25][throwndex] = (its_numu)? 0:TTwoTrackChunk_data__M[pionNoFixindex];

			   
			   //Systematics comes as the following; started with 26
			   double centralValue = TWeightDetailsChunk_data__totalweight[0]*adjusted_wgt;
			   container[entryndex][26][throwndex] = centralValue;

			   if(container[entryndex][26][throwndex]>29) container[entryndex][26][throwndex] = 0;

			   switch(option){
				   case 0://only dirt
						//27...37 - [0]...
						//46...50 - CV
					   if(!its_Multisim){ 
						   std::cout<<"CHECK LINE "<<__LINE__<<std::endl;
						   exit(0);
					   }
					   for( int jndex  = 0; jndex < 11; ++jndex){ //different systematic weights, 16~26
						   container[entryndex][27+jndex][throwndex] =  TMulMatWeightsChunk_data__MultiWeight[jndex][throwndex]*adjusted_wgt;
					   }
					   for( int jndex  = 0; jndex < 5; ++jndex){ //different systematic weights, 16~26
						   container[entryndex][46+jndex][throwndex] = centralValue;
					   }

					   break;

				   case 1://Pi0Yield_add
						//27...37 - CV
						//48...50 - CV
						//46,47 - [0][1]
					   if(!its_Multisim){ 
						   std::cout<<"CHECK LINE "<<__LINE__<<std::endl;
						   exit(0);
					   }
					   for( int jndex  = 0; jndex < 11; ++jndex){ //different systematic weights, 16~26
						   container[entryndex][27+jndex][throwndex] = centralValue;
					   }
					   container[entryndex][46][throwndex] = TMulMatWeightsChunk_data__MultiWeight[0][throwndex]*adjusted_wgt;
					   container[entryndex][47][throwndex] = TMulMatWeightsChunk_data__MultiWeight[1][throwndex]*adjusted_wgt;
					   container[entryndex][48][throwndex] = centralValue;
					   container[entryndex][49][throwndex] = centralValue;
					   container[entryndex][50][throwndex] = centralValue;

					   break;
				   case 2:
						//27..37 - CV
						//46..50 - CV 
					   for( int jndex  = 0; jndex < 11; ++jndex){
						   container[entryndex][27+jndex][throwndex] =  centralValue;
					   }
					   for( int jndex  = 0; jndex < 5; ++jndex){
						   container[entryndex][46+jndex][throwndex] =  centralValue;
					   }

					   break;

					default:
					   break;
			   }
			
//MCTruth stuff, started with 38
			   Float_t vrtX = TMonteCarloEVNTChunk_data__VRTX[0][0][0];
			   Float_t vrtY = TMonteCarloEVNTChunk_data__VRTX[0][0][1];
			   Float_t vrtZ = TMonteCarloEVNTChunk_data__VRTX[0][0][2];
			   Float_t ini_posX = TMonteCarloBEAMChunk_data__ini_pos[0][0][0]; 
			   Float_t ini_posY = TMonteCarloBEAMChunk_data__ini_pos[0][0][1]; 
			   Float_t ini_posZ = TMonteCarloBEAMChunk_data__ini_pos[0][0][2]; 

			   //I guess we only need first particle [0][nth particle][?];
			   //nuleng
			   container[entryndex][38][throwndex] = sqrt( pow( vrtX + 0 - ini_posX, 2) +
													pow( vrtY + 189.614 - ini_posY, 2) +
													pow( vrtZ + 54173.1 - ini_posZ, 2) ) *1.0E-5;

			   container[entryndex][39][throwndex] = TMonteCarloEVNTChunk_data__PNEU[0][3];//enugen
			   container[entryndex][40][throwndex] = TMonteCarloEVNTChunk_data__INNO[0];//inno
			   container[entryndex][41][throwndex] = TMonteCarloEVNTChunk_data__EVWT[0];//nuchan

			   //parid: parent id
			   int parent_npart = TMonteCarloBEAMChunk_data__npart[0] - 1;
			   container[entryndex][42][throwndex] = TMonteCarloBEAMChunk_data__id[0][parent_npart-1];
			   while(container[entryndex][42][throwndex] ==14 && parent_npart>=3){
				   parent_npart -= 1;
				   container[entryndex][42][throwndex] =  TMonteCarloBEAMChunk_data__id[0][parent_npart-1];
			   }
				
				//isdirt?
			   bool isdirt = false;
			   if( sqrt(pow(vrtX,2) + pow(vrtY,2) + pow(vrtZ,2)) > 610.6) isdirt = true;//610.6 
			   container[entryndex][43][throwndex] = (isdirt)? 1: 0 ;//isdirt

			   //ispi0?
			   container[entryndex][44][throwndex] = (GetNpi0() >0)? 1 : 0 ;

			   //backgroundType
			   Float_t type = 11;//unknown, if none of the following condition satisfied;
			   if(isdirt){ // dirt
				   type = 8;
			   }else if(container[entryndex][44][throwndex] == 1){//check itspi0, yes -  it is pi0
				   type = 9;
			   } else if( container[entryndex][41][throwndex]  == 94 ){//check nuchan, yes - it is delta
				   type = 10;
			   } else if (container[entryndex][40][throwndex] == 3 || container[entryndex][40][throwndex] == 4){//check inno, yes - it is nue/nuebar
					switch((int) container[entryndex][42][throwndex]){//parent id
					case 8:
						type = 1;//kPiPlus
						break;
					case 9:
						type = 2;//PiMinus
						break;
					case 11:
						type = 3;//KPlus
						break;
					case 12:
						type = 4;//KMinus
						break;
					case 10:
						type = 5;//K0L
						break;
					case 5:
						type = 6;//MuPlus
						break;
					case 6:
						type = 7;//MuMinus
						break;
					};//1~7 type, for parent id: 8~12,5,6,13
			   }

			   container[entryndex][45][throwndex] = type;

}


/*
 * Fill Variables to branches
 */
void newroot::FillVars(int &nthrows, int multithrows, Float_t ovars[][67], std::vector< std::vector< std::vector< Float_t > > > container, TTree* out_tree){

	int num_entries = container.size();
	int num_vars = container[0].size();
	int length_var = (container[0][0]).size();

	for(int index = 0; index < num_entries; ++index){//each entry
		nthrows = multithrows;
		for(int jndex = 0; jndex < num_vars; ++jndex){//each variable
			for(int kndex = 0; kndex < length_var; ++kndex){//each element of the variable
				ovars[jndex][kndex] = container[index][jndex][kndex];
			}
		}
		std::cout<<"\r Filling "<<std::setw(5)<<index<<" entry ";

		out_tree->Fill();
	}
	std::cout<<std::endl;
}

/*
 * determine background.
 */

//
//   npi0 = this->GetNpi0();
//   if(npi0>0)   ispi0 = true;
//
int newroot::GetNpi0(){
   // modified from Framework Utilities/PhysicsFunctions Pi0Details
   int  npi0=0, nnpi0=0;
   int  mg=0, ngammas=0;
   float mtemp, Pgamma[127][4] ;
   float mpi0 = 0.1349766;
   float me   = 0.511e-3;
   for(int i =0; i<TMonteCarloEVNTChunk_data__NFSP[0]; i++){
      int ipfs = TMonteCarloEVNTChunk_data__IPFS[0][i];
      if(ipfs==7) {//pi0
         npi0 += 1;
      }
     else if(ipfs == 1.){//photon
       ngammas += 1;
       Pgamma[ngammas-1][3] = TMonteCarloEVNTChunk_data__PFSP[0][i][3];
       for(int k=0; k<3; k++) Pgamma[ngammas-1][k] = Pgamma[ngammas-1][3] *TMonteCarloEVNTChunk_data__PFSP[0][i][k];
       if(Pgamma[ngammas-1][3]>0.025) mg = mg + 1;
     }
      if(ipfs == 2 || ipfs==3) {//e+e-
         for(int j = i+1; j<TMonteCarloEVNTChunk_data__NFSP[0]; j++){
            int ipfs2 = TMonteCarloEVNTChunk_data__IPFS[0][j];
            if( (ipfs2==2 || ipfs2==3) && (ipfs!=ipfs2)){
               ngammas += 1;
               Pgamma[ngammas-1][3] = sqrt( pow(TMonteCarloEVNTChunk_data__PFSP[0][i][3],2)+me*me) +
                                      sqrt( pow(TMonteCarloEVNTChunk_data__PFSP[0][j][3],2)+me*me);
               for(int k=0; k<3; k++){
                  Pgamma[ngammas-1][k] = 
                    TMonteCarloEVNTChunk_data__PFSP[0][i][3] * TMonteCarloEVNTChunk_data__PFSP[0][i][k] +
                    TMonteCarloEVNTChunk_data__PFSP[0][j][3] * TMonteCarloEVNTChunk_data__PFSP[0][j][k];
               }
               if(Pgamma[ngammas-1][3]>0.025) mg = mg + 1;
            } // if(ipfs2)
         } // for(j)
      } // if(ipfs==2 || ipfs==3)
   }
   nnpi0 = 0;
   for(int i = 0; i<ngammas-1; i++){
      for(int j =0; j<ngammas;j++){
         mtemp = sqrt(pow(Pgamma[i][3]+Pgamma[j][3],2) - pow(Pgamma[i][0]+Pgamma[j][0],2) -
                      pow(Pgamma[i][1]+Pgamma[j][1],2) - pow(Pgamma[i][2]+Pgamma[j][2],2));
         if(abs(mtemp-mpi0) < 0.000001) {
            nnpi0 += 1;
         } // if(abs(mtemp-mpi0))
      } // for(j)
   } // for(i)
   npi0 = max(npi0,nnpi0);
   return npi0;
}

