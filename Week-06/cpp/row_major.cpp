// Week 6 - Activity 2: Memory layout of a 2D array (row-major order).
// The addresses show that row 0 is stored first, then row 1, then row 2.
#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Row by row (matches the memory order)
    cout << "Row-major traversal (row by row):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // Addresses go up by 4 bytes (size of an int) each time
    cout << "\nMemory addresses (each int takes 4 bytes):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            cout << "matrix[" << row << "][" << col << "] = " << matrix[row][col]
                 << " at address " << &matrix[row][col] << endl;
        }
    }

    // Challenge: column-by-column traversal (jumps around in memory)
    cout << "\nColumn-major traversal:" << endl;
    for (int col = 0; col < 4; col++) {
        for (int row = 0; row < 3; row++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    cout << "\nObservation: Addresses increase row by row." << endl;
    cout << "Row 0 is stored completely, then row 1, then row 2." << endl;
    cout << "This is called ROW-MAJOR ORDER." << endl;

    return 0;
}
