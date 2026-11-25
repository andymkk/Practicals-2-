// Week 3 - Part 4: Grade Calculator
// Converts a percentage into a letter grade with +/- and a message.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double score;
    char grade;
    char modifier = ' ';   // space means no modifier

    cout << "===== GRADE CALCULATOR =====" << endl;
    cout << "Enter percentage score (0-100): ";
    cin >> score;

    // Input validation
    if (score < 0 || score > 100) {
        cout << "Invalid score! Must be between 0 and 100." << endl;
        return 1;
    }

    // Base letter grade (multiple cut-offs)
    if (score >= 90)      grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else                  grade = 'F';

    // Plus / minus modifiers (not used for F)
    if (grade != 'F') {
        int lastDigit = (int)score % 10;
        if (grade == 'A') {
            if (score >= 97)     modifier = '+';
            else if (score < 93) modifier = '-';
        } else {
            if (lastDigit >= 7)      modifier = '+';
            else if (lastDigit <= 2) modifier = '-';
        }
    }

    // Display result
    cout << "\nScore: " << fixed << setprecision(1) << score << "%" << endl;
    cout << "Grade: " << grade;
    if (modifier != ' ') cout << modifier;
    cout << endl;

    // Message for each grade
    switch (grade) {
        case 'A': cout << "Excellent work!" << endl; break;
        case 'B': cout << "Good job!" << endl; break;
        case 'C': cout << "Satisfactory." << endl; break;
        case 'D': cout << "Needs improvement." << endl; break;
        default:  cout << "Please seek help." << endl;
    }

    return 0;
}
