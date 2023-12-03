#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>

using namespace std;


bool sort_descending(int a, int b) {
    return a > b;
}

void display_int(int score_param) {
    cout << score_param << ' ';
}

int main()
{
    cout << "The Test Scores program\n\n";

    cout << "Enter test scores from 0 to 100.\n"
        << "To end the program, enter -1.\n\n";

    vector<int> scores;
    int score = 0;
    while (score != -1) {
        cout << "Enter score: ";
        cin >> score;

        if (cin.fail()) {
            cin.clear();             // clear error bits
            cin.ignore(1000, '\n');  // discard input up to end of line
            cout << "Invalid number. Try again.\n";
        }
        else if (score > 100) {
            cout << "Score must be from 0 to 100. Try again.\n";
        }
        else if (score < -1) {
            cout << "Score can't be a negative number. Try again.\n";
        }
        else if (score > -1) {     // valid score – add to vector
            scores.push_back(score);
        }
    }

    if (scores.empty()) {                 // vector is empty
        cout << "\nNo scores entered\n.";
    }
    else {                                 // vector contains scores
        // calculate total of all scores
        int total = accumulate(scores.begin(), scores.end(), 0);
//        for (int score : scores) {
//            total += score;
//
//        }
        
        // sort scores in descending order
        sort(scores.begin(), scores.end(), sort_descending);
        cout << endl;
        for_each(scores.begin(), scores.end(), display_int);
        cout << endl;
        
        // highest and lowest scores
        auto max_iter = max_element(scores.begin(), scores.end());
        cout << "Highest score:   " << *max_iter << endl;
        auto min_iter = min_element(scores.begin(), scores.end());
        cout << "Lowest score:    " << *min_iter << endl;
        
        // perfect score count
        int c = static_cast<int>(count(scores.begin(), scores.end(), 100));
        cout << "This student has " << c << " perfect score(s)." << endl;
        
        // get the count and calculate the average
        auto score_count = scores.size();
        double average = static_cast<double>(total) / score_count;
        average = round(average * 10) / 10;

        // display the score count, total, and average
        cout << '\n'  // blank line
            << "Score count:   " << score_count << endl
            << "Score total:   " << total << endl
            << "Average score: " << average << endl << endl;
    }
}
