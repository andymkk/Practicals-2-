// Week 7 - Activity 4: Dynamic array wrapper (a simple mini-vector).
// When the array is full it doubles its capacity, copies the data and frees the old array.
#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *data;      // heap array
    int size;       // elements stored
    int capacity;   // slots available

public:
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];
    }

    // Destructor frees the memory automatically
    ~DynamicArray() {
        delete[] data;
    }

    void push_back(int value) {
        // Full? Make a bigger array
        if (size == capacity) {
            int newCapacity = capacity * 2;
            int *newData = new int[newCapacity];

            for (int i = 0; i < size; i++) {   // copy old elements
                newData[i] = data[i];
            }

            delete[] data;                     // free the old array
            data = newData;
            cout << "[Resized capacity from " << capacity << " to " << newCapacity << "]" << endl;
            capacity = newCapacity;
        }

        data[size] = value;
        size++;
    }

    void display() {
        cout << "Array (Size: " << size << ", Capacity: " << capacity << "): ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray myArray(2);
    cout << "Created dynamic array with capacity 2." << endl;

    myArray.push_back(10);
    myArray.push_back(20);
    myArray.display();

    cout << "\nAdding third element..." << endl;
    myArray.push_back(30);   // triggers a resize
    myArray.display();

    cout << "\nAdding fourth and fifth elements..." << endl;
    myArray.push_back(40);
    myArray.push_back(50);   // triggers another resize
    myArray.display();

    return 0;
}
