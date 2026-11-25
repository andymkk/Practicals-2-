// Week 9 - Activity 1: Basic inheritance.
// Circle and Rectangle inherit the color property from the Shape base class.
#include <iostream>
#include <string>
using namespace std;

// Base class
class Shape {
protected:               // protected: derived classes can use it
    string color;

public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called." << endl;
    }

    void displayColor() {
        cout << "This shape's color is: " << color << endl;
    }
};

// Derived class: ': public Shape' means Circle inherits from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c) {   // calls the base constructor first
        radius = r;
        cout << "Circle constructor called." << endl;
    }

    void displayCircleInfo() {
        cout << "This circle is " << color << " and has a radius of " << radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called." << endl;
    }

    void displayRectangleInfo() {
        cout << "This rectangle is " << color << " and is " << width << "x" << height << endl;
    }
};

int main() {
    cout << "--- Creating a Circle ---" << endl;
    Circle myCircle("Red", 5.0);
    myCircle.displayColor();        // inherited method
    myCircle.displayCircleInfo();   // Circle's own method

    cout << "\n--- Creating a Rectangle ---" << endl;
    Rectangle myRect("Blue", 4.0, 6.0);
    myRect.displayColor();          // inherited method
    myRect.displayRectangleInfo();  // Rectangle's own method

    return 0;
}
