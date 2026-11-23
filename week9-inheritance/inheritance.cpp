#include <iostream>     // Unlocks cin and cout
#include <string>       // Unlocks std::string
using namespace std;    // Standard namespace shortcut

// BASE CLASS (Parent)
class Shape {           // Defines the parent blueprint
protected:              // Like private, but child classes (Circle/Rectangle) ARE allowed to access it
    string color;       // Shared property for all shapes

public:                 //
    Shape(string c) {   // Parent constructor: runs first whenever any child shape is created
        color = c;      // Sets the color
        cout << "Shape constructor called." << endl; //
    }

    void displayColor() { // Shared method inherited automatically by all child classes
        cout << "This shape's color is: " << color << endl; //
    }
};

// DERIVED CLASS (Child 1)
class Circle : public Shape { // ': public Shape' means Circle inherits everything from Shape
private:                //
    double radius;      // Unique property only Circles have

public:                 //
    // Passes 'c' up to the Shape(c) parent constructor first, then sets radius
    Circle(string c, double r) : Shape(c) { //
        radius = r;     //
        cout << "Circle constructor called." << endl; //
    }

    void displayCircleInfo() { //
        // Can use 'color' directly because it was marked 'protected' in Shape
        cout << "This circle is " << color << " and has a radius of " << radius << endl; //
    }
};

// DERIVED CLASS (Child 2)
class Rectangle : public Shape { // Inherits from Shape
private:                //
    double width, height; // Unique properties only Rectangles have

public:                 //
    Rectangle(string c, double w, double h) : Shape(c) { // Calls parent Shape(c) first
        width = w;      //
        height = h;     //
        cout << "Rectangle constructor called." << endl; //
    }

    void displayRectangleInfo() { //
        cout << "This rectangle is " << color << " and is " << width << "x" << height << endl; //
    }
};

int main() {            //
    cout << "--- Creating a Circle ---" << endl; //
    Circle myCircle("Red", 5.0); // Calls Shape constructor, then Circle constructor
    myCircle.displayColor();     // Calls method inherited from Shape
    myCircle.displayCircleInfo();// Calls Circle's own unique method

    cout << "\n--- Creating a Rectangle ---" << endl; //
    Rectangle myRect("Blue", 4.0, 6.0); //
    myRect.displayColor();       // Calls method inherited from Shape
    myRect.displayRectangleInfo(); // Calls Rectangle's own unique method

    return 0;           //
}
