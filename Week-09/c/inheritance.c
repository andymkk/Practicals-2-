// Week 9 - Activity 1: Simulating inheritance (C version).
// C has no inheritance, so the base struct is the FIRST member of the derived struct.
#include <stdio.h>
#include <string.h>

// Base struct
struct Shape {
    char color[20];
};

void displayColor(struct Shape *s) {
    printf("This shape's color is: %s\n", s->color);
}

// "Derived" structs: base first, then their own members
struct Circle {
    struct Shape base;
    double radius;
};

struct Rectangle {
    struct Shape base;
    double width, height;
};

int main() {
    printf("--- Creating a Circle ---\n");
    struct Circle myCircle;
    strcpy(myCircle.base.color, "Red");
    myCircle.radius = 5.0;
    displayColor(&myCircle.base);   // "inherited" function
    printf("This circle is %s and has a radius of %.1f\n",
           myCircle.base.color, myCircle.radius);

    printf("\n--- Creating a Rectangle ---\n");
    struct Rectangle myRect;
    strcpy(myRect.base.color, "Blue");
    myRect.width = 4.0;
    myRect.height = 6.0;
    displayColor(&myRect.base);
    printf("This rectangle is %s and is %.1fx%.1f\n",
           myRect.base.color, myRect.width, myRect.height);

    return 0;
}
