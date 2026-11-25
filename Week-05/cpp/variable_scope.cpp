// Week 5 - Activity 2: Variable scope (global vs local, and shadowing).
#include <iostream>
using namespace std;

// Global variable: visible in every function below
int globalCounter = 100;

void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;
}

void modifyGlobal() {
    globalCounter = 500;   // changes the global variable
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

void localDemo() {
    int globalCounter = 999;   // local variable SHADOWS the global one
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl;
}

int main() {
    int localCounter = 50;   // local to main only

    cout << "In main: globalCounter = " << globalCounter << endl;
    cout << "In main: localCounter = " << localCounter << endl;

    displayGlobal();
    modifyGlobal();
    localDemo();

    cout << "Back in main: globalCounter = " << globalCounter << endl;

    return 0;
}
