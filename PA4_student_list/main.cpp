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
                
                //Input validation
                if (adds >=5 && adds <=30){
                    ofstream output_file;
                    output_file.open("Students Names.txt", ios::app);
                    string current;
                    
                    for (int count = 1; count <= adds; count++){
                        cout << "\nEnter the full name of student" << count << ":";
                        cin.ignore();
                        getline(cin, current, '\n');
                        output_file << current << '\n';
                        
                        
                        //                            cout << count << "." << current << '\n';
                        
                        //                    string current;
                        //                    stringstream ss;
                        //                    int count = 0;
                        //                    cout << "\nEnter the full name of student" << ++count << ":";}
                        //                        // store and list user entered student names
                        //                        string current;
                        //
                        //                            //
                        //                            //
                        //                            //                    //                            ss.str(current);
                        //                            //                    //                            ss.clear();
                        //                            //                    //                            if (ss >> current) {
                        //
                        
                    }
                    output_file.close();
                    
                    cout << "\nHere is the list of names you have entered:\n";
                    string line;
                    string s;
                    ifstream input_file;
                    input_file.open("Students Names.txt");
                    
                    //
                    int lineCount = 1;
                    while (getline(input_file, line)){
                        lineCount++;
                    }
                    for (int i = lineCount-adds; i <= lineCount; i++){
                        std::getline(input_file, s);
                        std::cout << s;
                    }
                    input_file.close();
//                    while (getline(input_file, line)){
//
//                    };
                    
//                    cout << lineCount << endl;
//                    for (int count = 1; count <= adds; count++){
//                        cout << current << endl;
//                    }
                        cout << "The name at the top: " << "\n";
                        cout << "The name at the end: " << "\n";
                    
                    //                while (getline(cin, current, '\n')){
                    //
                    //                    cout << count << ". "  << current << '\n';
                    //                    }
                    
                    break;
                }
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
            if (infile){
                string line;
                stringstream ss;
                string name;
                int line_count = 1;
                while (getline(infile, line)){
                    ss.str(line);
                    ss.clear();
                    cout << line_count++ << ". " << line << '\n';
                }
            }
            
            cout << "\n\nThe name at the top: " << endl;
            cout << "The name at the end: " << endl << endl;
            
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
