//
//  main.cpp
//  PA8_Rational_Number
//
//  Created by Celine Wang on 10/17/23.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Ratio {
    int numerator = 1;
    int denominator = 1;
};

// get_input function definition
string get_input(){
    string input;
    cout << "Enter a rational number (p/q):";
    getline(cin, input);
    return input;
}

// is_digit function definition
bool is_digit(string input) {
    for (char c: input) {
        if (!isdigit(c) && (c != '-')){
            return false;
        }
    }
    int sign_index = input.find('-');
    if ((sign_index != -1) && (sign_index != 0)){
        return false;
    }
    return true;
}

// validate_format function definition
bool validate_format(string input, bool& valid_ratio, string& p, string& q, Ratio& ratio){
    // look for slash from input
    valid_ratio = true;

    // only one slash is allowed
    int slash_count = 0;
    for (char c: input) {
        if (c == '/'){
            slash_count++;
        }
    }
    if (slash_count != 1) {
        valid_ratio = false;
    }
    int slash_index = input.find('/');
    int sign_index = input.find('-');
    if ((sign_index != -1) && (sign_index != 0) && (sign_index != slash_index + 1)){
        valid_ratio = false;
    }
    if (slash_index > -1) {
        // rest of digits must be numbers or minus sign
        for (char c: input) {
            if ((!isdigit(c)) && (c != '/') && (c != '-')) {
                valid_ratio = false;
            }
        }
        if (valid_ratio && ((sign_index == -1) ||(sign_index == 0))) {  // if numerator contains minus sign
            // extract number
            p = input.substr(0, slash_index);
            q = input.substr(slash_index+1);
            ratio.numerator = stoi(p);
            ratio.denominator = stoi(q);
            if (ratio.denominator == 0) {
                valid_ratio = false;
            }
            else {
                valid_ratio = true;
            }
        }
        if (valid_ratio && ((sign_index == slash_index + 1) ||(sign_index == 0))) {  // if denominator contains minus sign
            // extract number
            p = input.substr(0, slash_index);
            q = input.substr(slash_index+1);
            ratio.numerator = stoi(p);
            ratio.denominator = stoi(q);
            if (ratio.denominator == 0) {
                valid_ratio = false;
            }
            else {
                valid_ratio = true;
            }
        }
    }
    
    // integer numbers is also allowed, default denominator is 1
    if (is_digit(input)) {
        valid_ratio = true;
    }
    
    if (valid_ratio && (slash_count==0)){
        ratio.numerator = stoi(input);
        ratio.denominator = 1;
    }
    return valid_ratio;
}

// find_gcd function definition
int find_gcd(int num1, int num2){
    int gcd = 0;
    for (int i = 0; (i <= abs(num1)) && (i <= abs(num2)); i++){
        if ((num1%i == 0) && (num2%i == 0)){
            gcd = i;
        }
    }
    return gcd;
}

// reduce_form function definition
Ratio reduce_form(Ratio ratio){
    Ratio simplified;
    simplified.numerator = ratio.numerator / find_gcd(ratio.numerator, ratio.denominator);
    simplified.denominator = ratio.denominator / find_gcd(ratio.numerator, ratio.denominator);
    if (simplified.denominator < 0){
        simplified.numerator = - simplified.numerator;
        simplified.denominator = - simplified.denominator;
    }
    return simplified;
}

// perform_addition function definition
Ratio perform_addition(Ratio ratio1, Ratio ratio2) {
    Ratio add;
    int lcm_add = ratio1.denominator * ratio2.denominator / find_gcd(ratio1.denominator, ratio2.denominator);
    int sum_add = ratio1.numerator * lcm_add/ratio1.denominator + ratio2.numerator * lcm_add/ratio2.denominator;
    int numerator_add = sum_add/find_gcd(lcm_add, sum_add);
    int denominator_add = lcm_add/find_gcd(lcm_add, sum_add);
    add.numerator = numerator_add;
    add.denominator = denominator_add;
    if (add.denominator < 0) {
        add.numerator = - add.numerator;
        add.denominator = - add.denominator;
    }
    return add;
}

