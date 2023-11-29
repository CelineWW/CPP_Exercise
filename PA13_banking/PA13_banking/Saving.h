//
//  Saving.h
//  PA13_banking
//
//  Created by Celine Wang on 11/28/23.
//

#ifndef Saving_h
#define Saving_h

#include <iostream>
#include "Account.h"

using namespace std;

// add member:
// transfer charge: $1

// member constructor:
// interest rate: 3.75%

// virtual member function:
// withdraw condition: blance >= $25
// transfer charge: $1 per transfer, but 1st time free

class Savings : public Account {
private:
//    const double transfer_fee = 1.00;
//    const double withdraw_threshhold = 25.00;
    double transfer_fee;
    double withdraw_threshhold;
    
public:
    Savings(int customer_id = 0, string name = "", string title = "", string ssn = "", double balance = 0, double interest_rate = 0.375, const double transfer_fee = 1.00, const double withdraw_threshhold = 25.00):
    Account(customer_id, name, title, ssn, balance, interest_rate){
    }
    
    
    
    void display_activity_menu() {
        cout << endl << endl;
        cout << "---------------------------------------------------------------------------\n\n";
        cout << "                            *** Savings ***                                \n";
        Account::display_activity_menu();
    }

};

#endif /* Saving_h */
