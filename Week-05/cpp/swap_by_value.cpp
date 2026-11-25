// Week 5 - Activity 1: Pass-by-value.
// swapByValue only swaps copies, so x and y stay the same.
// swapByReference (challenge) uses & and really swaps them.
#include <iostream>
using namespace std;

// a and b are COPIES of the arguments
void swapByValue(int a, int b) {
    cout << "  Inside function - Before swap: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;
    cout << "  Inside function - After swap:  a = " << a << ", b = " << b << endl;
}

// & makes a and b references to the ORIGINAL variables
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Before calling swapByValue:" << endl;
    cout << "  x = " << x << ", y = " << y << endl;

    swapByValue(x, y);

    cout << "After calling swapByValue:" << endl;
    cout << "  x = " << x << ", y = " << y << endl;
    cout << "\nExplanation: The function received COPIES of x and y." << endl;
    cout << "Changes made inside the function do not affect the originals." << endl;

    // Challenge: fix the swap with pass-by-reference
    swapByReference(x, y);
    cout << "\nAfter calling swapByReference:" << endl;
    cout << "  x = " << x << ", y = " << y << endl;

    return 0;
}
