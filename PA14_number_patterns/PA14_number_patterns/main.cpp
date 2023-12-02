//
//  main.cpp
//  PA14_number_patterns
//
//  Created by Celine Wang on 12/1/23.
//


// number pattern:
//a(n) = Σ((n-1)^2)   ----(n € N  natural numbers &&  n > 1)
//a(n) = 1^2 + 2^2 + ... + (n-1)^2


#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

//function declarations
string get_ordinal(int size_param, vector<string>& ordinal_p);
long long get_pattern_num(int size_param, vector<long long>& squared_p, vector<long long> sum_of_squared_p);
void display_table(int size_param, vector<long long>& squared_p, vector<string>& ordinal_p, vector<long long> sum_of_squared_p);


int main() {
    // display title
    cout << "\nNumber Patterns Program\n\n";
     
    // initialize vector size to be 20 and display ordinal pattern table
    int size = 20;
    vector<long long> squared(size);
    vector<string> ordinal(size);
    vector<long long> sum_of_squared(size);
    cout << "The first twenty numbers in the pattern:\n";
    display_table(size, squared, ordinal, sum_of_squared);
    
    // ask user for element number
    int user_size = 1;
    while (true){
        cout << "\n\nWhat's the ordered element in the pattern that you wanted to find?\n"
        << "(Or enter 0 to end):";
        if(!(cin >> user_size)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Element number is not valid. Try again!\n";
            continue;
        }
        // print ordinal number and pattern number on console
        else if (user_size > 0) {
            squared.resize(user_size);
            ordinal.resize(user_size);
            sum_of_squared.resize(user_size);
            cout << "The " << get_ordinal(user_size,ordinal) << " element is: " << get_pattern_num(user_size,squared,sum_of_squared);
        }
        else if (user_size < 0) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Element number is not valid. Try again!\n";
            continue;
        }
        else if (user_size == 0){
            break;
        }
    }
    cout << endl << endl;
    cout << "GDOOBYE!\n" << "Programmer: Celine Wang\n";
    cout << "Press <Enter> key to end ...";
    cin.ignore();
    
    return 0;
    
}

//get_ordinal function definition
string get_ordinal(int size_param, vector<string>& ordinal_p){
    int element_end = size_param % 10;
    if (element_end == 1){
        ordinal_p[size_param - 1] = to_string(size_param) + "st";
    }
    else if (element_end == 2){
        ordinal_p[size_param - 1] = to_string(size_param) + "nd";
    }
    else if (element_end == 3){
        ordinal_p[size_param - 1] = to_string(size_param) + "rd";
    }
    else {
        ordinal_p[size_param - 1] = to_string(size_param) + "th";
    }
    string ordinal_num = ordinal_p[size_param - 1];
    return ordinal_num;
}
        
//get_pattern_num function definition
long long get_pattern_num(int size_param, vector<long long>& squared_p, vector<long long> sum_of_squared_p){
    for (int i = 0; i < size_param; ++i) {
        squared_p[i] = pow(i+1, 2);
        for (long long s: squared_p) {
            sum_of_squared_p[i] += s;
        }
    }
    long long pattern_num = sum_of_squared_p[static_cast<long long>(size_param) - 1];
    return pattern_num;
}

//display_table function definition
void display_table(int size_param, vector<long long>& squared_p, vector<string>& ordinal_p, vector<long long> sum_of_squared_p){
    cout << left << setw(18) << "Order" << setw(18) << "Number" << endl;
    for (int i = 1; i <= size_param; ++i) {
        cout << left << setw(18) << get_ordinal(i, ordinal_p) << setw(18) << get_pattern_num(i, squared_p, sum_of_squared_p) << endl;
    }
}
