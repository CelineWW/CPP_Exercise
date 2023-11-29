//
//  Account.h
//  PA13_banking
//
//  Created by Celine Wang on 11/28/23.
//

#ifndef Account_h
#define Account_h

#include <string>
using std::string;

class Account {
protected:
    string name;
    string title;
    string ssn;
    double balance;
    double interest_rate;
private:
    int customer_id;

public:
    Account (int customer_id = 0, string name = "", string title = "", string ssn = "", double balance = 0, double interest_rate = 0);

    int get_id() const { return customer_id; }
//    void set_name(string);
    void set_name();
    string get_name() const { return name; }
    
//    void set_title(string);
    void set_title();
    string get_title() const { return title; }
    
//    void set_ssn(string);
    void set_ssn();
    string get_ssn() const { return ssn; }
    
    void deposit(double);
    double calculate_interest();
    double get_balance() const {return balance; }
    
    void display_menu();
    
    // virtual function
    static void display_activity_menu();
    virtual void withdraw(double);
    virtual void transfer(double);
};

#endif /* Account_h */
