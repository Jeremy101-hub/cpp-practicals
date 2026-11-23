#include <iostream>     // Unlocks cout
using namespace std;    //

class Shape {           // ABSTRACT BASE CLASS (cannot be created directly)
public:                 //
    // '= 0' makes this a PURE VIRTUAL FUNCTION.
    // It forces every child class to write its own calculateArea() formula.
    virtual double calculateArea() = 0; //
};

class Square : public Shape { //
private:                //
    double side;        //
public:                 //
    Square(double s) { side = s; } //

    double calculateArea() { // Fulfills the required contract from Shape
        return side * side;  //
    }
};

class Circle : public Shape { //
private:                //
    double radius;      //
public:                 //
    Circle(double r) { radius = r; } //

    double calculateArea() { // Fulfills the required contract from Shape
        return 3.14159 * radius * radius; //
    }
};

int main() {            //
    // Shape myShape;   // Illegal! You cannot create a generic abstract Shape

    Square s(5.0);      // Creates a concrete Square object
    Circle c(3.0);      // Creates a concrete Circle object

    cout << "Area of Square: " << s.calculateArea() << endl; // Prints 25
    cout << "Area of Circle: " << c.calculateArea() << endl; // Prints 28.2743

    return 0;           //
}
