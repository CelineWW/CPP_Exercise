//
//  main.cpp
//  PA11_NumDays
//
//  Created by Celine Wang on 11/16/23.
//

#include <iostream>
#include <iomanip>
#include "hours.h"

using namespace std;

int main() {
    // display itle
    std::cout << "NumDays Program\n\n";
    
    char choice = 'y';
    while(tolower(choice == 'y')){
        Hours h1, h2;
        // storing and retrieving the work days.
        cout << fixed << setprecision(2);
        cin >> h1;
        cout << "One: " << h1 << endl;
        // option:  cout << "One: " << h1.get_days() << " days.\n\n";
        
        cin >> h2;
        cout << "Two: " << h2 << endl;
        // option:  cout << "Two: " << h2.get_days() << " days.\n\n";
        
        // operators
        Hours h3 = h1 + h2;
        Hours h4 = h1 - h2;
        cout << "Addition: One + Two: " << h3;
        cout << "Subtraction: One - Two: " << h4 << endl;
        //option:  cout << "Addition: One + Two: " << (h1+h2).get_days() << " days.\n";
        //option:  cout << "Subtraction: One - Two: " << (h1-h2).get_days() << " days.\n\n";

        
        cout << "One++: " << h1++.get_days() << " days.\n";
        cout << "++One: " << h1.get_days() << " days.\n\n";
        
        cout << "Two--: " << h2--.get_days() << " days.\n";
        cout << "--Two: " << h2.get_days() << " days.\n\n";
        
        // prompt user run again
        cout << "Test the program again (y/n)? ";
        cin >> choice;
        cout << "------------------------------------------\n\n";
    }
    cout << "Programmer: Celine Wang - What A Long Day!\n";
    cout << "Press the [Enter] key to end ...\n";
    cin.ignore();
    cin.get();
    
    return 0;
}
