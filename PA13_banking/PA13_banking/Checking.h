//
//  Checking.h
//  PA13_banking
//
//  Created by Celine Wang on 11/28/23.
//

#ifndef Checking_h
#define Checking_h

#include <iostream>
#include "Account.h"
using namespace std;

// add member:
// service charge: $5
// checking charge: $0.1
// bounced check charge: $15

// member constructor:
// interest rate: 2.5%

// virtual member function:
// withdraw condition: check < balance, bounced check charge
// checking charge: $0.1 per check, but 1st time free

class Checking : public Account {
private:
    const double service_fee = 5.00;
    const double checking_fee = 0.10;
    const double bounced_fee = 15.00;
    
    
public:
    


    
    
    
    void display_activity_menu() {
        cout << endl << endl;
        cout << "---------------------------------------------------------------------------\n\n";
        cout << "                            *** Checkings ***                                \n";
        Account::display_activity_menu();
    }
};
#endif /* Checking_h */
