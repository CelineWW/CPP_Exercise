#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    cout << "The Future Value Calculator\n\n";
    
    vector<double>monthly_investment_vector;
    vector<double>yearly_rate_vector;
    vector<int>years_vector;
    vector<double>future_value_vector;

    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        double monthly_investment;
        cout << "Enter monthly investment:   ";
        cin >> monthly_investment;

        double yearly_rate;
        cout << "Enter yearly interest rate: ";
        cin >> yearly_rate;

        int years;
        cout << "Enter number of years:      ";
        cin >> years;

        // convert yearly values to monthly values
        double monthly_rate = yearly_rate / 12 / 100;
        int months = years * 12;

        // calculate future value
        double future_value = 0;
        for (int i = 1; i <= months; i++) {
            future_value = (future_value + monthly_investment) *
                (1 + monthly_rate);
        }

		// round to 2 decimal places and display
		future_value = round(future_value * 100) / 100;
		cout << "Future value:               " << future_value << "\n\n";
        
        // add current values to the end of corresponding vector.
        monthly_investment_vector.push_back(monthly_investment);
        yearly_rate_vector.push_back(yearly_rate);
        years_vector.push_back(years);
        future_value_vector.push_back(future_value);

        // see if the user wants to continue
        cout << "Continue? (y/n): ";
        cin >> choice;
        cout << endl;
    }
    
    

    // display column name
    cout << right;
    cout << setw(10) << "Monthly" << setw(10) << "Yearly" << endl;
    cout << setw(10) << "investment" << setw(10) << "rate"
         << setw(10) << "Years" << setw(13) << "Future Value" << endl;
    
    // loop through vector to display results
    for(int i = 0; i < future_value_vector.size(); ++i) {
        cout << fixed << setprecision(2);
        cout << setw(10) << monthly_investment_vector[i]
             << setw(10) << yearly_rate_vector[i]
             << setw(10) << years_vector[i]
             << setw(13) << future_value_vector[i] << endl;
    }
    cout << "\n\nBye! ";
}
