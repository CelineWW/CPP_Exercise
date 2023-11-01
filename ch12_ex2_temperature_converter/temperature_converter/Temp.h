//
//  Temp.h
//  ch12_ex2_temperature_converter
//
//  Created by Celine Wang on 11/1/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef Temp_h
#define Temp_h
class Temp {
private:
    double fahrenheit;
    double celsius;
public:
    Temp();
    double get_fahrenheit() const;
    double get_celsius() const;
    void set_fahrenheit(double);
    void set_celsius(double);
};

#endif /* Temp_h */
