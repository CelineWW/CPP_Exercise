#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Guest Book\n\n";
    
    string first_name;
    cout << "First name:\t";
    cin >> first_name;             // get first string only
    
    char middle_initial;
    cout << "Middle initial:\t";
    cin.ignore(100, '\n');         // ignore leftover chars and newline
    middle_initial = cin.get();    // get first char only
    
    string last_name;
    cout << "Last name:\t";
    cin.ignore(100, '\n');         // ignore leftover chars and newline
    getline(cin, last_name);       // get entire line
    
    string city;
    cout << "City:\t\t";
    getline(cin, city);            // get entire line
    
    string country;
    cout << "Country:\t";
    getline(cin, country);         // get entire line
    
    string address;
    cout << "Address:\t";
    getline(cin, address);         // get entire line
    
    string state_code;
    string state_code_initial;
    cout << "State:\t";
    getline(cin, state_code);
    state_code_initial = state_code.substr(0, 2); // get first two char.
                                   //Use toupper() with for loop can change to upper case.
    
    string zip_code;
    cout << "Zip Code:\t";
    getline(cin, zip_code);        // get entire line
    
    cout << "\nENTRY\n"            // display the entry
    << first_name + ' ' + middle_initial + ". " + last_name + '\n'
    << city + ", " + country + "\n"
    << address + "\n" + state_code_initial + "\n" + zip_code + "\n\n";
}
