//
//  main.cpp
//  filling_a_pool
//
//  Created by Celine Wang on 9/5/23.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Title
    cout << "Filling A Pool Program\n\n";
    
    // Prompt user to enter pool demensions
    double length, width, depth;
    cout << "Enter pool length in feet: ";
    cin >> length;
    cout << "Enter pool width in feet: ";
    cin >> width;
    cout << "Enter pool depth in feet: ";
    cin >> depth;
    
    // Calculate the volume of the pool
    double pool_volume = round(length * width * depth * 100) /100;
    
    // Calculate the volume of filled water
    // less then 3 inches(0.25 feet) will not be filled
    double water_volume, filling_fee;
    if (length > 0 && width > 0 && depth > 0.25){
        water_volume = round(length * width * (depth - 0.25) * 100) /100;
        filling_fee = 100;
    }
    else {
        water_volume = 0.00;
        filling_fee = 0;
    }
    
    // Calculate the total cost
    double water_rate = 0.77;
    double cost = round((filling_fee + water_volume * water_rate) * 100 ) /100;
    
    // Display the result
    cout << "\nPool length :\t" << length
         << "\nPool width :\t" << width
         << "\nPool depth :\t" << depth
         << "\nPool Volume:\t" << pool_volume
         << "\nWater Volume:\t" << water_volume
         << "\nCost:\t\t\t" << "$" << cost;
    
    cout << "\n\nProgrammer: Celine Wang\n\n" << endl;
    
    return 0;
}
