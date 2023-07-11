#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <TH1F.h>
#include <TMath.h>
#include <fstream>
#include <iostream>
#include <TMath.h>
#include <TLegend.h>

void JustMeanPT() {

Float_t runnum, evnum, helicity, e_p, e_theta, e_phi, vz_e, p_p, p_theta, p_phi, vz_p, Q2, W, Mx, Mx2, x, y, z, xF, pT, zeta, eta, phi;

// Read in file
FILE *fp = fopen("/work/clas12/hvalenty/Total-Eloss.txt","r");//Open Eloss file

 TFile *hfile = hfile = TFile::Open("MCEloss.root","RECREATE");
 
    TTree *outTree = new TTree("T","kinematics tree");
    outTree->Branch("runnum",&runnum,"runnum/F");
    outTree->Branch("evnum",&evnum,"evnum/F");
    outTree->Branch("helicity", &helicity,"helicity/F");
    outTree->Branch("e_p",&e_p,"e_p/F");
    outTree->Branch("e_theta",&e_theta,"e_theta/F");
    outTree->Branch("e_phi",&e_phi,"e_phi/F");
    outTree->Branch("vz_e",&vz_e,"vz_e/F");
    outTree->Branch("p_p",&p_p,"p_p/F");
    outTree->Branch("p_theta",&p_theta,"p_theta/F");
    outTree->Branch("p_phi",&p_phi,"p_phi/F");
    outTree->Branch("vz_p",&vz_p,"vz_p/F");
    outTree->Branch("Q2",&Q2,"Q2/F");
    outTree->Branch("W",&W,"W/F");
    outTree->Branch("Mx",&Mx,"Mx/F");
    outTree->Branch("Mx2",&Mx2,"Mx2/F");
    outTree->Branch("x",&x,"x/F");
    outTree->Branch("y",&y,"y/F");
    outTree->Branch("z",&z,"z/F");
    outTree->Branch("xF",&xF,"xF/F");
    outTree->Branch("pT",&pT,"pT/F");
    outTree->Branch("zeta",&zeta,"zeta/F");
    outTree->Branch("eta",&eta,"eta/F");
    outTree->Branch("phi",&phi,"phi/F");

//"mc_ " are generated and the other are reconstructed
for (int k=0; k<22441322; k++) {//2441322 total events for ProtonFallinbending_MC_Eloss.txt
//for(int k=0; k<100000; k++){

    fscanf(fp, "%f %f %f %f %f %f %f ", &runnum, &evnum, &helicity, &e_p, &e_theta, &e_phi, &vz_e);

    fscanf(fp, " %f %f %f %f %f %f %f %f ", &p_p, &p_theta, &p_phi, &vz_p, &Q2, &W, &Mx, &Mx2);

    fscanf(fp, " %f %f %f %f %f %f %f %f ", &x, &y, &z, &xF, &pT, &zeta, &eta, &phi);


	outTree->Fill();

}//end file read

cout << "ELoss File Read Successful" << endl;

outTree->Write();//write Tree to file MC.root
fclose(fp);//close txt file
hfile->Write();//write the f 

///////////////////////////////////////////////////////////////
TCut NegHeli = ("helicity == -1");  // Negative helicity cut
TCut PosHeli = ("helicity == 1");  // Positive helicity cut
TCut Mxg1 = ("Mx>1.35&&abs(vz_e-vz_p)<7&&abs(vz_e+3)<5&&xF<0");            // Cut applied to all cuts, change depending on parameters

char cut[20];
strcpy(cut, "0.0<pT&&pT<0.1");   // First cut applied on variable of focus, change for different variable

float start = 0.1;      // Larger value of first cut made on target variable
float end = 0.4;        // Number one increment greater than the larger value of the final cut (getting around the for-loop being not inclusive)
float increment = 0.1;  // Size of cut

float mean1; // Create variables for printing
float mean2;
float mean3;
float mean4;
float mean5;
float mean6;
float mean7;
//////////////////////////////////////////////////////////////////
TH1F*h67 = new TH1F("h67","h67",20, 0, 6.4);
outTree->Draw("phi>>h67");
//////////////////////////////////////////////////////////////////
FILE *outputfile;
float ratio_mean;
float ratio_err;
float err1;
float err2;
float err3;
	
	outputfile = fopen("Means-Xaxis-PT.txt" , "wb");  // Text file to print to

	for (float j = start; j < end; j += increment) {  // Loop to run through the target variable cuts
		
        	TCut VARcut = (cut);
		//fprintf(outputfile, "%s \t", cut);

        	TH1F*h1 = new TH1F("h1","h1",20, 0, 1.5);  // Histogram for mean of generated pT
        	outTree->Draw("pT>>h1", VARcut);
		mean1 = h1->GetMean();
		err1 = h1->GetStdDev();



		ratio_mean = mean1 / mean2; // generated divided by reconstructed

		// Print into a file for plotting
		fprintf(outputfile, "%f \n", mean1); 
		//fprintf(outputfile, "%f \t", ratio_mean);
		//fprintf(outputfile, "%f \n", err1);
		

// Extra stuff down here
        	/*TH1F*h3 = new TH1F("h3","h3",20, 0, 1.2);  // Histogram for mean of Q2
        	outTree->Draw("ratio_Q2>>h3", VARcut);
		mean3 = h3->GetMean();
		fprintf(outputfile, "%f \t", mean3);

        	TH1F*h4 = new TH1F("h4","h4",20, 0, 1.2);  // Histogram for mean of x
        	outTree->Draw("ratio_x>>h4", VARcut);
		mean4 = h4->GetMean();
		fprintf(outputfile, "%f \t", mean4);

        	TH1F*h5 = new TH1F("h5","h5",20, 0, 1.2);  // Histogram for mean of xF
        	outTree->Draw("ratio_xF>>h5", VARcut);
		mean5 = h5->GetMean();
		fprintf(outputfile, "%f \t", mean5);

        	TH1F*h6 = new TH1F("h6","h6",20, 0, 1.2);  // Histogram for mean of zeta
        	outTree->Draw("ratio_zeta>>h6", VARcut);
		mean6 = h6->GetMean();
		fprintf(outputfile, "%f \t", mean6); 

        	TH1F*h7 = new TH1F("h7","h7",20, -0.5, 2.0);  // Histogram for mean of pT
        	outTree->Draw("mc_pT>>h7", VARcut);
		mean7 = h7->GetMean();
		fprintf(outputfile, "%f \n", mean7); */
	
		sprintf(cut, "%f<pT&&pT<%f", j, j + increment);
		printf("%s \n", cut);
		
	}
fclose(outputfile);

}




