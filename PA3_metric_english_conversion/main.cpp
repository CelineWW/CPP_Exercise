//
//  main.cpp
//  PA3_Metric_English_coversion
//
//  Created by Celine Wang on 9/9/23.
//

#include <iostream>

using namespace std;


int main() {
    // Title
    cout << "Metric English Conversion\n";
    cout << "\n1.Distance" << endl;
    cout << "2.Weight" << endl;
    cout << "3.Volume" << endl;
    cout << "4.Pressure" << endl;
    cout << "5.Temperature" << endl;
    
    char choice = 'y';
    while (choice == 'y' || choice == 'Y'){
        
        //Main Menu
        int field;
        cout << "Choose a coversion from the above fields (1-5):";
        cin >> field;
        
        while (field >= 1 && field <= 5 ) {
            
            // Main Menu
            cout << "\n1.Distance" << endl;
            cout << "2.Weight" << endl;
            cout << "3.Volume" << endl;
            cout << "4.Pressure" << endl;
            cout << "5.Temperature" << endl;
            cout << "Choose a coversion from the above fields (1-5):";
            cin >> field;
            // 1.distance field
            while (field == 1){
                int subfield;
                cout << "\n1. inch <-> centmeter" << endl;
                cout << "2. foot <-> meter" << endl;
                cout << "3. mile <-> kilometer" << endl;
                cout << "Choose a coversion from the above subfields (1-3)";
                cout << "\n<Or other number back to main menu>:";
                cin >> subfield;
                
                // 1.1 distance inch <-> centmeter subfield
                if (subfield == 1){
                    char unit;
                    cout << "inch(i) or centmeter(c): ";
                    cin >> unit;
                    switch (unit){
                            // inch -> centmeter
                        case 'i':
                            double number1;
                            cout << "\nEnter your number of inches: ";
                            cin >> number1;
                            // inch -> centmeter positive calculation
                            if (number1 >= 0){
                                double inch_to_cm;
                                inch_to_cm = number1 * 2.54;
                                inch_to_cm = round(inch_to_cm * 1000)/1000;
                                cout << "Coverted result:" << inch_to_cm << "centmeters";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            
                            // centmeter -> inch
                        case 'c':
                            double number2;
                            cout << "\nEnter your number of centmeters: ";
                            cin >> number2;
                            //centmeter -> inch positive calculation
                            if (number2 >= 0){
                                double cm_to_inch;
                                cm_to_inch = number2 / 2.54;
                                cm_to_inch = round(cm_to_inch * 1000)/1000;
                                cout << "Coverted result:" << cm_to_inch << "inches" ;
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                // 1.2 distance foot <-> meter
                else if (subfield == 2) {
                    char unit;
                    cout << "foot(f) or meter(m): ";
                    cin >> unit;
                    switch (unit){
                            // foot -> meter
                        case 'f':
                            double number1;
                            cout << "\nEnter your number of feet: ";
                            cin >> number1;
                            // foot -> meter positive calculation
                            if (number1 >= 0){
                                double ft_to_m;
                                ft_to_m = number1 * 0.3048;
                                ft_to_m = round(ft_to_m * 1000)/1000;
                                cout << "Coverted result:" << ft_to_m << "meters";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            // meter -> foot
                        case 'm':
                            double number2;
                            cout << "\nEnter your number of meters: ";
                            cin >> number2;
                            // meter -> foot positive calculation
                            if (number2 >= 0){
                                double m_to_ft;
                                m_to_ft = number2 / 0.3048;
                                m_to_ft = round(m_to_ft * 1000)/1000;
                                cout << "Coverted result:" << m_to_ft << "feet";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                // 1.3 distance mile <-> kilometer
                else if (subfield == 3) {
                    char unit;
                    cout << "mile(m) or kilometer(k): ";
                    cin >> unit;
                    switch (unit){
                            // mile -> kilometer
                        case 'm':
                            double number1;
                            cout << "\nEnter your number of miles: ";
                            cin >> number1;
                            // mile -> kilometer positive calculation
                            if (number1 >= 0){
                                double mile_to_km;
                                mile_to_km = number1 * 1.609;
                                mile_to_km = round(mile_to_km * 1000)/1000;
                                cout << "Coverted result:" << mile_to_km << "kilometers";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            // kilometer -> mile
                        case 'k':
                            double number2;
                            cout << "\nEnter your number of kilometers: ";
                            cin >> number2;
                            // kilometer -> mile positive calculation
                            if (number2 >= 0){
                                double km_to_mile;
                                km_to_mile = number2 / 1.609;
                                km_to_mile = round(km_to_mile * 1000)/1000;
                                cout << "Coverted result:" << km_to_mile << "miles";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                else {
                cout << "\nGo back to main menu\n";
                break;
                }
            }
            // 2. weight field
            while (field == 2){
                int subfield;
                cout << "\n1. ounce <-> gram" << endl;
                cout << "2. pound <-> kilogram" << endl;
                cout << "Choose a coversion from the above subfields (1-2)";
                cout << "\n<Or other number back to main menu>:";
                cin >> subfield;
                
                // 2.1 weight ounce <-> gram subfield
                if (subfield == 1){
                    char unit;
                    cout << "ounce(o) or gram(g): ";
                    cin >> unit;
                    switch (unit){
                            // ounce -> gram
                        case 'o':
                            double number1;
                            cout << "\nEnter your number of ounces: ";
                            cin >> number1;
                            // ounce -> gram positive calculation
                            if (number1 >= 0){
                                double oz_to_g;
                                oz_to_g = number1 * 28.349;
                                oz_to_g = round(oz_to_g * 1000)/1000;
                                cout << "Coverted result:" << oz_to_g << "grams";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            // gram -> ounce
                        case 'g':
                            double number2;
                            cout << "\nEnter your number of grams: ";
                            cin >> number2;
                            // gram -> ounce positive calculation
                            if (number2 >= 0){
                                double g_to_oz;
                                g_to_oz = number2 / 28.349;
                                g_to_oz = round(g_to_oz * 1000)/1000;
                                cout << "Coverted result:" << g_to_oz << "ounces" ;
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to main menu";
                    continue;
                }
                // 2.2 weight pound <-> kilogram
                else if (subfield == 2) {
                    char unit;
                    cout << "pound(p) or kilogram(k): ";
                    cin >> unit;
                    switch (unit){
                            // pound -> kilogram
                        case 'p':
                            double number1;
                            cout << "\nEnter your number of pounds: ";
                            cin >> number1;
                            // pound -> kilogram positive calculation
                            if (number1 >= 0){
                                double lb_to_kg;
                                lb_to_kg = number1 * 0.453;
                                lb_to_kg = round(lb_to_kg * 1000)/1000;
                                cout << "Coverted result:" << lb_to_kg << "kilograms";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            // kilogram-> pound
                        case 'k':
                            double number2;
                            cout << "\nEnter your number of kilograms: ";
                            cin >> number2;
                            if (number2 >= 0){
                                double kg_to_lb;
                                kg_to_lb = number2 / 0.453;
                                kg_to_lb = round(kg_to_lb * 1000)/1000;
                                cout << "Coverted result:" << kg_to_lb << "pounds";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                else {
                cout << "\nGo back to main menu\n";
                break;
                }
            }
            // 3.volume field
            while (field == 3){
                int subfield;
                cout << "\n1. ounce <-> mililiter" << endl;
                cout << "2. gallon <-> liter" << endl;
                cout << "3. quart <-> liter" << endl;
                cout << "Choose a coversion from the above subfields (1-3)";
                cout << "\n<Or other number back to main menu>:";
                cin >> subfield;
                
                // 3.1 volume ounce <-> mililiter subfield
                if (subfield == 1){
                    char unit;
                    cout << "ounce(o) or mililiter(m): ";
                    cin >> unit;
                    switch (unit){
                            // ounce -> mililiter
                        case 'o':
                            double number1;
                            cout << "\nEnter your number of ounces: ";
                            cin >> number1;
                            // ounce -> mililiter positive calculation
                            if (number1 >= 0){
                                double oz_to_ml;
                                oz_to_ml = number1 * 29.573;
                                oz_to_ml = round(oz_to_ml * 1000)/1000;
                                cout << "Coverted result:" << oz_to_ml << "mililiters";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            
                            //  mililiter -> ounce
                        case 'm':
                            double number2;
                            cout << "\nEnter your number of mililiters: ";
                            cin >> number2;
                            // mililiter -> ounce positive calculation
                            if (number2 >= 0){
                                double ml_to_oz;
                                ml_to_oz = number2 / 29.573;
                                ml_to_oz = round(ml_to_oz * 1000)/1000;
                                cout << "Coverted result:" << ml_to_oz << "ounces" ;
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                // 3.2 volume gallon <-> liter
                else if (subfield == 2) {
                    char unit;
                    cout << "gallon(g) or liter(l): ";
                    cin >> unit;
                    switch (unit){
                            // gallon -> liter
                        case 'g':
                            double number1;
                            cout << "\nEnter your number of gallons: ";
                            cin >> number1;
                            // gallon -> liter positive calculation
                            if (number1 >= 0){
                                double gal_to_l;
                                gal_to_l = number1 * 3.785;
                                gal_to_l = round(gal_to_l * 1000)/1000;
                                cout << "Coverted result:" << gal_to_l << "liters";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            // liter -> gallon
                        case 'l':
                            double number2;
                            cout << "\nEnter your number of liters: ";
                            cin >> number2;
                            // liter -> gallon positive calculation
                            if (number2 >= 0){
                                double l_to_gal;
                                l_to_gal = number2 / 3.785;
                                l_to_gal = round(l_to_gal * 1000)/1000;
                                cout << "Coverted result:" << l_to_gal << "gallons";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub Menu";
                    continue;
                }
                // 3.3 volume quart <-> liter
                else if (subfield == 3) {
                    char unit;
                    cout << "quart(q) or liter(l): ";
                    cin >> unit;
                    switch (unit){
                            // quart -> liter
                        case 'q':
                            double number1;
                            cout << "\nEnter your number of quarts: ";
                            cin >> number1;
                            // quart -> liter positive calculation
                            if (number1 >= 0){
                                double qrt_to_l;
                                qrt_to_l = number1 * 0.946;
                                qrt_to_l = round(qrt_to_l * 1000)/1000;
                                cout << "Coverted result:" << qrt_to_l << "liters";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            //  liter-> quart
                        case 'l':
                            double number2;
                            cout << "\nEnter your number of liters: ";
                            cin >> number2;
                            // liter-> quart positive calculation
                            if (number2 >= 0){
                                double l_to_qrt;
                                l_to_qrt = number2 / 0.946;
                                l_to_qrt = round(l_to_qrt * 1000)/1000;
                                cout << "Coverted result:" << l_to_qrt << "quarts";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to sub menu";
                    continue;
                }
                else {
                cout << "\nGo back to main menu\n";
                break;
                }
            }
                // 4. pressure field
                while (field == 4){
                    cout << "\nPSI <-> Kg/cm" << endl;
                    
                    // pressure PSI <-> Kg/cm
                    char unit;
                    cout << "PSI(p) or Kg/cm(k): ";
                    cin >> unit;
                    switch (unit){
                            // PSI -> Kg/cm
                        case 'p':
                            double number1;
                            cout << "\nEnter your number of PSIs: ";
                            cin >> number1;
                            // PSI -> Kg/cm positive calculation
                            if (number1 >= 0){
                                double p_to_k;
                                p_to_k = number1 * 0.07;
                                p_to_k = round(p_to_k * 1000)/1000;
                                cout << "Coverted result:" << p_to_k << "Kg/cm";
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                            
                            //  Kg/cm -> PSI
                        case 'k':
                            double number2;
                            cout << "\nEnter your number of Kg/cm: ";
                            cin >> number2;
                            // Kg/cm -> PSI positive calculation
                            if (number2 >= 0){
                                double k_to_p;
                                k_to_p = number2 / 0.07;
                                k_to_p = round(k_to_p * 1000)/1000;
                                cout << "Coverted result:" << k_to_p << "PSIs" ;
                                cout << endl;
                            } else {
                                cout << "The number can not be negative values." << endl;
                            }
                            break;
                        default :
                            cout << "Invalid input";
                    }
                    cout << "\nGo back to main menu\n";
                    break;
                }
                // 5. temperture field
            while (field == 5){
                cout << "\nFahrenheit <-> Celsius" << endl;
                
                // temperture Fahrenheit <-> Celsius
                char unit;
                cout << "Fahrenheit(f) or Celsius(c): ";
                cin >> unit;
                switch (unit){
                        // Fahrenheit -> Celsius
                    case 'f':
                        double number1;
                        cout << "\nEnter your number of Fahrenheit: ";
                        cin >> number1;
                        // Fahrenheit -> Celsius calculation
                        double f_to_c;
                        f_to_c = (number1 - 32) * (5 / 9);
                        f_to_c = round(f_to_c * 1000)/1000;
                        cout << "Coverted result:" << f_to_c << "Celsius";
                        cout << endl;
                        break;
                        
                        // Celsius -> Fahrenheit
                    case 'c':
                        double number2;
                        cout << "\nEnter your number of Celsius: ";
                        cin >> number2;
                        // Celsius -> Fahrenheit  calculation
                        double c_to_f;
                        c_to_f = (number2 * (9 / 5)) + 32;
                        c_to_f = round(c_to_f * 1000)/1000;
                        cout << "Coverted result:" << c_to_f << "Fahrenheit" ;
                        cout << endl;
                        break;
                    default :
                        cout << "Invalid input";
                }
                cout << "\nGo back to main menu\n";
                break;
            }
        }
            // ask user if continue
            cout << "Invaild field, the number must between 1 to 5.";
            cout << "\n\nContinue? (y/n): ";
            cin >> choice;
            cout << endl;
        }
        cout << "Bye!\n\n";
        return 0;
    }
