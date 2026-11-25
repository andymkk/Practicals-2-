// Week 6 - Activity 3A: C-string (char array) version.
// Fixed size, needs <cstring> functions such as strlen and strcpy.
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[50];   // fixed maximum size

    cout << "Enter your name: ";
    cin.getline(name, 50);   // reads a full line into the array

    cout << "Name: " << name << endl;
    cout << "Length: " << strlen(name) << endl;
    cout << "First character: " << name[0] << endl;

    char copy[50];
    strcpy(copy, name);      // copying needs strcpy
    cout << "Copy: " << copy << endl;

    return 0;
}
