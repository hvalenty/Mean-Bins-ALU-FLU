#include <vector>
#include <string>
#include <TCanvas.h>
#include <TPad.h>
#include <TH1F.h>
#include <TF1.h>
#include <fstream>
#include <iostream>



void FitMethodXF()
{
double phi1, asym1, err1, phi2, asym2, err2, phi3, asym3, err3, phi4, asym4, err4, phi5, asym5, err5, phi6, asym6, err6, phi7, asym7, err7, phi8, asym8, err8, phi9, asym9, err9, phi10, asym10, err10, phi11, asym11, err11, phi12, asym12, err12, phi13, asym13, err13, phi14, asym14, err14, phi15, asym15, err15, phi16, asym16, err16, phi17, asym17, err17, phi18, asym18, err18, phi19, asym19, err19, phi20, asym20, err20, phi21, asym21, err21, phi22, asym22, err22, phi23, asym23, err23, phi24, asym24, err24, phi25, asym25, err25, phi26, asym26, err26, phi27, asym27, err27, phi28, asym28, err28, phi29, asym29, err29, phi30, asym30, err30, phi31, asym31, err31, phi32, asym32, err32, phi33, asym33, err33, phi34, asym34, err34, phi35, asym35, err35, phi36, asym36, err36, phi37, asym37, err37, phi38, asym38, err38, phi39, asym39, err39, phi40, asym40, err40, phi41, asym41, err41, phi42, asym42, err42, phi43, asym43, err43, phi44, asym44, err44;


FILE * fp8 = fopen("bin8AA-OutxF.txt", "r"); 
FILE * fp9 = fopen("bin9AA-OutxF.txt", "r"); 
FILE * fp10 = fopen("bin10AA-OutxF.txt", "r");
FILE * fp11 = fopen("bin11AA-OutxF.txt", "r");
FILE * fp12 = fopen("bin12AA-OutxF.txt", "r"); 
FILE * fp13 = fopen("bin13AA-OutxF.txt", "r"); 
FILE * fp14 = fopen("bin14AA-OutxF.txt", "r"); 
FILE * fp15 = fopen("bin15AA-OutxF.txt", "r"); 
FILE * fp16 = fopen("bin16AA-OutxF.txt", "r"); 
FILE * fp17 = fopen("bin17AA-OutxF.txt", "r"); 
FILE * fp18 = fopen("bin18AA-OutxF.txt", "r"); 
FILE * fp19 = fopen("bin19AA-OutxF.txt", "r");
FILE * fp20 = fopen("bin20AA-OutxF.txt", "r");
FILE * fp21 = fopen("bin21AA-OutxF.txt", "r");
FILE * fp22 = fopen("bin22AA-OutxF.txt", "r");
FILE * fp23 = fopen("bin23AA-OutxF.txt", "r");


int n1=0;
int m1=0;
int o1=0;
int p1=0;
int q1=0;
int r1=0;
int s1=0;
int t1=0;
int u1=0;
int v1=0;
int w1=0;
int n2=0;
int m2=0;
int o2=0;
int p2=0;
int q2=0;
int r2=0;
int s2=0;
int t2=0;
int u2=0;
int v2=0;
int w2=0;
int n3=0;
int m3=0;
int o3=0;
int p3=0;
int q3=0;


//gStyle->SetLineWidth(2);

gStyle->SetPadTopMargin(0.1);
gStyle->SetPadBottomMargin(0.15);
gStyle->SetPadLeftMargin(0.2);
gStyle->SetPadRightMargin(0.05);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c08 = new TCanvas("c08", "Bin 8 Asymm", 1600,1000);
c08->Divide(1,1);
//c08->Print("FitMethod2Bin8.pdf[");
TGraphErrors*h8 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp8, "%lf %lf %lf ", &phi8, &asym8, &err8);

t1 = h8->GetN();

h8->SetPoint(t1, phi8, asym8);
h8->SetPointError(t1 ,0, err8);

}
fclose(fp8);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c09 = new TCanvas("c09", "Bin 9 Asymm", 1600,1000);
c09->Divide(1,1);
//c09->Print("FitMethod2Bin9.pdf[");
TGraphErrors*h9 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp9, "%lf %lf %lf ", &phi9, &asym9, &err9);

u1 = h9->GetN();

