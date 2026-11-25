// Week 6 - Activity 3B: std::string version.
// Grows automatically and is easier and safer to use than a C-string.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;   // no fixed size needed

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl;
    cout << "First character: " << name[0] << endl;

    string copy = name;   // copying is just assignment
    cout << "Copy: " << copy << endl;

    string greeting = "Hello, " + name + "!";   // + joins strings
    cout << greeting << endl;

    return 0;
}
