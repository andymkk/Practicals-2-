// Week 9 - Activity 4: Polymorphic drawing program.
// One function draws any shape through a Shape* (dynamic binding).
#include <iostream>
#include <vector>
using namespace std;

// Abstract base class
class Shape {
public:
    virtual void draw() = 0;
    virtual ~Shape() {}   // virtual destructor: derived objects are deleted correctly
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing a Circle" << endl; }
};

class Rectangle : public Shape {
public:
    void draw() override { cout << "Drawing a Rectangle" << endl; }
};

class Triangle : public Shape {
public:
    void draw() override { cout << "Drawing a Triangle" << endl; }
};

// Works for ANY shape: the correct draw() is chosen at run time
void renderCanvas(Shape *s) {
    s->draw();
}

int main() {
    vector<Shape *> canvas;   // base pointers to different shapes
    canvas.push_back(new Circle());
    canvas.push_back(new Rectangle());
    canvas.push_back(new Triangle());
    canvas.push_back(new Circle());

    cout << "--- Rendering Canvas ---" << endl;
    for (size_t i = 0; i < canvas.size(); i++) {
        renderCanvas(canvas[i]);
    }

    cout << "\n--- Cleaning Up Memory ---" << endl;
    for (size_t i = 0; i < canvas.size(); i++) {
        delete canvas[i];
    }

    return 0;
}
