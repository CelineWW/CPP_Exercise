//
//  main.cpp
//  PA15_list_of_employees
//
//  Created by Celine Wang on 12/7/23.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Employee.h"

using namespace std;

void display_title();
void display_menu();
void display_employees(const vector<Employee>&);
void read_file(string);

int main() {
    
    display_title();
    vector<Employee> employees;
    
    char read;
    char quit;
    cout << "Reuse existing data previously saved in external file (y/n)? ";
    cin >> read;
    cin.clear();
    if (read == 'y') {
        string input_file_name;
        ifstream input_file;
        cout << "Enter file name to read data: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, input_file_name);
        input_file.open(input_file_name);
        if (input_file) {
            cout << "All data were read back from file \"" << input_file_name << "\" successfully!\n";
            Employee emp;
            string emp_id;
            string emp_first_name;
            string emp_last_name;
            string emp_ssn;
            string emp_wage;
            string emp_department;
            string emp_day;
            string emp_month;
            string emp_year;
            
//            while (!input_file.eof()){
//                getline(input_file, emp_id, ' ');
//                getline(input_file, emp_first_name, ' ');
//                getline(input_file, emp_last_name,  ' ');
//                getline(input_file, emp_ssn, ' ');
//                getline(input_file, emp_wage, ' ');
//                getline(input_file, emp_department, ' ');
//                getline(input_file, emp_month, '/');
//                getline(input_file, emp_day, '/');
//                getline(input_file, emp_year);
            while (getline(input_file, emp_id, ' ') &&
                   getline(input_file, emp_first_name, ' ') &&
                   getline(input_file, emp_last_name,  ' ') &&
                   getline(input_file, emp_ssn, ' ') &&
                   getline(input_file, emp_wage, ' ') &&
                   getline(input_file, emp_department, ' ') &&
                   getline(input_file, emp_month, '/') &&
                   getline(input_file, emp_day, '/') &&
                   getline(input_file, emp_year)){
                
                
                cout << "\nid: " << emp_id;
                cout << "\nfirst name: " <<emp_first_name;
                cout << "\nlast name: " <<emp_last_name;
                cout << "\nssn: " <<emp_ssn;
                cout << "\nwage; " <<emp_wage;
                cout << "\ndepartment: " <<emp_department;
                cout << "\nday: " <<emp_day;
                cout << "\nmonth: " <<emp_month;
                cout << "\nyear: " <<emp_year;
                
                
                try {
                    int emp_id_int = stoi(emp_id);
                    emp.set_employee_id(emp_id_int);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_id: " << emp_id << endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_id: " << emp_id << endl;
                }
                
                try {
                    int emp_ssn_int = stoi(emp_ssn);
                    emp.set_ssn(emp_ssn_int);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_ssn: " << emp_ssn << endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_ssn: " << emp_ssn << endl;
                }
                    
                try {
                    double emp_wage_double = stod(emp_wage);
                    emp.set_wage(emp_wage_double);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_wage: " << emp_wage << endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_wage: " << emp_wage << endl;
                }
                
                try {
                    int emp_day_int = stoi(emp_day);
                    emp.set_hire_day(emp_day_int);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_day: " << emp_day<< endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_day: " << emp_day << endl;
                }
                
                
                try {
                    int emp_month_int = stoi(emp_month);
                    emp.set_hire_month(emp_month_int);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_month: " << emp_month<< endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_month: " << emp_month << endl;
                }
                
                try {
                    int emp_year_int = stoi(emp_year);
                    emp.set_hire_year(emp_year_int);
                } catch (const std::invalid_argument& e) {
                    cerr << "Invalid argument: " << e.what() << ". emp_year: " << emp_year<< endl;
                } catch (const std::out_of_range& e) {
                    cerr << "Out of range: " << e.what() << ". emp_year: " << emp_year << endl;
                }
//                int emp_id_int = stoi(emp_id);
//                int emp_ssn_int = stoi(emp_ssn);
//                double emp_wage_double = stod(emp_wage);
//                int emp_day_int = stoi(emp_day);
//                int emp_month_int = stoi(emp_month);
//                int emp_year_int = stoi(emp_year);
                
//                emp.set_employee_id(emp_id_int);
                emp.set_first_name(emp_first_name);
                emp.set_last_name(emp_last_name);
//                emp.set_ssn(emp_ssn_int);
//                emp.set_wage(emp_wage_double);
                emp.set_department(emp_department);
//                emp.set_hire_day(emp_day_int);
//                emp.set_hire_month(emp_month_int);
//                emp.set_hire_year(emp_year_int);

                employees.push_back(emp);
            }
            input_file.close();
        }
        else {
            cout << "Unable to open file. Try again\n";
        }
    }
    else if (read == 'n'){
        quit = 'y';
    }
    else if (cin.fail()){
        cout << "Invalid! Re-enter please!\n";
    }
    
    // add employee
    Employee employee;
    employee.set_employee_id(23);
    employee.set_first_name("Celine");
    employee.set_last_name("Wang");
    employee.set_ssn(2222);
    employee.set_wage(333.33);
    employee.set_department("Home");
    employee.set_hire_year(1985);
    employee.set_hire_month(4);
    employee.set_hire_day(20);
    
    
    display_employees(employees);
  
    std::cout << "\n";
    return 0;
}


// display_title() function definition
void display_title() {
    cout << endl
    << "                **** ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ ****  \n"
    << "                ****                                                     ****  \n"
    << "                **           Welcome to CELINE WANG's Employee List        **  \n"
    << "                ****                                                     ****  \n"
    << "                **** ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ = ~-~ ****  \n\n\n";
}


// display_menu() function definition
void display_menu() {
    cout << endl
    << "                                            M E N U                            \n"
    << "                                            =======                            \n"
    << "                              1. Add New Employee                              \n"
    << "                              2. Search Existing Employee                      \n"
    << "                              3. Display Employee List                         \n"
    << "                              4. Update Existing Employee                      \n"
    << "                              5. Delete Existing Employee                      \n"
    << "                              6. Save to file                                  \n"
    << "                              7. Read from file                                \n"
    << "                              8. Quit                                          \n\n\n";
}

// display_employees function definition
void display_employees(const vector<Employee>& employees_list) {
    cout << setw(6) << left << "ID"
    << setw(16) << left << "Employee Name"
    << setw(4) << right << "SSN"
    << setw(9) << right << "Wage"
    << setw(4) << "    "
    << setw(14) << left << "Department"
    << setw(18) << left << "Hired Date"
    << endl;
    
    cout << setw(6) << left << "=="
    << setw(16) << left << "============="
    << setw(4) << right << "==="
    << setw(9) << right << "===="
    << setw(4) << "    "
    << setw(14) << left << "==========="
    << setw(18) << left << "=========="
    << endl;
    
    for (Employee e: employees_list) {
        cout << setw(6) << left << e.get_employee_id()
        << setw(16) << left << e.get_full_name()
        << setw(4) << right << e.get_ssn()
        << setw(9) << right << e.get_wage()
        << setw(4) << "    "
        << setw(14) << left << e.get_department()
//        << setw(18) << left << e.get_hire_date()
        << Employee::map_month(e.get_hire_month()) << " " << setw(2) << setfill('0') << e.get_hire_day()  << setfill(' ') << ", " << e.get_hire_year()
        << endl;
    }
}

void read_file(string file, vector<Employee>& employees){
    Employee employee;
    
    
}
