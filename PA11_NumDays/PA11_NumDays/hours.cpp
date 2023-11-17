//
//  hours.cpp
//  PA11_NumDays
//
//  Created by Celine Wang on 11/16/23.
//

#include "hours.h"
#include <iostream>

using namespace std;

//functions definitions
void Hours::set_hours(int hours_param = 0) {
    hours = hours_param;
}

int Hours::get_hours() const {
    return hours;
}

double Hours::get_days() const {
    return static_cast<double>(hours)/8;
}

// operators definition
Hours Hours::operator+ (const Hours& right) {
    Hours h;
    h.set_hours(hours + right.hours);
    return h;
}

Hours Hours::operator- (const Hours& right) {
    Hours h;
    h.set_hours(hours - right.hours);
    return h;
}

Hours Hours::operator++ () {
    ++hours;
    return *this;
}

Hours Hours::operator-- () {
    --hours;
    return *this;
}

Hours Hours::operator++ (int unused_param) {
    Hours temp = *this;
    ++hours;
    return temp;
}

Hours Hours::operator-- (int unused_param) {
    Hours temp = *this;
    --hours;
    return temp;
}

istream& operator>> (istream& in, Hours& h){
    while (true) {
        cout << "Enter the number of work hours: ";
        in >> h.hours;
        if (in.fail()){
            cout << "Invaild! Work hours must be an integer.\n\n";
            in.clear();
            in.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else {
            break;
        }
    }
    return in;
}

ostream& operator<< (ostream& out, const Hours& h) {
    out << h.get_days() << " days.\n";
    return out;
}

