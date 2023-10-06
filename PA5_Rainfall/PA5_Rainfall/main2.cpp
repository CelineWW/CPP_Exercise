//
//  main.cpp
//  PA5_Rainfall
//
//  Created by Celine Wang on 9/27/23.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    // display title and instructions
    cout << "Rainfall Summary\n\n";
    cout << "The programs reads rainfall values for each of the 12 months in a year, "
         << "from an external text file starting with January and ending with December, "
         << "into an array of doubles.\n";
    cout << "The program then calculates and displays it on the screen: \n"
         << "the total rainfall for the year, the average monthly rainfall, "
         << "and the months with the highest and lowest amounts.\n";
    cout << "The read-in values and their intended months were displayed at the end "
         << "(with a note of largest or smallest next to the corresponding value).\n";
    cout << "The name of the text file must be entered at the runtime." << endl << endl;
    
    char choice = 'y';
    while (choice == 'y'|| choice == 'Y'){
        
        //open input file
        string filename;
        ifstream infile;
        cout << "Enter the filename for rainfall data (or -1 to quit): ";
        getline(cin, filename);
        infile.open(filename);

        // create months vector
        vector<string> months{"January", "February", "March", "April", "May", "June",
                              "July", "August", "September", "October", "November", "December"};
        // create rainfalls vector and loop through each line
        vector<double> rainfalls;
        if(infile){
//            cout << "\nFile open successfully.\n";
            double rainfall;
            while (infile >> rainfall){
//                cout << rainfall << endl;
                rainfalls.push_back(rainfall);
            }
        }

        // get total, average, largest, and smallest rainfalls
        double total_rainfall = 0;
        double avg_rainfall = 0;
        double max_rainfall = -100;
        double min_rainfall = 100;
        
        for (int i = 0; i < rainfalls.size(); ++i){
            total_rainfall += rainfalls[i];
            if (rainfalls[i] > max_rainfall){
                max_rainfall = rainfalls[i];
            }
            if (rainfalls[i] < min_rainfall){
                min_rainfall = rainfalls[i];
            }
        }
        avg_rainfall = total_rainfall/rainfalls.size();
        
        // creat largest and smallest month list
        vector<int> max_months_index;
        vector<int> min_months_index;
        vector<string> max_months;
        vector<string> min_months;
        for(int i = 0; i < rainfalls.size(); ++i){
            string note;
            if (rainfalls[i] == max_rainfall){
                max_months_index.push_back(i);
                max_months.push_back(months[i]);
                
            }
            else if (rainfalls[i] == min_rainfall){
                min_months_index.push_back(i);
                min_months.push_back(months[i]);
            }
        }
        
        // convert max_month vector into a streamstring.
        stringstream max_month_list;
        for (auto m = max_months.begin(); m!= max_months.end(); ++m){
            if (m != max_months.begin())
                max_month_list << ", ";
            max_month_list << * m;
        }
//        cout << max_month_list.str() << endl;
        
        // convert min_month vector into a streamstring.
        stringstream min_month_list;
        for (auto m = min_months.begin(); m!= min_months.end(); ++m){
            if (m != min_months.begin())
                min_month_list << ", ";
            min_month_list << * m;
        }
//        cout << min_month_list.str() << endl;
        
        // create a vector of largest/smallest note.
        vector<string> notes;
        for(int i = 0; i < rainfalls.size(); ++i){
            string note;
            if (rainfalls[i] == max_rainfall){
                note = " (largest) ";
                notes.push_back(note);
            }
            else if (rainfalls[i] == min_rainfall){
            note = " (smallest) ";
            notes.push_back(note);
            }
            else {
                note = "";
                notes.push_back(note);
            }
        }
        
        
        cout << fixed << setprecision(2);
        cout << "The total: " << total_rainfall << " inches."<< endl;
        cout << "The average: " << avg_rainfall << " inches."<<endl;
        cout << "The largest: " << max_rainfall << " inches in "<< max_month_list.str() << endl;
        cout << "The smallest: "<< min_rainfall << " inches in "<< min_month_list.str() << endl;
        cout << endl << endl;
        
        // display month-rainfall table title
        cout << setw(12) << left << "Month" << setw(12) << right << "Rainfall" << endl;
        cout << setw(12) << left << "=====" << setw(12) << right << "========" << endl;
        
        // display month-rainfall table data
        for(int r = 0; r < rainfalls.size(); ++r){
            cout << setw(12) << left << months[r] << setw(12) << right << rainfalls[r]
                 << setw(12) << left << notes[r] << endl;
        }
      
        cout << endl << endl;

        cout << "Run the program again (y/n)? ";
        cin >> choice;
        cin.ignore();
        cout << endl;
        continue;
    }
    
    // exit the program with enter key to confirm
//    cin.ignore();
    cout << "As you wanted to stop the program, press the <Enter> key to do so.\n";
    cin.ignore();
    cout << "GOODBYE!" << endl << endl;
    cout << "Programmer: Celine Wang - written for the class CISC 192 - C++ Programming." << endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
