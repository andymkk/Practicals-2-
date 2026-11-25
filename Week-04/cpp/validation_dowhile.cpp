// Week 4 - Activity 3B: Input validation with a do-while loop.
// The body always runs at least once, so the input is written only once.
#include <iostream>
using namespace std;

int main() {
    int number = 0;

    do {
        cout << "Enter a positive number: ";
        cin >> number;

        if (number <= 0) {
            cout << "Invalid! ";
        }
    } while (number <= 0);   // condition is checked AFTER the body

    cout << "You entered: " << number << endl;

    return 0;
}
