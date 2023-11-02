//
//  Circle.h
//  ch12_ex3_circle_calculator
//
//  Created by Celine Wang on 11/1/23.
//  Copyright © 2023 Mike Murach & Associates. All rights reserved.
//

#ifndef Circle_h
#define Circle_h

class Circle {
private:
    double radius;
    const double pi = 3.14159;
public:
    // inline function definitions
    Circle(double radius_param = 0.0) {
        radius = radius_param;
    };
    
    double get_radius() const {
        return radius;
    }
    
    void set_radius(double radius_param){
        radius = radius_param;
    }
    
    // function declarations
    double get_diameter();
    double get_circumference();
    double get_area();
    
};

#endif /* Circle_h */
