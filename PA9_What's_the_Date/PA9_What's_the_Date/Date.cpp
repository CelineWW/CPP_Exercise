//
//  Date.cpp
//  PA9_What's_the_Date
//
//  Created by Celine Wang on 11/1/23.
//

#include "Date.h"
#include <iostream>
using std::string;
using std::invalid_argument;

// Define object constructor
Date::Date(int month_param, int day_param, int year_param) {
    set_month(month_param);
    set_day(day_param);
    set_year(year_param);
}
// setter functions definition
void Date::set_year(int year_param) {
    year = year_param;
}

void Date::set_month(int month_param) {
        month = month_param;
}

void Date::set_day(int day_param) {
        day = day_param;
}
int Date::get_year() const {
    return year;
}
int Date::get_month() const {
    return month;
}
int Date::get_day() const {
    return day;
}
