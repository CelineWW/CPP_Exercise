//
//  Date.h
//  PA9_What's_the_Date
//
//  Created by Celine Wang on 11/1/23.
//

#ifndef Date_h
#define Date_h
#include <string>

class Date {
//private data members
private:
    int month;
    int day;
    int year;
//public construtor and member function declarations
public:
    Date(int month = 0, int day = 0, int year = 0);
    void set_year(int);
    void set_month(int);
    void set_day(int);
    
    int get_year() const;
    int get_month() const;
    int get_day() const;
};

#endif /* Date_h */
