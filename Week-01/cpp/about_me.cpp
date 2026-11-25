// Week 1: About Me
// Asks the user 6 questions, stores the answers and prints a profile summary.
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Variables to store the answers (all text, so string)
    string name, course, hobby, reason, expectation, definition;

    cout << "========================================" << endl;
    cout << " WELCOME TO YOUR FIRST PROGRAM!" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // getline reads a whole line, including spaces
    cout << "1. What is your name? ";
    getline(cin, name);

    // Challenge: simple validation for an empty name
    if (name.empty()) {
        cout << "You didn't enter a name!" << endl;
        return 1;
    }

    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // Display the summary
    cout << endl;
    cout << "========================================" << endl;
    cout << " YOUR PROFILE SUMMARY" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Name:           " << name << endl;
    cout << "Course:         " << course << endl;
    cout << "Hobby:          " << hobby << endl;
    cout << "Reason:         " << reason << endl;
    cout << "Expectation:    " << expectation << endl;
    cout << "Programming is: " << definition << endl;
    cout << endl;
    cout << "========================================" << endl;
    cout << " Great job, " << name << "! You are on your way to becoming a programmer!" << endl;
    cout << "========================================" << endl;

    return 0;
}