h9->SetPoint(u1, phi9, asym9);
h9->SetPointError(u1 ,0, err9);

}
fclose(fp9);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c010 = new TCanvas("c010", "Bin 10 Asymm", 1600,1000);
c010->Divide(1,1);
//c010->Print("FitMethod2Bin10.pdf[");
TGraphErrors*h10 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp10, "%lf %lf %lf ", &phi10, &asym10, &err10);

v1 = h10->GetN();

h10->SetPoint(v1, phi10, asym10);
h10->SetPointError(v1 ,0, err10);

}
fclose(fp10);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c011 = new TCanvas("c011", "Bin 11 Asymm", 1600,1000);
c011->Divide(1,1);
//c011->Print("FitMethod2Bin11.pdf[");
TGraphErrors*h11 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp11, "%lf %lf %lf ", &phi11, &asym11, &err11);

w1 = h11->GetN();

h11->SetPoint(w1, phi11, asym11);
h11->SetPointError(w1 ,0, err11);

}
fclose(fp11);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c012 = new TCanvas("c012", "Bin 12 Asymm", 1600,1000);
c012->Divide(1,1);
//c01->Print("FitMethod2Bin1.pdf[");
TGraphErrors*h12 = new TGraphErrors();

for(int k=0; k<22; k++){ 
fscanf(fp12, "%lf %lf %lf ", &phi12, &asym12, &err12);

n2 = h12->GetN();

h12->SetPoint(n2, phi12, asym12);
h12->SetPointError(n2 ,0, err12);

}
fclose(fp12);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c013 = new TCanvas("c013", "Bin 13 Asymm", 1600,1000);
c013->Divide(1,1);
//c02->Print("FitMethod2Bin2.pdf[");
TGraphErrors*h13 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp13, "%lf %lf %lf ", &phi13, &asym13, &err13);

m2 = h13->GetN();

h13->SetPoint(m2, phi13, asym13);
h13->SetPointError(m2 ,0, err13);

}
fclose(fp13);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c014 = new TCanvas("c014", "Bin 14 Asymm", 1600,1000);
c014->Divide(1,1);
//c03->Print("FitMethod2Bin3.pdf[");
TGraphErrors*h14 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp14, "%lf %lf %lf ", &phi14, &asym14, &err14);

o2 = h14->GetN();

h14->SetPoint(o2, phi14, asym14);
h14->SetPointError(o2 ,0, err14);

}
fclose(fp14);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c015 = new TCanvas("c015", "Bin 15 Asymm", 1600,1000);
c015->Divide(1,1);
//c04->Print("FitMethod2Bin4.pdf[");
TGraphErrors*h15 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp15, "%lf %lf %lf ", &phi15, &asym15, &err15);

p2 = h15->GetN();

h15->SetPoint(p2, phi15, asym15);
h15->SetPointError(p2 ,0, err15);

}
fclose(fp15);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c016 = new TCanvas("c016", "Bin 16 Asymm", 1600,1000);
c016->Divide(1,1);
//c05->Print("FitMethod2Bin5.pdf[");
TGraphErrors*h16 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp16, "%lf %lf %lf ", &phi16, &asym16, &err16);

q2 = h16->GetN();

h16->SetPoint(q2, phi16, asym16);
h16->SetPointError(q2 ,0, err16);

}
fclose(fp16);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c017 = new TCanvas("c017", "Bin 17 Asymm", 1600,1000);
c017->Divide(1,1);
//c06->Print("FitMethod2Bin6.pdf[");
TGraphErrors*h17 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp17, "%lf %lf %lf ", &phi17, &asym17, &err17);

r2 = h17->GetN();

h17->SetPoint(r2, phi17, asym17);
h17->SetPointError(r2 ,0, err17);

}
fclose(fp17);

////////////////////////////////////////////////////////////////////////////////
TCanvas*c018 = new TCanvas("c018", "Bin 18 Asymm", 1600,1000);
c018->Divide(1,1);
//c07->Print("FitMethod2Bin7.pdf[");
TGraphErrors*h18 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp18, "%lf %lf %lf ", &phi18, &asym18, &err18);

s2 = h18->GetN();

