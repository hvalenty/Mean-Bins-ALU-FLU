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

void ProtonTreeXF(){


//void Proton(){
    Float_t runnum, evnum, helicity, e_p, e_theta, e_phi, vz_e, p_p, p_theta, p_phi, vz_p, Q2, W, Mx, Mx2, x, y, z, xF, pT, zeta, eta, phi, RICH_pid, RQ_prob, pi_prob, k_prob, pr_prob, chi2pid, beta;

 // FILE *fp = fopen("InBending-NoCuts.txt","r");
FILE *fp = fopen("/work/clas12/hvalenty/Total-Eloss.txt","r");
 //   FILE *fp = fopen("OutBending-NoCuts.txt","r");
    TFile *hfile = hfile = TFile::Open("PKplus2.root","RECREATE");

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

//for(int k=0; k<9777418; k++){
//for(int k=0; k<1000000; k++){
for(int k=0; k<167304297; k++){
//for(int k=0; k<50000000; k++){

    fscanf(fp, "%f %f %f %f %f %f %f ", &runnum, &evnum, &helicity, &e_p, &e_theta, &e_phi, &vz_e);

    fscanf(fp, " %f %f %f %f %f %f %f %f ", &p_p, &p_theta, &p_phi, &vz_p, &Q2, &W, &Mx, &Mx2);

    fscanf(fp, " %f %f %f %f %f %f %f %f ", &x, &y, &z, &xF, &pT, &zeta, &eta, &phi);

 

    outTree->Fill();

    }

outTree->Write();
fclose(fp);
hfile->Write();


///////////////////////////////////////////////////////////////
TCut NegHeli = ("helicity == -1");
TCut PosHeli = ("helicity == 1");
TCut Mxg1 = ("Mx>1.35&&abs(vz_e-vz_p)<7&&abs(vz_e+3)<5");



TCut pTT5a = ("-0.8<xF&&xF<-0.7");
TCut pTT6a = ("-0.7<xF&&xF<-0.6");
TCut pTT7a = ("-0.6<xF&&xF<-0.5");
TCut pTT8a = ("-0.5<xF&&xF<-0.4");
TCut pTT9a = ("-0.4<xF&&xF<-0.3");
TCut pTT10a = ("-0.3<xF&&xF<-0.2");
TCut pTT11a = ("-0.2<xF&&xF<-0.1");
TCut pTT12a = ("-0.1<xF&&xF<0.0"); //fixed bump
TCut pTT13a = ("0.0<xF&&xF<0.1");
TCut pTT14a = ("0.1<xF&&xF<0.2");
TCut pTT15a = ("0.2<xF&&xF<0.3");
TCut pTT16a = ("0.3<xF&&xF<0.4");
TCut pTT17a = ("0.4<xF&&xF<0.5);
TCut pTT18a = ("0.5<xF&&xF<0.6");
TCut pTT19a = ("0.6<xF&&xF<0.7");
TCut pTT20a = ("0.7<xF&&xF<0.8");
///////////////////////////////////////////////////////////////
TH1F*h89 = new TH1F("h89","h89",20, 0, 6.4);
outTree->Draw("phi>>h89");

///////////////////////////////////////////////////////////////
TCanvas*c09 = new TCanvas("c09", "PKplus", 1600,1100);
c09->Divide(2,1);
//c09->Print("FitMethodTreeBin9.pdf[");
TH1F*h17 = new TH1F("h17","h17",20, 0, 6.4);
c09->cd(1);
h17->GetXaxis()->SetTitle("[-0.80<x-Feynman<-0.75]");
h17->GetXaxis()->SetTitleSize(0.03);
h17->GetXaxis()->SetLabelSize(0.02);
h17->GetXaxis()->SetTitleOffset(1);
h17->GetYaxis()->SetTitle("Counts");
h17->GetYaxis()->SetTitleSize(0.035);
h17->GetYaxis()->SetLabelSize(0.02);
h17->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h17", PosHeli && pTT5a && Mxg1);
///////////////////////////////////////////////////////////////
TH1F*h18 = new TH1F("h18","h18",20, 0, 6.4);
c09->cd(2);
h18->GetXaxis()->SetTitle("[-0.80<x-Feynman<-0.75]");
h18->GetXaxis()->SetTitleSize(0.03);
h18->GetXaxis()->SetLabelSize(0.02);
h18->GetXaxis()->SetTitleOffset(1);
h18->GetYaxis()->SetTitle("Counts");
h18->GetYaxis()->SetTitleSize(0.035);
h18->GetYaxis()->SetLabelSize(0.02);
h18->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h18", NegHeli && pTT5a && Mxg1);


///////////////////////////////////////////////////////////////
TCanvas*c011 = new TCanvas("c011", "PKplus", 1600,1100);
c011->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h21 = new TH1F("h21","h21",20, 0, 6.4);
c011->cd(1);
h21->GetXaxis()->SetTitle("[-0.70<x-Feynman<-0.65]");
h21->GetXaxis()->SetTitleSize(0.03);
h21->GetXaxis()->SetLabelSize(0.02);
h21->GetXaxis()->SetTitleOffset(1);
h21->GetYaxis()->SetTitle("Counts");
h21->GetYaxis()->SetTitleSize(0.035);
h21->GetYaxis()->SetLabelSize(0.02);
h21->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h21", PosHeli && pTT6a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h22 = new TH1F("h22","h22",20, 0, 6.4);
c011->cd(2);
h22->GetXaxis()->SetTitle("[-0.70<x-Feynman<-0.65]");
h22->GetXaxis()->SetTitleSize(0.03);
h22->GetXaxis()->SetLabelSize(0.02);
h22->GetXaxis()->SetTitleOffset(1);
h22->GetYaxis()->SetTitle("Counts");
h22->GetYaxis()->SetTitleSize(0.035);
h22->GetYaxis()->SetLabelSize(0.02);
h22->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h22", NegHeli && pTT6a && Mxg1);

///////////////////////////////////////////////////////////////
TCanvas*c013 = new TCanvas("c013", "PKplus", 1600,1100);
c013->Divide(2,1);
//c014->Print("FitMethodTreeBin13.pdf[");
TH1F*h25 = new TH1F("h25","h25",20, 0, 6.4);
c013->cd(1);
h25->GetXaxis()->SetTitle("[-0.60<x-Feynman<-0.55]");
h25->GetXaxis()->SetTitleSize(0.03);
h25->GetXaxis()->SetLabelSize(0.02);
h25->GetXaxis()->SetTitleOffset(1);
h25->GetYaxis()->SetTitle("Counts");
h25->GetYaxis()->SetTitleSize(0.035);
h25->GetYaxis()->SetLabelSize(0.02);
h25->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h25", PosHeli && pTT7a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h26 = new TH1F("h26","h26",20, 0, 6.4);
c013->cd(2);
h26->GetXaxis()->SetTitle("[-0.60<x-Feynman<-0.55]");
h26->GetXaxis()->SetTitleSize(0.03);
h26->GetXaxis()->SetLabelSize(0.02);
h26->GetXaxis()->SetTitleOffset(1);
h26->GetYaxis()->SetTitle("Counts");
h26->GetYaxis()->SetTitleSize(0.035);
h26->GetYaxis()->SetLabelSize(0.02);
h26->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h26", NegHeli && pTT7a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c015 = new TCanvas("c015", "PKplus", 1600,1100);
c015->Divide(2,1);
//c016->Print("FitMethodTreeBin15.pdf[");
TH1F*h29 = new TH1F("h29","h29",20, 0, 6.4);
c015->cd(1);
h29->GetXaxis()->SetTitle("[-0.50<x-Feynman<-0.45]");
h29->GetXaxis()->SetTitleSize(0.03);
h29->GetXaxis()->SetLabelSize(0.02);
h29->GetXaxis()->SetTitleOffset(1);
h29->GetYaxis()->SetTitle("Counts");
h29->GetYaxis()->SetTitleSize(0.035);
h29->GetYaxis()->SetLabelSize(0.02);
h29->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h29", PosHeli && pTT8a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h30 = new TH1F("h30","h30",20, 0, 6.4);
c015->cd(2);
h30->GetXaxis()->SetTitle("[-0.50<x-Feynman<-0.45]");
h30->GetXaxis()->SetTitleSize(0.03);
h30->GetXaxis()->SetLabelSize(0.02);
h30->GetXaxis()->SetTitleOffset(1);
h30->GetYaxis()->SetTitle("Counts");
h30->GetYaxis()->SetTitleSize(0.035);
h30->GetYaxis()->SetLabelSize(0.02);
h30->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h30", NegHeli && pTT8a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c017 = new TCanvas("c017", "PKplus", 1600,1100);
c017->Divide(2,1);
//c018->Print("FitMethodTreeBin17.pdf[");
TH1F*h33 = new TH1F("h33","h33",20, 0, 6.4);
c017->cd(1);
h33->GetXaxis()->SetTitle("[-0.40<x-Feynman<-0.35]");
h33->GetXaxis()->SetTitleSize(0.03);
h33->GetXaxis()->SetLabelSize(0.02);
h33->GetXaxis()->SetTitleOffset(1);
h33->GetYaxis()->SetTitle("Counts");
h33->GetYaxis()->SetTitleSize(0.035);
h33->GetYaxis()->SetLabelSize(0.02);
h33->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h33", PosHeli && pTT9a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h34 = new TH1F("h34","h34",20, 0, 6.4);
c017->cd(2);
h34->GetXaxis()->SetTitle("[-0.40<x-Feynman<-0.35]");
h34->GetXaxis()->SetTitleSize(0.03);
h34->GetXaxis()->SetLabelSize(0.02);
h34->GetXaxis()->SetTitleOffset(1);
h34->GetYaxis()->SetTitle("Counts");
h34->GetYaxis()->SetTitleSize(0.035);
h34->GetYaxis()->SetLabelSize(0.02);
h34->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h34", NegHeli && pTT9a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c019 = new TCanvas("c019", "PKplus", 1600,1100);
c019->Divide(2,1);
//c020->Print("FitMethodTreeBin19.pdf[");
TH1F*h37 = new TH1F("h37","h37",20, 0, 6.4);
c019->cd(1);
h37->GetXaxis()->SetTitle("[-0.30<x-Feynman<-0.25]");
h37->GetXaxis()->SetTitleSize(0.03);
h37->GetXaxis()->SetLabelSize(0.02);
h37->GetXaxis()->SetTitleOffset(1);
h37->GetYaxis()->SetTitle("Counts");
h37->GetYaxis()->SetTitleSize(0.035);
h37->GetYaxis()->SetLabelSize(0.02);
h37->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h37", PosHeli && pTT10a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h38 = new TH1F("h38","h38",20, 0, 6.4);
c019->cd(2);
h38->GetXaxis()->SetTitle("[-0.30<x-Feynman<-0.25]");
h38->GetXaxis()->SetTitleSize(0.03);
h38->GetXaxis()->SetLabelSize(0.02);
h38->GetXaxis()->SetTitleOffset(1);
h38->GetYaxis()->SetTitle("Counts");
h38->GetYaxis()->SetTitleSize(0.035);
h38->GetYaxis()->SetLabelSize(0.02);
h38->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h38", NegHeli && pTT10a && Mxg1);




///////////////////////////////////////////////////////////////
TCanvas*c021 = new TCanvas("c021", "PKplus", 1600,1100);
c021->Divide(2,1);
//c022->Print("FitMethodTreeBin21.pdf[");
TH1F*h41 = new TH1F("h41","h41",20, 0, 6.4);
c021->cd(1);
h41->GetXaxis()->SetTitle("[-0.20<x-Feynman<-0.15]");
h41->GetXaxis()->SetTitleSize(0.03);
h41->GetXaxis()->SetLabelSize(0.02);
h41->GetXaxis()->SetTitleOffset(1);
h41->GetYaxis()->SetTitle("Counts");
h41->GetYaxis()->SetTitleSize(0.035);
h41->GetYaxis()->SetLabelSize(0.02);
h41->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h41", PosHeli && pTT11a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h42 = new TH1F("h42","h42",20, 0, 6.4);
c021->cd(2);
h42->GetXaxis()->SetTitle("[-0.20<x-Feynman<-0.15]");
h42->GetXaxis()->SetTitleSize(0.03);
h42->GetXaxis()->SetLabelSize(0.02);
h42->GetXaxis()->SetTitleOffset(1);
h42->GetYaxis()->SetTitle("Counts");
h42->GetYaxis()->SetTitleSize(0.035);
h42->GetYaxis()->SetLabelSize(0.02);
h42->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h42", NegHeli && pTT11a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c023 = new TCanvas("c023", "PKplus", 1600,1100);
c023->Divide(2,1);
//c08->Print("FitMethodTreeBin8.pdf[");
TH1F*h45 = new TH1F("h45","h45",20, 0, 6.4);
c023->cd(1);
h45->GetXaxis()->SetTitle("[-0.10<x-Feynman<-0.05]");
h45->GetXaxis()->SetTitleSize(0.03);
h45->GetXaxis()->SetLabelSize(0.02);
h45->GetXaxis()->SetTitleOffset(1);
h45->GetYaxis()->SetTitle("Counts");
h45->GetYaxis()->SetTitleSize(0.035);
h45->GetYaxis()->SetLabelSize(0.02);
h45->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h45", PosHeli && pTT12a && Mxg1);
///////////////////////////////////////////////////////////////
TH1F*h46 = new TH1F("h46","h46",20, 0, 6.4);
c023->cd(2);
h46->GetXaxis()->SetTitle("[-0.10<x-Feynman<-0.05]");
h46->GetXaxis()->SetTitleSize(0.03);
h46->GetXaxis()->SetLabelSize(0.02);
h46->GetXaxis()->SetTitleOffset(1);
h46->GetYaxis()->SetTitle("Counts");
h46->GetYaxis()->SetTitleSize(0.035);
h46->GetYaxis()->SetLabelSize(0.02);
h46->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h46", NegHeli && pTT12a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c025 = new TCanvas("c025", "PKplus", 1600,1100);
c025->Divide(2,1);
//c09->Print("FitMethodTreeBin9.pdf[");
TH1F*h49 = new TH1F("h49","h49",20, 0, 6.4);
c025->cd(1);
h49->GetXaxis()->SetTitle("[0<x-Feynman<0.05]");
h49->GetXaxis()->SetTitleSize(0.03);
h49->GetXaxis()->SetLabelSize(0.02);
h49->GetXaxis()->SetTitleOffset(1);
h49->GetYaxis()->SetTitle("Counts");
h49->GetYaxis()->SetTitleSize(0.035);
h49->GetYaxis()->SetLabelSize(0.02);
h49->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h49", PosHeli && pTT13a && Mxg1);
///////////////////////////////////////////////////////////////
TH1F*h50 = new TH1F("h50","h50",20, 0, 6.4);
c025->cd(2);
h50->GetXaxis()->SetTitle("[0<x-Feynman<0.05]");
h50->GetXaxis()->SetTitleSize(0.03);
h50->GetXaxis()->SetLabelSize(0.02);
h50->GetXaxis()->SetTitleOffset(1);
h50->GetYaxis()->SetTitle("Counts");
h50->GetYaxis()->SetTitleSize(0.035);
h50->GetYaxis()->SetLabelSize(0.02);
h50->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h50", NegHeli && pTT13a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c027 = new TCanvas("c027", "PKplus", 1600,1100);
c027->Divide(2,1);
//c09->Print("FitMethodTreeBin9.pdf[");
TH1F*h53 = new TH1F("h53","h53",20, 0, 6.4);
c027->cd(1);
h53->GetXaxis()->SetTitle("[0.10<x-Feynman<0.15]");
h53->GetXaxis()->SetTitleSize(0.03);
h53->GetXaxis()->SetLabelSize(0.02);
h53->GetXaxis()->SetTitleOffset(1);
h53->GetYaxis()->SetTitle("Counts");
h53->GetYaxis()->SetTitleSize(0.035);
h53->GetYaxis()->SetLabelSize(0.02);
h53->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h53", PosHeli && pTT14a && Mxg1);
///////////////////////////////////////////////////////////////
TH1F*h54 = new TH1F("h54","h54",20, 0, 6.4);
c027->cd(2);
h54->GetXaxis()->SetTitle("[0.10<x-Feynman<0.15]");
h54->GetXaxis()->SetTitleSize(0.03);
h54->GetXaxis()->SetLabelSize(0.02);
h54->GetXaxis()->SetTitleOffset(1);
h54->GetYaxis()->SetTitle("Counts");
h54->GetYaxis()->SetTitleSize(0.035);
h54->GetYaxis()->SetLabelSize(0.02);
h54->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h54", NegHeli && pTT14a && Mxg1);




///////////////////////////////////////////////////////////////
TCanvas*c029 = new TCanvas("c029", "PKplus", 1600,1100);
c029->Divide(2,1);
//c010->Print("FitMethodTreeBin10.pdf[");
TH1F*h57 = new TH1F("h57","h57",20, 0, 6.4);
c029->cd(1);
h57->GetXaxis()->SetTitle("[0.20<x-Feynman<0.25]");
h57->GetXaxis()->SetTitleSize(0.03);
h57->GetXaxis()->SetLabelSize(0.02);
h57->GetXaxis()->SetTitleOffset(1);
h57->GetYaxis()->SetTitle("Counts");
h57->GetYaxis()->SetTitleSize(0.035);
h57->GetYaxis()->SetLabelSize(0.02);
h57->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h57", PosHeli && pTT15a && Mxg1);
///////////////////////////////////////////////////////////////
TH1F*h58 = new TH1F("h58","h58",20, 0, 6.4);
c029->cd(2);
h58->GetXaxis()->SetTitle("[0.20<x-Feynman<0.25]");
h58->GetXaxis()->SetTitleSize(0.03);
h58->GetXaxis()->SetLabelSize(0.02);
h58->GetXaxis()->SetTitleOffset(1);
h58->GetYaxis()->SetTitle("Counts");
h58->GetYaxis()->SetTitleSize(0.035);
h58->GetYaxis()->SetLabelSize(0.02);
h58->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h58", NegHeli && pTT15a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c031 = new TCanvas("c031", "PKplus", 1600,1100);
c031->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h61 = new TH1F("h61","h61",20, 0, 6.4);
c031->cd(1);
h61->GetXaxis()->SetTitle("[0.30<x-Feynman<0.35]");
h61->GetXaxis()->SetTitleSize(0.03);
h61->GetXaxis()->SetLabelSize(0.02);
h61->GetXaxis()->SetTitleOffset(1);
h61->GetYaxis()->SetTitle("Counts");
h61->GetYaxis()->SetTitleSize(0.035);
h61->GetYaxis()->SetLabelSize(0.02);
h61->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h61", PosHeli && pTT16a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h62 = new TH1F("h62","h62",20, 0, 6.4);
c031->cd(2);
h62->GetXaxis()->SetTitle("[0.30<x-Feynman<0.35]");
h62->GetXaxis()->SetTitleSize(0.03);
h62->GetXaxis()->SetLabelSize(0.02);
h62->GetXaxis()->SetTitleOffset(1);
h62->GetYaxis()->SetTitle("Counts");
h62->GetYaxis()->SetTitleSize(0.035);
h62->GetYaxis()->SetLabelSize(0.02);
h62->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h62", NegHeli && pTT16a && Mxg1);



///////////////////////////////////////////////////////////////
TCanvas*c033 = new TCanvas("c033", "PKplus", 1600,1100);
c033->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h65 = new TH1F("h65","h65",20, 0, 6.4);
c033->cd(1);
h65->GetXaxis()->SetTitle("[0.40<x-Feynman<0.45]");
h65->GetXaxis()->SetTitleSize(0.03);
h65->GetXaxis()->SetLabelSize(0.02);
h65->GetXaxis()->SetTitleOffset(1);
h65->GetYaxis()->SetTitle("Counts");
h65->GetYaxis()->SetTitleSize(0.035);
h65->GetYaxis()->SetLabelSize(0.02);
h65->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h65", PosHeli && pTT17a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h66 = new TH1F("h66","h66",20, 0, 6.4);
c033->cd(2);
h66->GetXaxis()->SetTitle("[0.40<x-Feynman<0.45]");
h66->GetXaxis()->SetTitleSize(0.03);
h66->GetXaxis()->SetLabelSize(0.02);
h66->GetXaxis()->SetTitleOffset(1);
h66->GetYaxis()->SetTitle("Counts");
h66->GetYaxis()->SetTitleSize(0.035);
h66->GetYaxis()->SetLabelSize(0.02);
h66->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h66", NegHeli && pTT17a && Mxg1);




///////////////////////////////////////////////////////////////
TCanvas*c035 = new TCanvas("c035", "PKplus", 1600,1100);
c035->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h69 = new TH1F("h69","h69",20, 0, 6.4);
c035->cd(1);
h69->GetXaxis()->SetTitle("[0.50<x-Feynman<0.55]");
h69->GetXaxis()->SetTitleSize(0.03);
h69->GetXaxis()->SetLabelSize(0.02);
h69->GetXaxis()->SetTitleOffset(1);
h69->GetYaxis()->SetTitle("Counts");
h69->GetYaxis()->SetTitleSize(0.035);
h69->GetYaxis()->SetLabelSize(0.02);
h69->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h69", PosHeli && pTT18a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h70 = new TH1F("h70","h70",20, 0, 6.4);
c035->cd(2);
h70->GetXaxis()->SetTitle("[0.50<x-Feynman<0.55]");
h70->GetXaxis()->SetTitleSize(0.03);
h70->GetXaxis()->SetLabelSize(0.02);
h70->GetXaxis()->SetTitleOffset(1);
h70->GetYaxis()->SetTitle("Counts");
h70->GetYaxis()->SetTitleSize(0.035);
h70->GetYaxis()->SetLabelSize(0.02);
h70->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h70", NegHeli && pTT18a && Mxg1);




///////////////////////////////////////////////////////////////
TCanvas*c037 = new TCanvas("c73", "PKplus", 1600,1100);
c037->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h73 = new TH1F("h73","h73",20, 0, 6.4);
c037->cd(1);
h73->GetXaxis()->SetTitle("[0.60<x-Feynman<0.65]");
h73->GetXaxis()->SetTitleSize(0.03);
h73->GetXaxis()->SetLabelSize(0.02);
h73->GetXaxis()->SetTitleOffset(1);
h73->GetYaxis()->SetTitle("Counts");
h73->GetYaxis()->SetTitleSize(0.035);
h73->GetYaxis()->SetLabelSize(0.02);
h73->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h73", PosHeli && pTT19a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h74 = new TH1F("h74","h74",20, 0, 6.4);
c037->cd(2);
h74->GetXaxis()->SetTitle("[0.60<x-Feynman<0.65]");
h74->GetXaxis()->SetTitleSize(0.03);
h74->GetXaxis()->SetLabelSize(0.02);
h74->GetXaxis()->SetTitleOffset(1);
h74->GetYaxis()->SetTitle("Counts");
h74->GetYaxis()->SetTitleSize(0.035);
h74->GetYaxis()->SetLabelSize(0.02);
h74->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h74", NegHeli && pTT19a && Mxg1);




///////////////////////////////////////////////////////////////
TCanvas*c039 = new TCanvas("c039", "PKplus", 1600,1100);
c039->Divide(2,1);
//c011->Print("FitMethodTreeBin11.pdf[");
TH1F*h77 = new TH1F("h77","h77",20, 0, 6.4);
c039->cd(1);
h77->GetXaxis()->SetTitle("[0.70<x-Feynman<0.75]");
h77->GetXaxis()->SetTitleSize(0.03);
h77->GetXaxis()->SetLabelSize(0.02);
h77->GetXaxis()->SetTitleOffset(1);
h77->GetYaxis()->SetTitle("Counts");
h77->GetYaxis()->SetTitleSize(0.035);
h77->GetYaxis()->SetLabelSize(0.02);
h77->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h77", PosHeli && pTT20a && Mxg1);
///////////////////////////////////////////////////////////////

TH1F*h78 = new TH1F("h78","h78",20, 0, 6.4);
c039->cd(2);
h78->GetXaxis()->SetTitle("[0.70<x-Feynman<0.75]");
h78->GetXaxis()->SetTitleSize(0.03);
h78->GetXaxis()->SetLabelSize(0.02);
h78->GetXaxis()->SetTitleOffset(1);
h78->GetYaxis()->SetTitle("Counts");
h78->GetYaxis()->SetTitleSize(0.035);
h78->GetYaxis()->SetLabelSize(0.02);
h78->GetYaxis()->SetTitleOffset(0.9);
outTree->Draw("phi>>h78", NegHeli && pTT20a && Mxg1);










///////////////////////////////////////////////////////////////
ofstream outputfile39("FitMethodReBin23xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile39 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h77->GetBinContent(i) << "\t" << h78->GetBinContent(i) << endl; }
outputfile39.close();


///////////////////////////////////////////////////////////////
ofstream outputfile37("FitMethodReBin22xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile37 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h73->GetBinContent(i) << "\t" << h74->GetBinContent(i) << endl; }
outputfile37.close();


///////////////////////////////////////////////////////////////
ofstream outputfile35("FitMethodReBin21xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile35 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h69->GetBinContent(i) << "\t" << h70->GetBinContent(i) << endl; }
outputfile35.close();



///////////////////////////////////////////////////////////////
ofstream outputfile33("FitMethodReBin20xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile33 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h65->GetBinContent(i) << "\t" << h66->GetBinContent(i) << endl; }
outputfile33.close();


///////////////////////////////////////////////////////////////
ofstream outputfile31("FitMethodReBin19xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile31 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h61->GetBinContent(i) << "\t" << h62->GetBinContent(i) << endl; }
outputfile31.close();


///////////////////////////////////////////////////////////////
ofstream outputfile29("FitMethodReBin18xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile29 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h57->GetBinContent(i) << "\t" << h58->GetBinContent(i) << endl; }
outputfile29.close();


///////////////////////////////////////////////////////////////
ofstream outputfile27("FitMethodReBin17xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile27 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h53->GetBinContent(i) << "\t" << h54->GetBinContent(i) << endl; }
outputfile27.close();



///////////////////////////////////////////////////////////////
ofstream outputfile25("FitMethodReBin16xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile25 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h49->GetBinContent(i) << "\t" << h50->GetBinContent(i) << endl; }
outputfile25.close();


///////////////////////////////////////////////////////////////
ofstream outputfile23("FitMethodReBin15xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile23 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h45->GetBinContent(i) << "\t" << h46->GetBinContent(i) << endl; }
outputfile23.close();


///////////////////////////////////////////////////////////////
ofstream outputfile21("FitMethodReBin14xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile21 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h41->GetBinContent(i) << "\t" << h42->GetBinContent(i) << endl; }
outputfile21.close();



///////////////////////////////////////////////////////////////
ofstream outputfile19("FitMethodReBin13xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile19 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h37->GetBinContent(i) << "\t" << h38->GetBinContent(i) << endl; }
outputfile19.close();



///////////////////////////////////////////////////////////////
ofstream outputfile17("FitMethodReBin12xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile17 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h33->GetBinContent(i) << "\t" << h34->GetBinContent(i) << endl; }
outputfile17.close();


///////////////////////////////////////////////////////////////
ofstream outputfile15("FitMethodReBin11xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile15 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h29->GetBinContent(i) << "\t" << h30->GetBinContent(i) << endl; }
outputfile15.close();


///////////////////////////////////////////////////////////////
ofstream outputfile13("FitMethodReBin10xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile13 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h25->GetBinContent(i) << "\t" << h26->GetBinContent(i) << endl; }
outputfile13.close();


///////////////////////////////////////////////////////////////
ofstream outputfile11("FitMethodReBin09xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile11 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h21->GetBinContent(i) << "\t" << h22->GetBinContent(i) << endl; }
outputfile11.close();



///////////////////////////////////////////////////////////////
ofstream outputfile9("FitMethodReBin08xF.txt");
//int N = h1->GetNbinsX() + 1; 
for(int i=0; i<N; ++i){
outputfile9 << "\t" << h89->GetBinLowEdge(i)+h89->GetBinWidth(i)/2  << "\t" << h17->GetBinContent(i) << "\t" << h18->GetBinContent(i) << endl; }
outputfile9.close();

///////////////////////////////////////////////////////////////


}

