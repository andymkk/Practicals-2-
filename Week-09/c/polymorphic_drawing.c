// Week 9 - Activity 4: Polymorphic drawing program (C version).
// One function draws any shape through a struct Shape* using function pointers.
#include <stdio.h>

struct Shape {
    void (*draw)();   // each shape sets its own draw function
};

struct Circle    { struct Shape base; };
struct Rectangle { struct Shape base; };
struct Triangle  { struct Shape base; };

void drawCircle()    { printf("Drawing a Circle\n"); }
void drawRectangle() { printf("Drawing a Rectangle\n"); }
void drawTriangle()  { printf("Drawing a Triangle\n"); }

// Works for ANY shape: the correct draw function is called through the pointer
void renderCanvas(struct Shape *shapePtr) {
    shapePtr->draw();
}

int main() {
    struct Circle c1;     c1.base.draw = drawCircle;
    struct Rectangle r1;  r1.base.draw = drawRectangle;
    struct Triangle t1;   t1.base.draw = drawTriangle;
    struct Circle c2;     c2.base.draw = drawCircle;

    // Array of base pointers to different shapes
    struct Shape *canvas[4] = { &c1.base, &r1.base, &t1.base, &c2.base };

    printf("--- Rendering Canvas ---\n");
    for (int i = 0; i < 4; i++) {
        renderCanvas(canvas[i]);
    }

    // All shapes are on the stack, so there is nothing to free
    return 0;
}
