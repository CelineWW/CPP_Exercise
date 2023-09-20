#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

int main()
{
    //open input file
    string filename = "wages.txt";
    
    ifstream infile;
    infile.open(filename);
    //define variables
    string name;
    double hourly_wage;
    double hours;
    double total = 0;
    int line_read = 0;
    int line_processed = 0;
    int line_unprocessed = 0;
    
	if (infile) {
    //extract data from input file
    cout << left << setw(16) << "Name"
         << right << setw(12) << "Hourly wage"
         << right << setw(12) << "Hours"
         << right << setw(12) << "Total" << endl;
    cout << "---------------- ----------- ----------- -----------" << endl;
    
    string line;
    stringstream ss;
    while(getline(infile, line)){
        ++line_read;           //increment total line
        ss.str(line);
        ss.clear();
        
        //extract data from string stream- if ok, process
        if(ss >> name >> hourly_wage >> hours){
            ++line_processed;   //increment processed line
            total = hourly_wage * hours;
            cout << fixed << setprecision(2);
            cout << left << setw(16) << name
                 << right << setw(12) << hourly_wage
                 << right << setw(12) << hours
                 << right << setw(12) << total << endl;
        }
        line_unprocessed = line_read - line_processed;
    
    }
    infile.close();
    }
    cout << "\n\n" << line_unprocessed << " lines not processed." << endl << endl;
    cout << "Program written by Celine Wang." << endl << endl;
}

