// Week 10 - Activity 1: Basic file I/O.
// Reads numbers from numbers.txt, adds them up and writes the total to sum.txt.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("numbers.txt");   // input file stream

    // Always check that the file opened
    if (!inputFile.is_open()) {
        cout << "Error: Could not open numbers.txt for reading!" << endl;
        return 1;
    }

    int num;
    int sum = 0;

    cout << "Reading numbers from file..." << endl;
    while (inputFile >> num) {   // loop ends at the end of the file
        cout << "Read: " << num << endl;
        sum += num;
    }
    inputFile.close();

    cout << "Total Sum: " << sum << endl;

    ofstream outputFile("sum.txt");      // output file stream (overwrites)
    if (!outputFile.is_open()) {
        cout << "Error: Could not create sum.txt for writing!" << endl;
        return 1;
    }

    outputFile << "The total sum is: " << sum << endl;
    outputFile << "Calculated automatically by the C++ program." << endl;
    outputFile.close();

    cout << "Result successfully saved to sum.txt!" << endl;

    return 0;
}
