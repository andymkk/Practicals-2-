// Week 2: Student Score Calculator
// Reads a student's name, course and 3 test scores, then prints a report card.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Variables: string for text, int for whole numbers, double for decimals
    string studentName;
    string course;
    int score1, score2, score3;
    int totalScore;
    double average;
    double percentage;

    // Constant: the maximum mark for one test never changes
    const int MAX_SCORE = 100;

    cout << "========================================" << endl;
    cout << " STUDENT SCORE CALCULATOR" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Input: getline for text (spaces allowed), cin >> for numbers
    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter course (BBIT/BCS): ";
    getline(cin, course);
    cout << "Enter score for Test 1: ";
    cin >> score1;
    cout << "Enter score for Test 2: ";
    cin >> score2;
    cout << "Enter score for Test 3: ";
    cin >> score3;

    // Challenge: input validation (scores must be 0 - 100)
    if (score1 < 0 || score1 > MAX_SCORE ||
        score2 < 0 || score2 > MAX_SCORE ||
        score3 < 0 || score3 > MAX_SCORE) {
        cout << "Error: each score must be between 0 and " << MAX_SCORE << "." << endl;
        return 1;
    }

    // Calculations: use 3.0 and 300.0 so the division keeps decimals
    totalScore = score1 + score2 + score3;
    average = totalScore / 3.0;
    percentage = (totalScore / 300.0) * 100;

    // Challenge: letter grade
    char grade;
    if (percentage >= 90)      grade = 'A';
    else if (percentage >= 80) grade = 'B';
    else if (percentage >= 70) grade = 'C';
    else if (percentage >= 60) grade = 'D';
    else                       grade = 'F';

    // Report card (fixed + setprecision(2) gives 2 decimal places)
    cout << endl;
    cout << "========================================" << endl;
    cout << " REPORT CARD" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Student:    " << studentName << endl;
    cout << "Course:     " << course << endl;
    cout << endl;
    cout << "Test 1:     " << score1 << "/" << MAX_SCORE << endl;
    cout << "Test 2:     " << score2 << "/" << MAX_SCORE << endl;
    cout << "Test 3:     " << score3 << "/" << MAX_SCORE << endl;
    cout << endl;
    cout << "Total:      " << totalScore << "/300" << endl;
    cout << "Average:    " << fixed << setprecision(2) << average << endl;
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "Grade:      " << grade << endl;
    cout << endl;

    if (percentage >= 50) {
        cout << "Result:     PASS" << endl;
    } else {
        cout << "Result:     FAIL" << endl;
    }
    cout << "========================================" << endl;

    return 0;
}