// perform_subtraction function definition
Ratio perform_subtraction(Ratio ratio1, Ratio ratio2) {
    Ratio sub;
    int lcm_sub = ratio1.denominator * ratio2.denominator / find_gcd(ratio1.denominator, ratio2.denominator);
    int diff_sub = ratio1.numerator * lcm_sub/ratio1.denominator - ratio2.numerator * lcm_sub/ratio2.denominator;
    int numerator_sub = diff_sub/find_gcd(lcm_sub, diff_sub);
    int denominator_sub = lcm_sub/find_gcd(lcm_sub, diff_sub);
    sub.numerator = numerator_sub;
    sub.denominator = denominator_sub;
    if (sub.denominator < 0) {
        sub.numerator = - sub.numerator;
        sub.denominator = - sub.denominator;
    }
    return sub;
}

// perform_multiplication function definition
Ratio perform_multiplication(Ratio ratio1, Ratio ratio2) {
    Ratio mul;
    int mul_den = ratio1.denominator * ratio2.denominator;
    int mul_num = ratio1.numerator * ratio2.numerator;
    int numerator_mul = mul_num/find_gcd(mul_den, mul_num);
    int denominator_mul = mul_den/find_gcd(mul_den, mul_num);
    mul.numerator = numerator_mul;
    mul.denominator = denominator_mul;
    if (mul.denominator < 0) {
        mul.numerator = - mul.numerator;
        mul.denominator = - mul.denominator;
    }
    return mul;
}

// perform_division function definition
Ratio perform_division(Ratio ratio1, Ratio ratio2) {
    Ratio div;
    if (ratio2.numerator < 0) {       //move minus sign from to denominator if ratio2 is a negative number.
        ratio2.numerator = -ratio2.numerator;
        ratio2.denominator = -ratio2.denominator;
    }
    int div_den = ratio1.denominator * ratio2.numerator;
    int div_num = ratio1.numerator * ratio2.denominator;
    int numerator_div = div_num/find_gcd(div_den, div_num);
    int denominator_div = div_den/find_gcd(div_den, div_num);
    div.numerator = numerator_div;
    div.denominator = denominator_div;
    if (div.denominator < 0) {
        div.numerator = - div.numerator;
        div.denominator = - div.denominator;
    }
    return div;
}

// convert_to_float function definition
double covert_to_float(Ratio ratio) {
    double num = round(static_cast<double>(ratio.numerator) / static_cast<double>(ratio.denominator) * 100) / 100;
    return num;
}

