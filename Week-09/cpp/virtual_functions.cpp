// Week 9 - Activity 2: Virtual functions (static vs dynamic binding).
// Part 1 has no 'virtual' (base version runs); Part 2 adds 'virtual' (derived version runs).
#include <iostream>
using namespace std;

// ---------- Part 1: WITHOUT virtual ----------
class Animal {
public:
    void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

// ---------- Part 2: WITH virtual (the fix) ----------
class VirtualAnimal {
public:
    virtual void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
    virtual ~VirtualAnimal() {}   // virtual destructor for safe delete
};

class VirtualDog : public VirtualAnimal {
public:
    void speak() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- Without Virtual Keyword ---" << endl;
    Dog dog;
    Animal *myPet = &dog;   // base pointer to a Dog
    myPet->speak();         // static binding: pointer type (Animal) decides

    cout << "\n--- With Virtual Keyword ---" << endl;
    VirtualAnimal *myPet2 = new VirtualDog();
    myPet2->speak();        // dynamic binding: actual object (Dog) decides
    delete myPet2;

    return 0;
}
