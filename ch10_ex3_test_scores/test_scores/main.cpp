#include <iostream>

using namespace std;

// global constant
const int rows = 20;
const int cols = 3;

double calculate_total(int scores[], int score_count);


int main() {

    int scores[rows][cols] { 0 };  // set each element in array to 0

    cout << "The Test Scores program\n\n";

    cout << "Enter test scores (" << cols << " per student, " << rows << " max students).\n"
         << "Make sure each score is between 0 and 100.\n"
         << "To end the program, enter -1.\n\n";

    // initialize counter and score variables
    int student_count = 0, score_count = 0, score = 0;

    // prevent out of bounds access by making sure
    // score count is less than capacity
    while (score != -1 && student_count < rows) {
        cout << "\nStudent " << (student_count + 1) << "\n";
        score_count = 0;
        score = 0;
        
        while (score != -1 && score_count < cols){
            cout << "Enter score: ";
            cin >> score;

            if (cin.fail()) {
                cin.clear();             // clear bad input flag
                cin.ignore(1000, '\n');  // discard input up to end of line
                cout << "Invalid number. Try again.\n";
            }
            else if (score > 100) {
                cout << "Score must be from 0 to 100. Try again.\n";
            }
            else if (score < -1) {
                cout << "Score can't be a negative number. Try again.\n";
            }
            else if (score > -1) {
                scores[student_count][score_count] = score;   // store score in array
                ++ score_count;
            }
        }
        ++student_count;                 // increment score count
    }
    cout << endl;

    if (student_count == 0) {
        cout << "No score entered.\n\n";
    }
    else {
        // calculate total and average scores
        for (int row = 0; row < student_count - 1 ; ++row) {
            // display the score count, score total, and average score
            cout << "Student " << row + 1  << ": " ;
            for (int j = 0; j < cols; ++j) {
                cout << scores[row][j] << ' ';     // display scores
            }
            
            double total = calculate_total(scores[row], cols);
            double average = total / cols;
            average = round(average * 10) / 10;
            cout << "\tAverage score: " << average << endl;
        }
        cout << endl;
    }
    return 0;
}

double calculate_total(int scores[], int score_count) {
    double total = 0.0;
    for (int j = 0; j < score_count; ++j) {
        total += scores[j];
    }
    return total;
}
