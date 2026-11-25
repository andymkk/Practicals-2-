// Week 4 - Activity 4: Multiplication table (1 to 10) using nested loops.
#include <iostream>
#include <iomanip>   // setw
using namespace std;

int main() {
    cout << "========================================" << endl;
    cout << "     MULTIPLICATION TABLE (1 to 10)" << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Outer loop = rows, inner loop = columns
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j;   // setw(5) lines the columns up
        }
        cout << endl;   // new line after each row
    }

    cout << "========================================" << endl;

    return 0;
}
