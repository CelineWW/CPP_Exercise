//
//  finance.h
//  ch14_ex1_future_value
//
//  Created by Celine Wang on 11/16/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef finance_h
#define finance_h

class Finance {
public:
    Finance () {};

    // declare static functions
    static double calculate_future_value(double monthly_investment,
            double yearly_interest_rate, int years);
};

#endif /* finance_h */
