// Week 3 - Part 4 (final challenge): Grade Calculator for many students.
// Uses a loop, then prints how many A's, B's, C's, D's and F's there were.
#include <iostream>
#include <string>
using namespace std;

// Returns the letter grade for a percentage
char getGrade(double score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}

int main() {
    int numStudents;
    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    cout << "How many students? ";
    cin >> numStudents;

    for (int i = 1; i <= numStudents; i++) {
        string name;
        double score;

        cout << "\nStudent " << i << " name: ";
        cin >> ws;               // skip the leftover newline before getline
        getline(cin, name);

        // Keep asking until the score is valid
        do {
            cout << "Enter score (0-100): ";
            cin >> score;
            if (score < 0 || score > 100) {
                cout << "Invalid score! Try again." << endl;
            }
        } while (score < 0 || score > 100);

        char grade = getGrade(score);
        cout << name << " -> Grade " << grade << endl;

        // Count each grade
        switch (grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            default:  countF++;
        }
    }

    cout << "\n===== SUMMARY =====" << endl;
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;
    cout << "F: " << countF << endl;

    return 0;
}
