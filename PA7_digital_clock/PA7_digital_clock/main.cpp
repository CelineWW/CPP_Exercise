//
//  main.cpp
//  PA7_digital_clock
//
//  Created by Celine Wang on 10/13/23.
//

#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;


// get_input function definition
string get_input() {
    string mytime;
    cout << "Enter a time: ";
    getline(cin, mytime);
    return mytime;
}

int main() {
    cout << "Amazing Digital Clock" << endl << endl;
    
    char choice = 'y';
    while (tolower(choice == 'y')) {
        string mytime;
        int h1=0;
        int h2=0;
        int m1=0;
        int m2=0;
        
        bool valid_time = false;
        while(!valid_time){
            // set valid_time flag.
            valid_time = true;
            mytime = get_input();
            
            // time format validation
            // time format is either 5 or 4 length string.
            if ((mytime.length() < 4 ) || (mytime.length() > 5) ) {
                valid_time = false;
            }
            
            // valid time only includes numbers and ":".
            // look for the first colon
            int colon_index = mytime.find_first_of(':');
            if (colon_index == -1){
                valid_time = false;
            }
            
            // only one colon is allowed
            int colon_count = 0;
            for (char c: mytime) {
                if (c == ':'){
                    colon_count ++;
                }
            }
            if (colon_count > 1) {
                valid_time = false;
            }
            
            // if colon found and only one colon exists
            if (colon_index > 0) {
                // make sure colon at the right place
                if (colon_index != (mytime.length() - 3)) {
                    valid_time = false;
                }
                // extract number of h/m digits
                string str(mytime);
                string h1_str;
                string h2_str;
                string m1_str;
                string m2_str;
                m2_str = str[mytime.length()-1];
                m1_str = str[mytime.length()-2];
                h2_str = str[mytime.length()-4];
                if (mytime.length() == 5 ) {
                    h1_str = str[mytime.length()-5];
                }
                // char before and after colon must be numbers
                for (char c: mytime) {
                    if ((isalpha(c))|| (isspace(c)) || ((ispunct(c)) && (c != ':'))) {
                        valid_time = false;
                    }
                }
                
                if (valid_time) {
                    m2 = stoi(m2_str);
                    m1 = stoi(m1_str);
                    h2 = stoi(h2_str);
                    if (mytime.length() == 5 ) {
                        h1 = stoi(h1_str);
                    }
                    //get valid digit range of numbers
                    if ((h1 * 10 + h2) > 12 ) {
                        valid_time = false;
                    }
                    if ((m1 * 10 + m2) > 59 ) {
                        valid_time = false;
                    }
                }
            }
                     
            // if invalid, show error message
            if (!valid_time){
                cout << "Invalid time. Try again!" << endl;
            }
        }
        
        // special time carry specific meanings
        // 4 digits valid time
        if ((mytime.length() == 5) && ((h1 ==  1) || (h1 == 2))) {
            if ((h1 + h2) == (m1 + m2)) { // hr and min equal summation
                cout << mytime << " is a lucky time.  ";
            }
            else {
                cout << mytime << " is a normal time.  ";
            }
            
            // special cases
            if ((h1 == h2) && (h1 == m1) && (h2 == m2)){ //case1: all the same
                cout << "-> BINGO! Go to buy a lottery ticket." << endl;
            }
            else if (((m2 - m1) == 1) && ((m1 - h2) == 1) && ((h2 - h1) == 1)) { //case2: ascending oder
                cout << "-> UP! All dreams will come true." << endl;
            }
        }
        
        // 3 digits valid time
        if (mytime.length() == 4) {
            if (h2 == (m1 + m2)) { // hr and min equal summation
                cout << mytime << " is a lucky time.  ";
            }
            else {
                cout << mytime << " is a normal time.  ";
            }
            
            // special cases
            if ((h2 == m1) &&(m1 == m2)){ //case1: all the same
                cout << "-> BINGO! Go to buy a lottery ticket." << endl;
            }
            else if (((h2 - m1) == 1) && ((m1 - m2) == 1)) { //case2: descending oder
                cout << "-> DOWN! The challenge road is ahead." << endl;
            }
            else if (((m2 - m1) == 1) && ((m1 - h2) == 1)) { //case3: ascending oder
                cout << "-> UP! All dreams will come true." << endl;
            }
        }
        
        cout << endl << endl <<"Run again (y/n)? ";
        cin >> choice;
        cin.ignore();
        cout << endl;
    }
    //programmer name
    cout << "Programmer: Celine Wang\n"
    << "Goodbye! Press <Enter> key to ending the program..." << endl;
    
    return 0;
}
