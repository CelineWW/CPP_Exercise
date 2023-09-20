#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
	// print name of program
	cout << "Miles Per Gallon\n\n";
    
///////////////////////////////////////////////////////////////////////////////////////////////////////// Read dat from input file /////////////////////////////////////////////////////////////////////////////////////////////////////
    
    //initialize varialbes used by loop
    double miles;
    double gallons;
    double mpg;
    double sum_miles = 0;
    double sum_gallons = 0;
    double avg_mpg = 0;
    
    string filename = "trips.txt";
    ifstream infile;
    infile.open(filename);
    if (infile){
        //output set floating-point formatting
        int col = 10;
        cout << fixed << setprecision(1);
        cout << setw(col) << "Miles" << setw(col) << "Gallons" << setw(10) << "MPG" << endl;
            
        //extract data from string stream
        while (infile >> miles >> gallons) {
            //calculate mpg from miles and gallons
            mpg = round(miles / gallons * 100) / 100;
            cout << fixed << setprecision(1);
            cout << setw(col) << miles << setw(col) << gallons;
            cout << fixed << setprecision(2);
            cout << setw(col) << mpg << endl;

            //update total miles and total gallons
            sum_miles += miles;
            sum_gallons += gallons;
            avg_mpg = sum_miles/sum_gallons;
        }
        infile.close();
        
        // display calculations
        int col1 = 17;
        int col2 = 10;
        cout << endl << endl;
        cout << fixed << setprecision(2);
        cout << left << setw(col1) << "Total miles: " << right << setw(col2) << sum_miles << endl;
        cout << left << setw(col1) << "Total gallons: " << right <<  setw(col2) <<sum_gallons << endl;
        cout << left << setw(col1) << "Average MPG: " << right <<  setw(col2) <<avg_mpg << endl;
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////// User Input appending to output file ////////////////////////////////////////////////////////////////////////////////////////////////
	char another_entry = 'y';
	while (tolower(another_entry) == 'y') {

		// get miles driven
		double miles = 0;
		while (true) {
			cout << "\n\nEnter miles driven:        ";
			cin >> miles;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			if (miles <= 0) {
				cout << "Miles driven must be greater than zero. Please try again.\n";
				continue;
			}
			else {
				break;
			}
		}

		// get gallons of gas used
		double gallons = 0;
		while (true) {
			cout << "Enter gallons of gas used: ";
			cin >> gallons;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			if (gallons <= 0) {
				cout << "Gallons used must be greater than zero. Please try again.\n";
				continue;
			}
			else {
				break;
			}
		}

		// calculate and display miles per gallon
		double mpg;
		mpg = miles / gallons;
		mpg = round(mpg * 100) / 100;
		cout << "Miles per gallon:          " << mpg << endl << endl;

		// write entry to file
		ofstream outfile;
		outfile.open("trips.txt", ios::app);
		outfile << fixed << setprecision(1);
		outfile << '\n' << miles << '\t' << gallons << '\n';
		outfile.close();

        
//////////////////////////////////////////////////////////////////////////////////////////////////////// print latest entried data //////////////////////////////////////////////////////////////////////////////
        ifstream infile;
        infile.open(filename);
        double sum_miles = 0;
        double sum_gallons = 0;
        double avg_mpg = 0;
        if (infile){
            //output set floating-point formatting
            int col = 10;
            cout << fixed << setprecision(1);
            cout << setw(col) << "Miles" << setw(col) << "Gallons" << setw(10) << "MPG" << endl;
                
            //extract data from string stream
            while (infile >> miles >> gallons) {
                //calculate mpg from miles and gallons
                mpg = round(miles / gallons * 100) / 100;
                cout << fixed << setprecision(1);
                cout << setw(col) << miles << setw(col) << gallons;
                cout << fixed << setprecision(2);
                cout << setw(col) << mpg << endl;

                //update total miles and total gallons
                sum_miles += miles;
                sum_gallons += gallons;
                avg_mpg = sum_miles/sum_gallons;
            }
            infile.close();
            
            // display calculations
            int col1 = 17;
            int col2 = 10;
            cout << endl << endl;
            cout << fixed << setprecision(2);
            cout << left << setw(col1) << "Total miles: " << right << setw(col2) << sum_miles << endl;
            cout << left << setw(col1) << "Total gallons: " << right <<  setw(col2) <<sum_gallons << endl;
            cout << left << setw(col1) << "Average MPG: " << right <<  setw(col2) <<avg_mpg << endl;
        }
        
/////////////////////////////////////////////////////////////////////////////////////////////////////////// see if the user wants to enter more data ///////////////////////////////////////////////////////////////////////////////////
		cout << "Get entries for another trip? (y/n): ";
		cin >> another_entry;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
	}

	cout << "Bye!\n\n";
}
