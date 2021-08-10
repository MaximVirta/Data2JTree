#include <TRandom3.h>
#include <TClonesArray.h>
#include <TFile.h>
#include <TTree.h>
#include <TF1.h>
#include <TH1.h>
#include <sstream>
#include <iostream>
#include <fstream>
#include <TStopwatch.h>
#include "src/AliJBaseTrack.h"
#include "src/AliJBaseEventHeader.h"

const double kJPi           = 3.14159265358979; //TMath::Pi();
const double kEtaMax = 0.8;
const char* path_input = "inputs/input";
const char* suffix_input = ".dat";
const char* path_output = "outputs/output";
const char* suffix_output = ".root";

void analyze(string code);

using namespace std;
int main(int argc, char **argv){

	std::vector<string> v_codes{
		"demo_mult100_v1_00000",
		"demo_mult80_v1_00000",
		"demo_output_v1_00000"
		
		// "_v1_00000", 
		// "_v1_010000", 
		// "_v1_20000",
		// "mult100_v1_00000", 
		// "mult80_v1_00000",
		// "mult100_v1_010000", 
		// "mult80_v1_010000",
		// "mult100_v1_20000", 
		// "mult80_v1_20000"
	};

	cout << "Starting to analyze..." << endl;

	// Analyze each input .dat file
	for(auto & code : v_codes) analyze(code);
	
	cout <<"Successfully finished."<<endl;
}

void analyze(string code) {
	stringstream ss_output;
	ss_output << path_output << code << suffix_output;

	const string& tmp = ss_output.str();
	const char *outputfile = tmp.c_str();


	TFile *fOutRoot = new TFile(outputfile, "RECREATE");
	TClonesArray *tracks = new TClonesArray("AliJBaseTrack",1000);
	TClonesArray *event = new TClonesArray("AliJBaseEventHeader",10000);
	TTree *jTree = new TTree("jTree","Tree from ToyMC");
	jTree->Branch("JTrackList",&tracks);		
	jTree->Branch("JEventHeaderList",&event);	
	

	stringstream ss_result;
	ss_result << path_input << code << suffix_input;

	const string& tmp2 = ss_result.str();
	const char *inputfile = tmp2.c_str();	

	std::vector<double> v;

	int mult_check = 0;
	int all_tracks = 0;
	int evtN = 1;
	int PCode = 1;
	double px=-1;
	double py=-1;
	double pz=-1;
	double E=-1;
	double mass = 0.139; 
	Char_t charge = 0;

	int nevents = 0;


	// Read the input file
    ifstream fin(inputfile);

	if (!fin.is_open())
    {
    	printf("ei toimi!!!!!");
        exit(EXIT_FAILURE);
    }

    // Create histograms for multiplicity and \eta distribution
    
    TH1D *hMultip = new TH1D("MultipHisto", "Multiplicity", 200, 0, 900);
	TH1D *hEta = new TH1D("Eta Distr", "\\eta-distribution", 200, -3.5, 3.5);

    TStopwatch timer;
	timer.Start();

	// Include the first event
    AliJBaseEventHeader *hdr = new( (*event)[event->GetEntriesFast()] ) AliJBaseEventHeader;
	hdr->SetEventID(evtN);

	cout << "File opened: " << inputfile << endl;

	string str;
	getline(fin, str);
	while (getline(fin, str)) {
		stringstream ss(str);
		string token;

		// Read the lines of format [pt, eta, phi, evtN] to a vector
		while(getline(ss, token, '\t' )) {
			double d_token = stod(token);
			v.push_back(d_token);
		}

		// Check if event has changed
		if (v[3]>evtN) {
			jTree->Fill(); // Fill previous event
			event->Clear();
			tracks->Clear();
			// Store the events as AliJBaseEventHeaders
			AliJBaseEventHeader *hdr = new( (*event)[event->GetEntriesFast()] ) AliJBaseEventHeader;
			hdr->SetEventID(v[0]);
			hMultip->Fill(mult_check);
			mult_check = 0;
			all_tracks = 0;
			nevents+=1;
		}
		
		// Assign the variables
		double etaBg  = v[1];
		hEta->Fill(etaBg);
		double phiBg = v[2]; //rad
		double pt = v[0];
		evtN = (int) v[3];
		px = pt*cos(phiBg);
		py = pt*sin(phiBg);
		pz = pt*sinh(etaBg);
		E = sqrt(mass*mass+px*px+py*py+pz*pz);

		// Add a new track. Note that this includes all tracks of an event!
		// Tracks are stored as AliJBaseTracks
		new ( (*tracks)[all_tracks] )AliJBaseTrack(px, py, pz, E, all_tracks, PCode, charge);

		if (pt>0.4 && etaBg>-2.5 && etaBg<2.5) {mult_check+=1;} // Check the multiplicity acceptance

		all_tracks+=1;

		v.clear();
	}

	// Fill the final tree.
	jTree->Fill();

	// Number of actual events on the input file
	nevents+=1;
	cout << "Number of events: " << nevents << endl;

	fin.close();	

	timer.Print();

	fOutRoot->Write();
	fOutRoot->Close();

	cout << "Wrote to file: " << outputfile << endl;
}