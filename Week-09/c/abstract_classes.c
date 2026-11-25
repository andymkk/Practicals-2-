// Week 9 - Activity 3: Abstract structs (C version).
// The base struct only holds a function pointer; each shape supplies its own area function.
#include <stdio.h>

struct Shape {
    double (*calculateArea)(struct Shape *);   // "pure virtual": filled in by each shape
};

struct Square {
    struct Shape base;
    double side;
};

struct Circle {
    struct Shape base;
    double radius;
};

// Cast the base pointer back to the real type to reach its own data
double squareArea(struct Shape *shapePtr) {
    struct Square *s = (struct Square *)shapePtr;
    return s->side * s->side;
}

double circleArea(struct Shape *shapePtr) {
    struct Circle *c = (struct Circle *)shapePtr;
    return 3.14159 * c->radius * c->radius;
}

int main() {
    struct Square sq;
    sq.base.calculateArea = squareArea;
    sq.side = 5.0;

    struct Circle circ;
    circ.base.calculateArea = circleArea;
    circ.radius = 3.0;

    // Call through the base pointer (&sq.base, &circ.base)
    printf("Area of Square: %.2f\n", sq.base.calculateArea(&sq.base));
    printf("Area of Circle: %.2f\n", circ.base.calculateArea(&circ.base));

    return 0;
}
