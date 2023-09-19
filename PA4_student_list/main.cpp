//
//  main.cpp
//  PA4_student_list
//
//  Created by Celine Wang on 9/17/23.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>

using namespace std;

int main() {
    //display title
    cout << "Student List Program\n";
    
    //open input file
    string filename;
    ifstream infile;
    //prompt user to choose
    
    while(true){
        cout << "== * == * == * == * == * == * == * == * == * == * == * == * ==" << '\n';
        cout << "     How would you like to read in the sutdents's name?       " << '\n';
        cout << "         (1) Entering names from keyboard                     " << '\n';
        cout << "         (2) Reading names from external file                 " << '\n';
        cout << "         (3) End program                                      " << '\n';
        cout << "== * == * == * == * == * == * == * == * == * == * == * == * ==" << '\n';
        cout << "\n       Enter your choice: ";
        
        int choice = 0;
        cin >> choice;
        //1. enter new names
        if (choice == 1){
            
            while (true){
                int adds;
                cout << "Enter the number of students between 5 and 30 inclusive: ";
                cin >> adds;
                
                //input validation and append added student names
                if (adds >=5 && adds <=30){
                    ofstream output_file;
                    output_file.open("Students Names.txt", ios::app);
                    string current;
                    for (int count = 1; count <= adds; count++){
                        cout << "\nEnter the full name of student" << count << ":";
                        cin.ignore();
                        getline(cin, current, '\n');
                        output_file << current << '\n';
                    }
                    output_file.close();
                    
                    //list added names
                    cout << "\nHere is the list of names you have entered:\n";
                    ifstream input_file;
                    string line;
//                    string name;
                    stringstream ss;
                    input_file.open("Students Names.txt");
                    
                    //get total line of file
                    int line_count = 1;
                    while (getline(input_file, line)){
                        line_count++;
                    }
                    //get last added lines of file
                    for (int i = line_count-adds; i <= line_count; i++){
                        getline(input_file, line);
                        ss.str(line);
                        ss.clear();
                        cout << i  << "." << line << '\n';
//                        if (ss >> name){
//                            cout << i  << "." << name << '\n';
//                        }
                        input_file.close();
                    }
                        //print the top and end of last input.
                        cout << "The name at the top: " << "\n";
                        cout << "The name at the end: " << "\n";
                   
                    break;
                }
                
                //Input number validation
                else if(adds < 5){
                    cout << "Minimum added students - 5. Try again.\n";
                }
                else if(adds > 30){
                    cout << "Maximum added students - 30. Try again.\n";
                }
            }
        }
        // 2. read from external file
        else if (choice == 2){
            ifstream infile("Students Names.txt");
            string top = "ZZ";
            string end = "AA";
            //list all names from the entire file
            if (infile){
                string line;
                stringstream ss;
                string name;
                int line_count = 1;
                while (getline(infile, line)){
                    ss.str(line);
                    ss.clear();
                    cout << line_count++ << ". " << line << '\n';
                    
                    
                    //update top and end
                    if (line < top)
                        top = line;
                    if (line > end)
                        end = line;
                }
            }
            //print names at the top and end
            cout << "\n\nThe name at the top: " << top << endl;
            cout << "The name at the end: " << end << endl << endl;
            
            infile.close();
        }
        //3. end the program
        else if (choice == 3){
            cout << "\nProgramer: Celine Wang"
                 << "written for the class CISC 192 - C++ Programming.\n"
                 << "COOD BYE! Press [Enter] key to end the program...\n\n";
            break;
        }
        continue;
    }
    return 0;
}
