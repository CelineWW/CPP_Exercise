# C++ Programming
Practice C++ programming language.


## PA1 Rice Field

Write a C++ program that can calculate and display the area and perimeter of any rectangle whose size was entered at the run time of the program.

![PA1_rice_field_console](https://github.com/CelineWW/CPP_Exercise/blob/main/PA1_rice_field/PA1_rice_field_console.png)

## PA2 Filling A Pool

Write a C++ program that allows the user to enter a pool's length, width, and depth, in feet measurement. The program will then calculate the pool's volume, the volume of water needed to fill the pool with the water level 3 inches below the top, and the final cost of filling the pool, including the one-time fee $100.00.  
Values entered for the pool sizes could be any postive real numbers.
Because filling a pool/pond with water requires much more water than normal usage, your local city charges a special rate of $0.77 per cubic foot of water to fill a pool/pond. In addi!on, it charges a one-!me fee of $100.00 for filling. If the pool can’t be filled, the cost must be $0.

![filling_a_pool_test11](https://github.com/CelineWW/CPP_Exercise/blob/main/PA2_filling_a_pool/filling_a_pool_test11.png)

## PA3 Metric English Coversion

Write a C++ menu-driven program that can convert between the Metric and English systems.
The conversion should exactly cover the following fields and sub-fields:
1. Distance:
▪ Inch to centimeter and reverse order.
(1 inch = 2.54 centimeter)
▪ Foot to meter and reversed order.
(1 foot = 0.3048 meter)
▪ Mile to kilometer and reversed order.
(1 mile = 1.609 kilometer)
2. Weight:
▪ Ounce to the gram and reversed order.
(1 ounce = 28.349 gram)
▪ Pound to kilogram and reversed order.
(1 pound = 0.453 kilogram)
3. Volume:
▪ Ounce to milliliter and reversed order.
(1 ounce = 29.573 milliliter)
▪ Gallon to liter and reversed order.
(1 gallon = 3.785 liter)
▪ Quart to liter and reversed order.
(1 quart = 0.946 liter)
4. Pressure:
▪ PSI to Kg/cm and reversed order.
(1 PSI = 0.07 kg/cm)
5. Temperature
▪ Fahrenheit to Celsius and reversed
order.
[Celsius = (5 / 9) × (Fahrenheit – 32)]
Input validation:
Don’t accept negative values entered for all conversions, except for temperature conversion.

Menu-Driven Program is a program that obtains input from a user by displaying a list of options, known as the menu,
from which the user indicates his/her choice. From a choice, it might lead to a sub-menu with another nested set of
choices. After being done and exiting a choice from the sub-menu, it must go back to the main menu. And only exiting
from the main menu will end the program. With a choice, there could be several nested sub-menus. So, when a sub-
menu is done it must go back to its outer menu. (2 points deducted for NOT USING the pattern)

![PA3_Metric_English_coversion_code.png](https://github.com/CelineWW/CPP_Exercise/blob/main/PA3_metric_english_conversion/PA3_Metric_English_coversion_code.png)

![PA3_Metric_English_coversion_console3.png](https://github.com/CelineWW/CPP_Exercise/blob/main/PA3_metric_english_conversion/PA3_Metric_English_coversion_console3.png)

## PA4 Student List
A teacher wants to list all her students’ full names, considering only for the two students at the front and the end of the list that must be in alphabetical order. That meant the student at the top and at the end of the list will be set alphabetically according to their full name.

The list of names could be either read in from an external text file or entered from the keyboard, one full name at a time. Once all the names have been read in, the program reports which name should be at the top of the list, and which name should be at the end of the list, in alphabetical order of their names. Not using array, or vector.

Also, the list of names must be displayed on the screen, together with the original order that their names were entered, for the teacher to check back of her record.

Allow your program to run continuously as often as the user wishes. The number of students must be in the range of 5 to 30, inclusively. 
Allow the filename, which has more than one word, entered at the run time. The program  accept the attached text file.
If the names were entered from the keyboard, all the read-in names must be recorded in the order that they were entered into an external text file.

![PA4_student_list_code_2.png](https://github.com/CelineWW/CPP_Exercise/blob/main/PA4_student_list/PA4_student_list_code_2.png)

![PA4_student_list_console_3.png](https://github.com/CelineWW/CPP_Exercise/blob/main/PA4_student_list/PA4_student_list_console_3.png)

![PA4_student_list_console_1.png](https://github.com/CelineWW/CPP_Exercise/blob/main/PA4_student_list/PA4_student_list_console_1.png)

## PA5 Rainfall

This program reads rainfall values for each of the 12 months in a year, from an external text file (sample resources attached) starting with January and ending with December.
The program then calculates and displays on screen the total rainfall for the year, the average monthly rainfall, and the highest and lowest amounts of rainfall, with their corresponding month name.
All read-in values and their intended month names must be displayed for checking, with a note of the largest or smallest next to the corresponding value.
The program run continuously checking with any other data files unless user wants to stop. 


![PA5_Rainfall_code2.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA5_Rainfall/PA5_Rainfall_code2.png)
![PA5_Rainfall_console1.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA5_Rainfall/PA5_Rainfall_console1.png)
![PA5_Rainfall_console2.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA5_Rainfall/PA5_Rainfall_console2.png)

## PA6 Open Box
An open box is made from a piece of rectangular cardboard by cutting out squares of equal size from the four corners and bending up the sides. What size should the squares be to obtain a box with the largest possible volume? The length and width of the cardboard are given by the user.
This program uses a function-driven style to solve this problem.

![open box pic.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA6_open_box/open%20box%20pic.png)

![PA6_Open_Box_code.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA6_open_box/PA6_Open_Box_code.png)

![PA6_Open_Box_console.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA6_open_box/PA6_Open_Box_console.png)

## PA7 Digital Clock
There is a belief that if at any time a person looks at a digital clock (with standard time), and if the digits of the hours and minutes add up equally for the two parts, it is a good time, or a lucky time that will predict or is a forecast that whatever you were thinking/ wishing at that instant, might come true. For example, 12:03, 12:30, 4:04, 4:13, or 4:31 are considered as lucky times. (Note: In that belief, all other times should be viewed as “normal time”.)
Besides that, three other special times also carry specific meanings:
- If all digits are the same, like 4:44, 5:55, or 11:11. It predicts you might win a lottery.
- If all digits are in ascending order, like 3:45, 4:56, or 12:34. It predicts all dreams will come true.
- If all digits are in descending order, like 3:21, or 6:54. It predicts a challenging road is ahead.

This program that asks the user to enter a time in the format HH:MM or H:MM(the format is strictly required). Any junk values are rejected. Allow program continuously run as long as the user wishes to test it at other times.

![PA7_digital_clock_code1.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA7_digital_clock/PA7_digital_clock_code1.png)
![PA7_digital_clock_code2.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA7_digital_clock/PA7_digital_clock_code2.png)
![PA7_digital_clock_console.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA7_digital_clock/PA7_digital_clock_console.png)

## PA8 Rational Number

In mathematics, a rational number is any number that can be expressed as the quotient or fraction p/q of two integers, p, and q, with the denominator q not equal to zero. Since q may be equal to 1, every integer is a rational number.

Define a structure that can represent a rational number. Perform all the following operations with any two valid rational numbers entered at the keyboard, in the format p/q of two integers . If there is ONLY 1 integer entered, it is accepted as the numerator, and consequently, the denominator will be 1 automatically.
- Adding two rational numbers. The result is stored in reduced form. 
- Subtracting two rational numbers. The result is stored in reduced form. 
- Multiplying two rational numbers. The result is stored in reduced form. 
- Dividing two rational numbers. The result is stored in reduced form. 
- Printing rational numbers in the form n/d, where n is the numerator and d is the denominator.
- Printing Rational numbers in floating-point (2 digits after the decimal point) format.

The program runs continuously until the user wants to quit it.
![PA8_rational_number_code_1](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_code_1.png)
![PA8_rational_number_code_2](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_code_2.png)
![PA8_rational_number_code_3](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_code_3.png)
![PA8_rational_number_code_4](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_code_4.png)
![PA8_rational_number_console2](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_console2.png)
![PA8_rational_number_console3](https://github.com/CelineWW/CPP_Programming/blob/main/PA8_Rational_Number/PA8_rational_number_console3.png)

## PA9 What's the Date
use the class Date that asks for a date entered at the keyboard, with the format mm/dd/yyyy. And then, the program will display the date in the following four forms, if it is valid:
- 12/25/2012 (US)
- December 25, 2012 (US expanded)
- 25 December 2012 (US Military)
- 2012-12-25 (International)
Reject all invalid date input. Ask for another date. Leap year is checked.
Allow program to run continuously as long as the user wishes to test with any other date entered.

```
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
```
![PA9_Up_to_date_Code_9.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA9_What's_the_Date/PA9_Up_to_date_Code_9.png)
![PA9_Up_to_date_run1.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA9_What's_the_Date/PA9_Up_to_date_run1.png)
![PA9_Up_to_date_run2.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA9_What's_the_Date/PA9_Up_to_date_run2.png)


## PA10 Characters Counting
This program reads a string of characters (case sensitive) entered from the keyboard, and then the program will count and list all digits, vowels, and consonants found in the string. 

![PA10_Characters_Counting_Code.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA10_characters_counting/PA10_Characters_Counting_Code.png)
![PA10_Characters_Counting_Console.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA10_characters_counting/PA10_Characters_Counting_Console.png)

## PA11 NumDays
Design a class called NumDays. The class’s purpose is to store an integer value that represents the number of work hours and convert it to the number of days. The conversion is specifically defined as 8 work hours equal to 1 day. 
The class have :
- a constructor that accepts an integer for the number of work hours
- member functions for storing and retrieving the hours and days. 
- and the following overloaded operators:
    - \+ Addition operator: when two NumDays objects are added together, the overloaded + operator returns the sum of the two objects’ hours members.
    - \- Subtraction operator: when one NumDays object is subtracted from another, the overloaded - operator returns the difference between the two objects’ hours members.
    - \++ Prefix and postfix increment operators. These two operators should increment the number of hours stored in the object. When incremented, the number of days is automatically recalculated.
    - \-- Prefix and postfix decrement operators. These two operators should decrement the number of hours stored in the object. When decremented, the number of days is automatically recalculated.

    ```
    class NumDays {
    private:
        int hours;
        double days;
        
    public:
        NumDays(int hours_param = 0) {
            hours = hours_param;
            days = hours_param / 8;
        }
        
        // function declarations
        void set_hours(int hours_param);
        int get_hours() const;
        double get_days() const;
        
        
        // operator declarations
        NumDays operator+ (const NumDays& right);
        NumDays operator- (const NumDays& right);
        NumDays operator++ ();
        NumDays operator-- ();
        NumDays operator++ (int unused_param);
        NumDays operator-- (int unused_param);
        
        friend std::ostream& operator<< (std::ostream&, const NumDays&);
        friend std::istream& operator>> (std::istream&, NumDays&);
    };
    ```
    ![PA11_NumDays_Run1.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA11_NumDays/PA11_NumDays_Run1.png)
    ![PA11_NumDays_main.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA11_NumDays/PA11_NumDays_main.png)
    ![]


## PA12 Three Strikes and You Are Out
- Game Introduction

    Three Strikes is a popular game played for winning a car.
    There are five chips, each with one of the digits of the price of the car, and three chips with X’s (strikes).
    All the digits of the price are different and unique (only one of its kind).
    The eight chips are placed in a bag. The contestant picks chips from the bag one by one.
    If the contestant picks a digit, she/he must guess which position in the price of the car the digit belongs.
    If she/he is right, the digit lights up on the board, and the digit is discarded from the bag. If not, the digit is placed back in the bag.
    If the contestant should pick a strike, the strike is removed from the bag.
    The contestant wins if she/he fills out the price of the car before picking out all three strikes. 

- About this program
    The object oriented program implements the game Three Strikes and You Are Out.
    1. Player can not pick a digit that was not in the price of the car. It's impossible to do that.
    2. After each pick, the number of strikes hit and the number of digits correctly placed is shown on the screen.
    3. There is a panel displayed to show the process of the game, locating the digits that were answered correctly.
    4. In the end, regardless of losing or winning the game, the price of the car is displayed on the screen.
    5. Note: for the purpose of debugging, the price is revealed in advance at the beginning before the game starts. 

![PA12_run1.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA12_three_strikes/PA12_run1.png)
![PA12_run4.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA12_three_strikes/PA12_run4.png)
![PA12_run6.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA12_three_strikes/PA12_run6.png)

## PA13 Banking
This program create a superclass *Account* and subclass *Checking* and *Saving* to allow customer to create *Checking* and *Saving* account with a unique ID. 
Some of member functions are inheritance and virtual functions.
- Five general types of banking transactions for both accounts, Checking and Savings: 
    - withdraw
    - deposit
    - calculate interest 
    - balance
    - transfer funds (between the two accounts, from Checking to Savings and vice versa).
- Savings restrictions:
    - Become inactive if the balance falls less than $25, and under such a situation, no more withdrawals may be allowed.
    - A $1 charge for each transfer fund (to the Checking account), but not for the first transfer, which is free.
    - The monthly interest rate is 3.75% based on the current balance, no new interest if not modified.
-   Checking restrictions:
    -   A monthly service charge is $5 (automatically charged when the Checking
    account was opened).
    -   10 cents are charged for each written check, but not for the first check, which is free. A $15 charge for each bounced check (not enough funds).
    - The monthly interest rate is 2.5% based on the current balance, no new interest if not modified.

![02.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/02.png)
![03.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/03.png)
![05.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/05.png)
![06.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/06.png)
![07.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/07.png)
![09.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/09.png)
![10.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA13_banking/PA13_banking_Run/10.png)

## PA14 Number Patterns
- The program display first 20 numbers with a pattern accociate with ordinal number. 
- Then it allows user to enter a order number. The number follows the pattern is shown on the console.
- To allow extremely large number input, *long long* data type is used to store pattern number.

![PA14_number_patterns_Code_3.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA14_number_patterns/PA14_number_patterns_Code_3.png)
![PA14_number_patterns_Run.png](https://github.com/CelineWW/CPP_Programming/blob/main/PA14_number_patterns/PA14_number_patterns_Run.png)