h18->SetPoint(s2, phi18, asym18);
h18->SetPointError(s2 ,0, err18);

}
fclose(fp18);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c019 = new TCanvas("c019", "Bin 19 Asymm", 1600,1000);
c019->Divide(1,1);
//c08->Print("FitMethod2Bin8.pdf[");
TGraphErrors*h19 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp19, "%lf %lf %lf ", &phi19, &asym19, &err19);

t2 = h19->GetN();

h19->SetPoint(t2, phi19, asym19);
h19->SetPointError(t2 ,0, err19);

}
fclose(fp19);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c020 = new TCanvas("c020", "Bin 20 Asymm", 1600,1000);
c020->Divide(1,1);
//c09->Print("FitMethod2Bin9.pdf[");
TGraphErrors*h20 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp20, "%lf %lf %lf ", &phi20, &asym20, &err20);

u2 = h20->GetN();

h20->SetPoint(u2, phi20, asym20);
h20->SetPointError(u2 ,0, err20);

}
fclose(fp20);


////////////////////////////////////////////////////////////////////////////////
TCanvas*c021 = new TCanvas("c021", "Bin 21 Asymm", 1600,1000);
c021->Divide(1,1);
//c09->Print("FitMethod2Bin9.pdf[");
TGraphErrors*h21 = new TGraphErrors(); 

for(int k=0; k<22; k++){ 
fscanf(fp21, "%lf %lf %lf ", &phi21, &asym21, &err21);

v2 = h21->GetN();

h21->SetPoint(v2, phi21, asym21);
h21->SetPointError(v2 ,0, err21);

}
fclose(fp21);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c022 = new TCanvas("c022", "Bin 22 Asymm", 1600,1000);
c022->Divide(1,1);
//c09->Print("FitMethod2Bin9.pdf[");
TGraphErrors*h22 = new TGraphErrors(); 

for(int k=0; k<44; k++){ 
fscanf(fp22, "%lf %lf %lf ", &phi22, &asym22, &err22);

w2 = h22->GetN();

h22->SetPoint(w2, phi22, asym22);
h22->SetPointError(w2 ,0, err22);

}
fclose(fp22);
////////////////////////////////////////////////////////////////////////////////
TCanvas*c023 = new TCanvas("c023", "Bin 23 Asymm", 1600,1000);
c023->Divide(1,1);
//c09->Print("FitMethod2Bin9.pdf[");
TGraphErrors*h23 = new TGraphErrors(); 

for(int k=0; k<44; k++){ 
fscanf(fp23, "%lf %lf %lf ", &phi23, &asym23, &err23);

n3 = h23->GetN();

h23->SetPoint(n3, phi23, asym23);
h23->SetPointError(n3 ,0, err23);

}
fclose(fp23);

/////////////////////////////////////////////////////////////////////////////////


TF1 *f2= new TF1("f2","[0]+([1]*sin(x))+([2]*sin(2*x))",0,6.4); 

f2->SetLineWidth(5);

////////////////////////////////////////////////////////////////////////////////
c08->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h8->GetXaxis()->SetTitle(" Phi");
h8->GetXaxis()->SetTitleSize(0.07);
h8->GetXaxis()->SetLabelSize(0.05);
h8->GetXaxis()->SetTitleOffset(1);
h8->GetYaxis()->SetTitle("Asymmetry  (-0.85<pT<-0.80)");
h8->GetYaxis()->SetTitleSize(0.07);
h8->GetYaxis()->SetLabelSize(0.035);
h8->SetLineWidth(2);
h8->SetMaximum(0.09);
h8->SetMinimum(-0.09);
h8->Fit("f2");
h8->SetLineWidth(2);
h8->SetMarkerStyle(20);
h8->SetMarkerColor(4);
h8->SetMarkerSize(3);
h8->SetMinimum(-0.09);
cout << "Chi2: " << h8->GetFunction("f2")->GetChisquare(); 
cout << " Reduced Chi2: " << h8->GetFunction("f2")->GetChisquare()/(17); 
h8->Draw("AP");
////////////////////////////////////////////////////////////////////////////////
c09->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h9->GetXaxis()->SetTitle(" Phi");
h9->GetXaxis()->SetTitleSize(0.07);
h9->GetXaxis()->SetLabelSize(0.05);
h9->GetXaxis()->SetTitleOffset(1);
h9->GetYaxis()->SetTitle("Asymmetry  (-0.80<pT<-0.75)");
h9->GetYaxis()->SetTitleSize(0.07);
h9->GetYaxis()->SetLabelSize(0.035);

