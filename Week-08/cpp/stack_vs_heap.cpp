// Week 8 - Activity 2: Stack vs heap objects.
// Stack objects are destroyed automatically; heap objects need delete.
#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    string model;

    Car(string m) {
        model = m;
        cout << "Car created: " << model << endl;
    }

    ~Car() {
        cout << "Car destroyed: " << model << endl;
    }
};

int main() {
    cout << "--- Creating Stack Object ---" << endl;
    Car stackCar("Toyota");            // no new: automatic cleanup

    cout << "\n--- Creating Heap Object ---" << endl;
    Car *heapCar = new Car("Honda");   // new: we must delete it ourselves
    cout << "Heap car model: " << heapCar->model << endl;   // -> for pointers

    cout << "\n--- End of main function ---" << endl;
    delete heapCar;   // destructor runs now
    // stackCar is destroyed automatically when main ends

    return 0;
}
