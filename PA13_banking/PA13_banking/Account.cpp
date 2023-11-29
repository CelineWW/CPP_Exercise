//
//  Account.cpp
//  PA13_banking
//
//  Created by Celine Wang on 11/28/23.
//
#include "Account.h"
#include <string>
#include <iostream>
using namespace std;

//Account::Account(int customer_id_param, string name_param, string title_param, string ssn_param, double balance, double interest_rate){
//    customer_id = customer_id_param;
//    set_name(name_param);
//    set_title(title_param);
//    set_ssn(ssn_param);
//};

Account::Account(int customer_id_param, string name, string title, string ssn, double balance, double interest_rate){
    customer_id = customer_id_param;
    set_name();
    set_title();
    set_ssn();
};


void Account::set_name(){
    string name_param;
    cout << "Enter your full name: ";
    getline(cin, name_param);
    cout << endl;
    name = name_param;
}

void Account::set_title(){
    string title_param;
    cout << "Enter your title(Mr., Mrs., Ms., Dr.) : ";
    cin >> title_param;
    cout << endl;
    title = title_param;
}

void Account::set_ssn(){
    string ssn_param;
    cout << "Enter your SSN : ";
    cin >> ssn_param;
    cout << endl;
    ssn = ssn_param;
}

void display_menu() {
    cout << endl << endl;
    cout << "---------------------------------------------------------------------------\n\n";
    cout << "                          Bank Services Menu                               \n";
    cout << "                          ------------------                               \n";
    cout << "                          1) Checking Account                              \n";
    cout << "                          2) Savings Account                               \n";
    cout << "                          3) End of Services                               \n\n";
}

void display_activity_menu() {
    cout << "                          Account Activities                               \n";
    cout << "                          ==================                               \n";
    cout << "                          a) --- Deposit ---                               \n";
    cout << "                          b) --- Withdraw---                               \n";
    cout << "                          c) --- Transfer---                               \n";
    cout << "                          d) --- Balance ---                               \n";
    cout << "                          e)  Personal Check                               \n";
    cout << "                          f) --- Interest---                               \n";
    cout << "                          g) ----  Done ----                               \n\n";
}

//Account {
//protected:
//    string name;
//    string title;
//    string ssn;
//    double balance;
//    double interest_rate;
//private:
//    int customer_id;
//
//public:
//    Account (string name = "", string title = "", string ssn = "");
//    void set_id(int);
//    int get_id() const { return customer_id; }
//
//    void set_name(string);
//    string get_name() const { return name; }
//
//    void set_title(string);
//    string get_title() const { return title; }
//
//
//    void deposit(double);
//    double calculate_interest();
//    double get_balance() const {return balance; }
//
//
//    // virtual function
//    virtual void withdraw(double);
//    virtual void transfer(double);
//};
