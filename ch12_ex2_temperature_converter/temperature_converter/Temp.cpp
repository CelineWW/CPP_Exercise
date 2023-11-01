//
//  Temp.cpp
//  ch12_ex2_temperature_converter
//
//  Created by Celine Wang on 11/1/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#include "Temp.h"
#include <cmath>

Temp::Temp(){
    fahrenheit = 32.0;
    celsius = 0.0;
};

double Temp::get_fahrenheit() const {
    double f = round(fahrenheit * 10)/ 10;
    return f;
}

double Temp::get_celsius() const {
    double c = round(celsius * 10)/ 10;
    return c;
}

void Temp::set_fahrenheit(double fahrenheit_param) {
    fahrenheit = fahrenheit_param;
    celsius = (fahrenheit_param - 32.0) * 5.0 / 9.0;
}

void Temp::set_celsius(double celsius_param) {
    celsius = celsius_param;
    fahrenheit = celsius_param * 9.0 / 5.0 + 32.0;
}
