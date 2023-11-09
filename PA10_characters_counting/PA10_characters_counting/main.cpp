//
//  main.cpp
//  PA10_characters_counting
//
//  Created by Celine Wang on 11/7/23.
//

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

int main() {
    // Display title
    cout << "Characters Counting" << endl << endl;
    
    char choice = 'y';
    while (tolower(choice) == 'y'){
        cout << "From a string entered at the keyboard, the program\n"
        << "counts and lists the number of digits, vowels, and consonants." << endl << endl;
        
        // Take user input
        string mystring;
        cout << "Enter a string: ";
        getline(cin, mystring);
        cout << endl;
        
        // Create a compare strings
        string digits = "0123456789";
        string vowels = "aeiouAEIOU";
        string consonants = "bcdfghjklmnpqrstvwxyBCDFGHJKLMNPQRSTVWXYZ";
        vector <int> digits_list;
        vector <char> vowels_list;
        vector <char> consonants_list;
        
        // Loop through input string to get single elements
        for (char c: mystring) {
            //    for (char c = 0; c < mystring.length(); ++c) {
            int digit_index = (unsigned)digits.find_first_of(c);
            int vowel_index = (unsigned)vowels.find_first_of(c);
            int consonant_index = (unsigned)consonants.find_first_of(c);
            if (digit_index > -1) {
                int c_int = c - '0';      // Convert number ASCII code to intger
                digits_list.push_back(c_int);
            }
            if (vowel_index > -1) {
                vowels_list.push_back(c);
            }
            if (consonant_index > -1) {
                consonants_list.push_back(c);
            }
        }
        
        // Print Digits
        cout << "    Digits: " << digits_list.size();
        if (digits_list.size() > 0) {
            cout << " --> ";
        }
        for (int digit: digits_list) {
            cout << digit << ", ";
        }
        cout << endl;
        
        // Print Vowels
        cout << "    Vowels: " << vowels_list.size();
        if (vowels_list.size() > 0) {
            cout << " --> ";
        }
        for (char vowel: vowels_list) {
            cout << vowel << ", ";
        }
        cout << endl;
        
        // Print Consonants
        cout << "Consonants: " << consonants_list.size();
        if (consonants_list.size() > 0) {
            cout << " --> ";
        }
        for (char consonant: consonants_list) {
            cout << consonant << ", ";
        }
        cout << endl << endl;
        
        // Prompt user to continuously run the program
        cout << "Run again (y/n)? ";
        cin >> choice;
        cin.ignore();    // Clean the buffer
        cout << endl;
    }
    
    // Display programmer's name
    cout << "Programmer: Celine Wang - I am counting..." << endl << endl;
    cout << "Press <Enter> to end ..." << endl << endl;
    cin.get();                                               // Pause program
    
    return 0;
}