h9->SetLineWidth(2);
h9->SetMaximum(0.09);
h9->Fit("f2");
h9->SetLineWidth(2);
h9->SetMarkerStyle(20);
h9->SetMarkerColor(4);
h9->SetMarkerSize(3);
cout << "Chi2: " << h9->GetFunction("f2")->GetChisquare(); 
cout << " Reduced Chi2: " << h9->GetFunction("f2")->GetChisquare()/(17); 
h9->SetMinimum(-0.09);
h9->Draw("AP");

////////////////////////////////////////////////////////////////////////////////
c010->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h10->GetXaxis()->SetTitle(" Phi");
h10->GetXaxis()->SetTitleSize(0.07);
h10->GetXaxis()->SetLabelSize(0.05);
h10->GetXaxis()->SetTitleOffset(1);
h10->GetYaxis()->SetTitle("Asymmetry  (-0.75<pT<-0.70)");
h10->GetYaxis()->SetTitleSize(0.07);
h10->GetYaxis()->SetLabelSize(0.035);
h10->SetLineWidth(2);
h10->SetMaximum(0.09);
h10->Fit("f2");
h10->SetLineWidth(2);
f2->SetLineWidth(5);
h10->SetMarkerStyle(20);
h10->SetMarkerColor(4);
h10->SetMarkerSize(3);
cout << "Chi2: " << h10->GetFunction("f2")->GetChisquare(); 
cout << " Reduced Chi2: " << h10->GetFunction("f2")->GetChisquare()/(17);
h10->SetMinimum(-0.09); 
h10->Draw("AP");

