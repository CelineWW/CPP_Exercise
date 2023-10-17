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

![PA7_digital_clock_code1.png]()
![PA7_digital_clock_code2.png]()
![PA7_digital_clock_console.png]()