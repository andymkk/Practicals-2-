// Week 4 - Activity 3A: Input validation with a while loop.
// The first input must be read BEFORE the loop (code is repeated).
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a positive number: ";
    cin >> number;

    // Condition is checked first, so the body may run zero times
    while (number <= 0) {
        cout << "Invalid! Please enter a positive number: ";
        cin >> number;
    }

    cout << "You entered: " << number << endl;

    return 0;
}
