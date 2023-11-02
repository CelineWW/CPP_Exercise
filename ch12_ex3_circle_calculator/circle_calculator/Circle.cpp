//
//  Circle.cpp
//  ch12_ex3_circle_calculator
//
//  Created by Celine Wang on 11/1/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#include "Circle.h"
#include <cmath>
using std::pow;

double Circle::get_diameter() {
    double d = radius * 2;
    return d;
}

double Circle::get_circumference() {
    double c = pi * radius * 2;
    c = round(c * 10)/ 10;
    return c;
}

double Circle::get_area() {
    double a = pi * pow(radius, 2.0);
    a = round(a * 10)/ 10;
    return a;
}
