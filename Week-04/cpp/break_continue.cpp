// Week 4 - Activity 2: break and continue.
// Prints 1-20, skips multiples of 3 (continue) and stops at 15 (break).
#include <iostream>
using namespace std;

int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    for (int i = 1; i <= 20; i++) {
        // break leaves the loop completely
        if (i == 15) {
            cout << "\nBreaking at " << i << "!";   // new line, then the message
            break;
        }

        // continue skips the rest of this iteration only
        if (i % 3 == 0) {
            continue;
        }

        cout << i << " ";
    }
    cout << endl;

    return 0;
}