////////////////////////////////////////////////////////////////////////////////
c011->cd(1);
gStyle->SetOptStat(0);
gStyle->SetOptFit(); 
h11->GetXaxis()->SetTitle(" Phi");
h11->GetXaxis()->SetTitleSize(0.07);
h11->GetXaxis()->SetLabelSize(0.05);
h11->GetXaxis()->SetTitleOffset(1);
h11->GetYaxis()->SetTitle("Asymmetry  (-0.70<pT<-0.65)");
h11->GetYaxis()->SetTitleSize(0.07);
h11->GetYaxis()->SetLabelSize(0.035);
h11->SetLineWidth(2);
h11->SetMaximum(0.09);
h11->Fit("f2");
f2->SetLineWidth(5);
h11->SetMarkerStyle(20);
h11->SetMarkerColor(4);
h11->SetMarkerSize(3);
cout << "Chi2: " << h11->GetFunction("f2")->GetChisquare(); 
cout << " Reduced Chi2: " << h11->GetFunction("f2")->GetChisquare()/(17); 
h11->SetMinimum(-0.09);
h11->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c012->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h12->GetXaxis()->SetTitle(" Phi");
    h12->GetXaxis()->SetTitleSize(0.07);
    h12->GetXaxis()->SetLabelSize(0.05);
    h12->GetXaxis()->SetTitleOffset(1);
    h12->GetYaxis()->SetTitle("Asymmetry  (-0.65<pT<-0.60)");
    h12->GetYaxis()->SetTitleSize(0.07);
    h12->GetYaxis()->SetLabelSize(0.035);
    h12->SetLineWidth(2);
    h12->SetMaximum(0.09);
    h12->Fit("f2");
    f2->SetLineWidth(5);
    h12->SetMarkerStyle(20);
    h12->SetMarkerColor(4);
    h12->SetMarkerSize(3);
    cout << "Chi2: " << h12->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h12->GetFunction("f2")->GetChisquare()/(17);
    h12->SetMinimum(-0.09);
    h12->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c013->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h13->GetXaxis()->SetTitle(" Phi");
    h13->GetXaxis()->SetTitleSize(0.07);
    h13->GetXaxis()->SetLabelSize(0.05);
    h13->GetXaxis()->SetTitleOffset(1);
    h13->GetYaxis()->SetTitle("Asymmetry  (-0.60<pT<-0.55)");
    h13->GetYaxis()->SetTitleSize(0.07);
    h13->GetYaxis()->SetLabelSize(0.035);
    h13->SetLineWidth(2);
    h13->SetMaximum(0.09);
    h13->Fit("f2");
    f2->SetLineWidth(5);
    h13->SetMarkerStyle(20);
    h13->SetMarkerColor(4);
    h13->SetMarkerSize(3);
    cout << "Chi2: " << h13->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h13->GetFunction("f2")->GetChisquare()/(17);
    h13->SetMinimum(-0.09);
    h13->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c014->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h14->GetXaxis()->SetTitle(" Phi");
    h14->GetXaxis()->SetTitleSize(0.07);
    h14->GetXaxis()->SetLabelSize(0.05);
    h14->GetXaxis()->SetTitleOffset(1);
    h14->GetYaxis()->SetTitle("Asymmetry  (-0.55<pT<-0.50)");
    h14->GetYaxis()->SetTitleSize(0.07);
    h14->GetYaxis()->SetLabelSize(0.035);
    h14->SetLineWidth(2);
    h14->SetMaximum(0.09);
    h14->Fit("f2");
    f2->SetLineWidth(5);
    h14->SetMarkerStyle(20);
    h14->SetMarkerColor(4);
    h14->SetMarkerSize(3);
    cout << "Chi2: " << h14->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h14->GetFunction("f2")->GetChisquare()/(17);
    h14->SetMinimum(-0.09);
    h14->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c015->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h15->GetXaxis()->SetTitle(" Phi");
    h15->GetXaxis()->SetTitleSize(0.07);
    h15->GetXaxis()->SetLabelSize(0.05);
    h15->GetXaxis()->SetTitleOffset(1);
    h15->GetYaxis()->SetTitle("Asymmetry  (-0.50<pT<-0.45)");
    h15->GetYaxis()->SetTitleSize(0.07);
    h15->GetYaxis()->SetLabelSize(0.035);
    h15->SetLineWidth(2);
    h15->SetMaximum(0.09);
    h15->Fit("f2");
    f2->SetLineWidth(5);
    h15->SetMarkerStyle(20);
    h15->SetMarkerColor(4);
    h15->SetMarkerSize(3);
    cout << "Chi2: " << h15->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h15->GetFunction("f2")->GetChisquare()/(17);
    h15->SetMinimum(-0.09);
    h15->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c016->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h16->GetXaxis()->SetTitle(" Phi");
    h16->GetXaxis()->SetTitleSize(0.07);
    h16->GetXaxis()->SetLabelSize(0.05);
    h16->GetXaxis()->SetTitleOffset(1);
    h16->GetYaxis()->SetTitle("Asymmetry  (-0.45<pT<-0.40)");
    h16->GetYaxis()->SetTitleSize(0.07);
    h16->GetYaxis()->SetLabelSize(0.035);
    h16->SetLineWidth(2);
    h16->SetMaximum(0.09);
    h16->Fit("f2");
    f2->SetLineWidth(5);
    h16->SetMarkerStyle(20);
    h16->SetMarkerColor(4);
    h16->SetMarkerSize(3);
    cout << "Chi2: " << h16->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h16->GetFunction("f2")->GetChisquare()/(17);
    h16->SetMinimum(-0.09);
    h16->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c017->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h17->GetXaxis()->SetTitle(" Phi");
    h17->GetXaxis()->SetTitleSize(0.07);
    h17->GetXaxis()->SetLabelSize(0.05);
    h17->GetXaxis()->SetTitleOffset(1);
    h17->GetYaxis()->SetTitle("Asymmetry  (-0.40<pT<-0.35)");
    h17->GetYaxis()->SetTitleSize(0.07);
    h17->GetYaxis()->SetLabelSize(0.035);
    h17->SetLineWidth(2);
    h17->SetMaximum(0.09);
    h17->Fit("f2");
    f2->SetLineWidth(5);
    h17->SetMarkerStyle(20);
    h17->SetMarkerColor(4);
    h17->SetMarkerSize(3);
    cout << "Chi2: " << h17->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h17->GetFunction("f2")->GetChisquare()/(17);
    h17->SetMinimum(-0.09);
    h17->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c018->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h18->GetXaxis()->SetTitle(" Phi");
    h18->GetXaxis()->SetTitleSize(0.07);
    h18->GetXaxis()->SetLabelSize(0.05);
    h18->GetXaxis()->SetTitleOffset(1);
    h18->GetYaxis()->SetTitle("Asymmetry  (-0.35<pT<-0.30)");
    h18->GetYaxis()->SetTitleSize(0.07);
    h18->GetYaxis()->SetLabelSize(0.035);
    h18->SetLineWidth(2);
    h18->SetMaximum(0.09);
    h18->Fit("f2");
    f2->SetLineWidth(5);
    h18->SetMarkerStyle(20);
    h18->SetMarkerColor(4);
    h18->SetMarkerSize(3);
    cout << "Chi2: " << h18->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h18->GetFunction("f2")->GetChisquare()/(17);
    h18->SetMinimum(-0.09);
    h18->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c019->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h19->GetXaxis()->SetTitle(" Phi");
    h19->GetXaxis()->SetTitleSize(0.07);
    h19->GetXaxis()->SetLabelSize(0.05);
    h19->GetXaxis()->SetTitleOffset(1);
    h19->GetYaxis()->SetTitle("Asymmetry  (-0.30<pT<-0.25)");
    h19->GetYaxis()->SetTitleSize(0.07);
    h19->GetYaxis()->SetLabelSize(0.035);
    h19->SetLineWidth(2);
    h19->SetMaximum(0.09);
    h19->Fit("f2");
    f2->SetLineWidth(5);
    h19->SetMarkerStyle(20);
    h19->SetMarkerColor(4);
    h19->SetMarkerSize(3);
    cout << "Chi2: " << h19->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h19->GetFunction("f2")->GetChisquare()/(17);
    h19->SetMinimum(-0.09);
    h19->Draw("AP");


    ////////////////////////////////////////////////////////////////////////////////
    c020->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h20->GetXaxis()->SetTitle(" Phi");
    h20->GetXaxis()->SetTitleSize(0.07);
    h20->GetXaxis()->SetLabelSize(0.05);
    h20->GetXaxis()->SetTitleOffset(1);
    h20->GetYaxis()->SetTitle("Asymmetry  (-0.25<pT<-0.20)");
    h20->GetYaxis()->SetTitleSize(0.07);
    h20->GetYaxis()->SetLabelSize(0.035);
    h20->SetLineWidth(2);
    h20->SetMaximum(0.09);
    h20->Fit("f2");
    f2->SetLineWidth(5);
    h20->SetMarkerStyle(20);
    h20->SetMarkerColor(4);
    h20->SetMarkerSize(3);
    cout << "Chi2: " << h20->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h20->GetFunction("f2")->GetChisquare()/(17);
    h20->SetMinimum(-0.09);
    h20->Draw("AP");


    ////////////////////////////////////////////////////////////////////////////////
    c021->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h21->GetXaxis()->SetTitle(" Phi");
    h21->GetXaxis()->SetTitleSize(0.07);
    h21->GetXaxis()->SetLabelSize(0.05);
    h21->GetXaxis()->SetTitleOffset(1);
    h21->GetYaxis()->SetTitle("Asymmetry  (-0.20<pT<-0.15)");
    h21->GetYaxis()->SetTitleSize(0.07);
    h21->GetYaxis()->SetLabelSize(0.035);
    h21->SetLineWidth(2);
    h21->SetMaximum(0.09);
    h21->Fit("f2");
    f2->SetLineWidth(5);
    h21->SetMarkerStyle(20);
    h21->SetMarkerColor(4);
    h21->SetMarkerSize(3);
    cout << "Chi2: " << h21->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h21->GetFunction("f2")->GetChisquare()/(17);
    h21->SetMinimum(-0.09);
    h21->Draw("AP");
    ////////////////////////////////////////////////////////////////////////////////
    c022->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h22->GetXaxis()->SetTitle(" Phi");
    h22->GetXaxis()->SetTitleSize(0.07);
    h22->GetXaxis()->SetLabelSize(0.05);
    h22->GetXaxis()->SetTitleOffset(1);
    h22->GetYaxis()->SetTitle("Asymmetry  (-0.15<pT<-0.10)");
    h22->GetYaxis()->SetTitleSize(0.07);
    h22->GetYaxis()->SetLabelSize(0.035);
    h22->SetLineWidth(2);
    h22->SetMaximum(0.09);
    h22->Fit("f2");
    f2->SetLineWidth(5);
    h22->SetMarkerStyle(20);
    h22->SetMarkerColor(4);
    h22->SetMarkerSize(3);
    cout << "Chi2: " << h22->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h22->GetFunction("f2")->GetChisquare()/(17);
    h22->SetMinimum(-0.09);
    h22->Draw("AP");

  ////////////////////////////////////////////////////////////////////////////////
    c023->cd(1);
    gStyle->SetOptStat(0);
    gStyle->SetOptFit();
    h23->GetXaxis()->SetTitle(" Phi");
    h23->GetXaxis()->SetTitleSize(0.07);
    h23->GetXaxis()->SetLabelSize(0.05);
    h23->GetXaxis()->SetTitleOffset(1);
    h23->GetYaxis()->SetTitle("Asymmetry  (-0.10<pT<-0.05)");
    h23->GetYaxis()->SetTitleSize(0.07);
    h23->GetYaxis()->SetLabelSize(0.035);
    h23->SetLineWidth(2);
    h23->SetMaximum(0.09);
    h23->Fit("f2");
    f2->SetLineWidth(5);
    h23->SetMarkerStyle(20);
    h23->SetMarkerColor(4);
    h23->SetMarkerSize(3);
    cout << "Chi2: " << h23->GetFunction("f2")->GetChisquare();
    cout << " Reduced Chi2: " << h23->GetFunction("f2")->GetChisquare()/(17);
    h23->SetMinimum(-0.09);
    h23->Draw("AP");

 