int main() {
    std::cout << "Rational Number\n" << endl;
    
    char choice = 'y';
    while (tolower(choice) == 'y'){
        string input1;
        string p1;
        string q1;
        Ratio ratio1;
        bool valid_ratio = false;
        while (!valid_ratio) {
            input1 = get_input();
            if (!validate_format(input1, valid_ratio, p1, q1, ratio1)) {
                cout << "Invalid ratioal number. Try again!\n";
            }
        }
        
        string input2;
        string p2;
        string q2;
        Ratio ratio2;
        bool valid_ratio2 = false;
        while (!valid_ratio2) {
            input2 = get_input();
            if (!validate_format(input2, valid_ratio2, p2, q2, ratio2)) {
                cout << "Invalid ratioal number. Try again!\n";
            }
        }
        
        // display results
        cout << fixed << setprecision(2);
        // display original valid rational numbers
        cout << endl;
        cout << "a. Rational number 1: " << ratio1.numerator << "/" << ratio1.denominator;
        if (reduce_form(ratio1).denominator == 1){
            cout << " (" << reduce_form(ratio1).numerator << ")" << endl;
        }
        else if (reduce_form(ratio1).denominator != 1){
            cout << " (" << reduce_form(ratio1).numerator << "/" << reduce_form(ratio1).denominator << ")" << endl;
        }
        
        cout << "   Rational number 2: " << ratio2.numerator << "/" << ratio2.denominator;
        if (reduce_form(ratio2).denominator == 1){
            cout << " (" << reduce_form(ratio2).numerator << ")" << endl;
        }
        else if (reduce_form(ratio2).denominator != 1){
            cout << " (" << reduce_form(ratio2).numerator << "/" << reduce_form(ratio2).denominator << ")" << endl;
        }
        
        // display original rational numbers in floating-point format
        double num1 = covert_to_float(ratio1);
        double num2 = covert_to_float(ratio2);
        cout << "b. Rational number 1 in decimal: " << num1 << endl;
        cout << "   Rational number 2 in decimal: " << num2 << endl;
        
        // convert original fractions to reduced form
        ratio1 = reduce_form(ratio1);
        ratio2 = reduce_form(ratio2);
        
        // addition
        cout << endl;
        if (perform_addition(ratio1, ratio2).denominator == 1) {
            cout << "c. Addition result: " << perform_addition(ratio1, ratio2).numerator << endl;
        }
        else if (perform_addition(ratio1, ratio2).denominator != 1) {
            double fraction_add  = static_cast<double>(perform_addition(ratio1, ratio2).numerator) / static_cast<double>(perform_addition(ratio1, ratio2).denominator);
            cout << "c. Addition result: " << perform_addition(ratio1, ratio2).numerator << "/" << perform_addition(ratio1, ratio2).denominator;
            cout << " (" << round(fraction_add * 100) / 100 << ")" << endl;
        }
        
        // subtraction
        if (perform_subtraction(ratio1, ratio2).denominator == 1) {
            cout << "d. Subtraction result: " << perform_subtraction(ratio1, ratio2).numerator << endl;
        }
        else if (perform_subtraction(ratio1, ratio2).denominator != 1){
            double fraction_sub  = static_cast<double>(perform_subtraction(ratio1, ratio2).numerator) / static_cast<double>(perform_subtraction(ratio1, ratio2).denominator);
            cout << "d. Subtraction result: " << perform_subtraction(ratio1, ratio2).numerator << "/" << perform_subtraction(ratio1, ratio2).denominator;
            cout << " (" << round(fraction_sub * 100) / 100 << ")" << endl;
        }
        
        // multiplication
        if (perform_multiplication(ratio1, ratio2).denominator == 1) {
            cout <<  "e. Multiplication result: " << perform_multiplication(ratio1, ratio2).numerator << endl;
        }
        else if (perform_multiplication(ratio1, ratio2).denominator != 1) {
            double fraction_mul  = static_cast<double>(perform_multiplication(ratio1, ratio2).numerator) / static_cast<double>(perform_multiplication(ratio1, ratio2).denominator);
            cout << "e. Multiplication result: " << perform_multiplication(ratio1, ratio2).numerator << "/" << perform_multiplication(ratio1, ratio2).denominator;
            cout << " (" << round(fraction_mul * 100) / 100 << ")" << endl;
        }
        
        // division
        if (perform_division(ratio1, ratio2).denominator == 1 ) {
            cout << "f. Division result: " << perform_division(ratio1, ratio2).numerator << endl;
        }
        else if (perform_division(ratio1, ratio2).denominator != 1 ){
            double fraction_div  = static_cast<double>(perform_division(ratio1, ratio2).numerator) / static_cast<double>(perform_division(ratio1, ratio2).denominator);
            cout << "f. Division result: " << perform_division(ratio1, ratio2).numerator << "/" << perform_division(ratio1, ratio2).denominator;
            cout << " (" << round(fraction_div * 100) / 100 << ")" << endl;
        }
        

        // prompt user to continuously run the programe
        cout << endl << "Run again (y/n)? ";
        cin >> choice;
        cin.ignore();
        cout << endl;
    }
    // display programmer name
    cout << "Programer: Celine Wang\n";
    cout << "Goodbye! Press <Enter> key to ending the program..." << endl;
    
    return 0;
}
