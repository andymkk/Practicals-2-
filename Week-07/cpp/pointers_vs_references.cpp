// Week 7 - Activity 2: Pointers vs references.
// A reference is a fixed alias; a pointer holds an address and can be re-pointed.
#include <iostream>
using namespace std;

int main() {
    int originalValue = 100;
    int &refValue = originalValue;     // reference: another name for originalValue
    int *ptrValue = &originalValue;    // pointer: stores the address of originalValue

    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Changing through the reference changes the original
    refValue = 200;
    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    // Changing through the pointer changes the original
    *ptrValue = 300;
    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "refValue: " << refValue << endl;

    // A pointer can be re-pointed (a reference cannot)
    int anotherValue = 500;
    ptrValue = &anotherValue;
    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;
    cout << "ptrValue points to: " << *ptrValue << endl;

    return 0;
}
