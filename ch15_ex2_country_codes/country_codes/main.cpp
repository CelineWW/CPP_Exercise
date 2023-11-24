#include <iostream>
#include <map>
#include <string>

using namespace std;

char get_choice() {
	char choice;
	cout << "Continue (y/n)?: ";
	cin >> choice;
	cout << endl;
	return choice;
}

void display_codes(const map<string, string>& countries) {
	cout << "Country codes: ";
    for(pair<string, string> country:countries) {
        cout << country.first << " ";
    }
	cout << endl << endl;
}

void display_country(const map<string, string>& countries) {
	string code;
	cout << "Enter a country code: ";
	cin >> code;
	string upper_code = "";
	for (char c : code) {
		upper_code += toupper(c);
	}

    auto iter = countries.find(upper_code);
    if (iter == countries.end()){
        cout << "Country code not found.\n\n";
    }
    else {
//        cout << "You selected " << (*iter).second << "!\n\n";
        cout << "You selected " << countries.at(upper_code) << "!\n\n";
    }
}

int main()
{
	map<string, string> countries{ {"CA", "Canada"}, {"US", "United States"}, {"MX", "Mexico"} };

	cout << "The Country Codes Program\n\n";
    display_codes(countries);

    char choice = 'y';
    while (tolower(choice) == 'y') {
        display_country(countries);
        choice = get_choice();
    }
}

