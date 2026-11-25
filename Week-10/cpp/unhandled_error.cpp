// Week 10 - Activity 2: Ignoring file errors (on purpose, for analysis).
// The file does not exist and there is NO is_open() check: the program fails silently.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream myFile("missing_file.txt");   // does not exist

    string data;
    cout << "Attempting to read from missing file..." << endl;

    myFile >> data;   // read fails, but nothing warns us

    cout << "Data read: " << data << endl;   // prints nothing (data is empty)
    cout << "Program continued running without crashing." << endl;

    return 0;
}
