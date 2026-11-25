// Week 5 - Activity 2: Variable scope (global vs local, and shadowing) (C version).
#include <stdio.h>

// Global variable: visible in every function below
int globalCounter = 100;

void displayGlobal() {
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

void modifyGlobal() {
    globalCounter = 500;   // changes the global variable
    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

void localDemo() {
    int globalCounter = 999;   // local variable SHADOWS the global one
    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

int main() {
    int localCounter = 50;   // local to main only

    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    displayGlobal();
    modifyGlobal();
    localDemo();

    printf("Back in main: globalCounter = %d\n", globalCounter);

    return 0;
}
