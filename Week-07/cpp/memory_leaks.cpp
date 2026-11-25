// Week 7 - Activity 3: Memory leaks and delete.
// createLeak() forgets to free its memory; fixLeak() frees it with delete.
#include <iostream>
using namespace std;

// BAD: memory allocated with new is never freed (memory leak)
void createLeak() {
    int *ptr = new int(42);
    cout << "Inside function. The value is: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
    // missing: delete ptr;
}

// GOOD: every new has a matching delete
void fixLeak() {
    int *ptr = new int(42);
    cout << "Inside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    delete ptr;       // give the memory back
    ptr = nullptr;    // avoid a dangling pointer
    cout << "Memory has been successfully freed." << endl;
}

int main() {
    cout << "--- Memory leak (intentional) ---" << endl;
    createLeak();
    cout << "Function finished. The memory is now leaked.\n" << endl;

    cout << "--- Testing the Fix ---" << endl;
    fixLeak();

    return 0;
}