////////////////////////////////////////////////////////////////////////////////
ofstream outputfile("protonAsymmetryxF.txt");
//int N1 = h1->GetNbinsX() + 1; 
//for(int i=0; i<N1; ++i){


outputfile << h8->GetMean() << "\t" << h8->GetFunction("f2")->GetParameter(1) << "\t" << h8->GetFunction("f2")->GetParError(1) << "\n" << h9->GetMean() << "\t" <<  h9->GetFunction("f2")->GetParameter(1) << "\t" << h9->GetFunction("f2")->GetParError(1) << "\n" << h10->GetMean() << "\t" << h10->GetFunction("f2")->GetParameter(1) << "\t" << h10->GetFunction("f2")->GetParError(1) << "\n" << h11->GetMean() << "\t" << h11->GetFunction("f2")->GetParameter(1) << "\t" << h11->GetFunction("f2")->GetParError(1)  << endl;

outputfile << h12->GetMean() << "\t" << h12->GetFunction("f2")->GetParameter(1) << "\t" << h12->GetFunction("f2")->GetParError(1) << "\n" << h13->GetMean() << "\t" << h13->GetFunction("f2")->GetParameter(1) << "\t" << h13->GetFunction("f2")->GetParError(1) << "\n" << h14->GetMean() << "\t" << h14->GetFunction("f2")->GetParameter(1) << "\t" << h14->GetFunction("f2")->GetParError(1) << "\n" << h15->GetMean() << "\t" << h15->GetFunction("f2")->GetParameter(1) << "\t" << h15->GetFunction("f2")->GetParError(1) << "\n" << h16->GetMean() << "\t" << h16->GetFunction("f2")->GetParameter(1) << "\t" << h16->GetFunction("f2")->GetParError(1) << "\n" << h17->GetMean() << "\t" << h17->GetFunction("f2")->GetParameter(1) << "\t" << h17->GetFunction("f2")->GetParError(1) << "\n" << h18->GetMean() << "\t" << h18->GetFunction("f2")->GetParameter(1) << "\t" << h18->GetFunction("f2")->GetParError(1) << "\n" << h19->GetMean() << "\t" << h19->GetFunction("f2")->GetParameter(1) << "\t" << h19->GetFunction("f2")->GetParError(1) << "\n" << h20->GetMean() << "\t" << h20->GetFunction("f2")->GetParameter(1) << "\t" << h20->GetFunction("f2")->GetParError(1) << "\n" << h21->GetMean() << "\t" << h21->GetFunction("f2")->GetParameter(1) << "\t" << h21->GetFunction("f2")->GetParError(1) << "\n" << h22->GetMean() << "\t" << h22->GetFunction("f2")->GetParameter(1) << "\t" << h22->GetFunction("f2")->GetParError(1) << "\n" << h23->GetMean() << "\t" << h23->GetFunction("f2")->GetParameter(1) << h23->GetFunction("f2")->GetParError(1) << endl;

outputfile.close();


gPad->Modified();
gPad->Update();

}

