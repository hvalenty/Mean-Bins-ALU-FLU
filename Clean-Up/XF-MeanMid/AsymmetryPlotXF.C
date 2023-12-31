#include <vector>
#include <string>
#include <TCanvas.h>
#include <TPad.h>
#include <TH1F.h>
#include <TF1.h>
#include <fstream>
#include <iostream>


void AsymmetryPlotXF()
{
double x, y, erry;

FILE * fp1 = fopen("ALU-Mean-Mid-XF.txt", "r");

int n=0;

gStyle->SetPadTopMargin(0.1);
gStyle->SetPadBottomMargin(0.15);
gStyle->SetPadLeftMargin(0.15);
gStyle->SetPadRightMargin(0.05);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c01 = new TCanvas("c01", "Asymmetry", 1000,700);
c01->Divide(1,1);
c01->Print("asymmetry.png[");
TGraphErrors*h1 = new TGraphErrors();

for(int k=0; k<43; k++){ 
fscanf(fp1, "%lf %lf %lf ", &x, &y, &erry);

n = h1->GetN();

h1->SetPoint(n, x, -y);
h1->SetPointError(n ,0, erry);

}

fclose(fp1);
////////////////////////////////////////////////////////////////////////////////
c01->cd(1);

h1->GetXaxis()->SetTitle("xF");
h1->GetXaxis()->SetTitleSize(0.09);
h1->GetXaxis()->SetLabelSize(0.06);
h1->GetXaxis()->SetTitleOffset(0.8);
h1->GetYaxis()->SetTitle("Asymmetry");
h1->GetYaxis()->SetTitleSize(0.09);
h1->GetYaxis()->SetLabelSize(0.06);
h1->GetYaxis()->SetTitleOffset(0.7);
//gStyle->SetMargin(0.01);
/*
h1->GetYaxis()->SetTitleOffset(0);
h1->GetYaxis()->SetTitleOffset(0);
*/


h1->SetLineWidth(1.5);
h1->SetMarkerColor(2);
h1->SetMarkerSize(1);
h1->SetMarkerStyle(20);

h1->Draw("AP");

////////////////////////////////////////////////////////////////////////////////


gPad->Modified();
gPad->Update();

//c01->Print("asymmetry.pdf");
c01->Print("ALU-Mean-Mid-XF.png");

}


