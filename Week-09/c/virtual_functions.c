// Week 9 - Activity 2: Simulating virtual functions (C version).
// A function pointer inside the base struct plays the role of a virtual function.
#include <stdio.h>

// Type for a function that takes no arguments and returns nothing
typedef void (*SpeakFunction)();

struct Animal {
    SpeakFunction speak;   // the "virtual" slot
};

struct Dog {
    struct Animal base;    // base struct first
};

void genericSound() {
    printf("Animal makes a generic sound.\n");
}

void dogBark() {
    printf("Dog barks: Woof! Woof!\n");
}

int main() {
    printf("--- Base only (generic sound) ---\n");
    struct Animal myAnimal;
    myAnimal.speak = genericSound;
    myAnimal.speak();

    printf("\n--- Virtual-style (dynamic binding) ---\n");
    struct Dog myDog;
    myDog.base.speak = dogBark;                  // "override" the function
    struct Animal *pet = (struct Animal *)&myDog;   // base pointer to a Dog
    pet->speak();                                // calls dogBark()

    return 0;
}
