// Week 7 - Activity 1: Pointer arithmetic.
// Walks through an array with a pointer instead of [ ] indexing.
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr = numbers;   // the array name is the address of its first element

    cout << "Array elements accessed via pointer arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl;   // *ptr = value at the address
        ptr++;                               // move to the next int (4 bytes)
    }

    ptr = numbers;   // reset to the start

    cout << "\nAccessing using offset arithmetic:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;   // same as numbers[i]
    }

    return 0;
}
