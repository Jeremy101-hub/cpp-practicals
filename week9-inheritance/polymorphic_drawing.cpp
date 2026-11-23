#include <iostream>     // Unlocks cout
#include <vector>       // Unlocks std::vector dynamic list
#include <windows.h>    // Unlocks UTF-8 symbols on Windows terminals
using namespace std;    //

// 1. ABSTRACT BASE CLASS
class Shape {           //
public:                 //
    virtual void draw() = 0; // Pure virtual function: every shape must know how to draw itself
    virtual ~Shape() {}      // Virtual Destructor: prevents memory leaks when deleting child objects
};

// 2. DERIVED CLASSES
class Circle : public Shape { //
public:                 //
    void draw() override {   // 'override' verifies we are properly replacing Shape's draw()
        cout << "Drawing a Circle ◯" << endl; //
    }
};

class Rectangle : public Shape { //
public:                 //
    void draw() override {   //
        cout << "Drawing a Rectangle ▭" << endl; //
    }
};

class Triangle : public Shape { //
public:                 //
    void draw() override {   //
        cout << "Drawing a Triangle △" << endl; //
    }
};

// 3. POLYMORPHIC FUNCTION: Accepts ANY child of Shape and calls its specific draw()
void renderCanvas(Shape* s) { //
    s->draw();          // Dynamic binding picks Circle, Rectangle, or Triangle automatically
}

int main() {            //
    SetConsoleOutputCP(CP_UTF8); // Ensures ◯, ▭, and △ display cleanly on Windows

    vector<Shape*> canvas; // Single list capable of holding mixed Shape pointers

    canvas.push_back(new Circle());    // Adds a Circle to the canvas
    canvas.push_back(new Rectangle()); // Adds a Rectangle to the canvas
    canvas.push_back(new Triangle());  // Adds a Triangle to the canvas
    canvas.push_back(new Circle());    // Adds another Circle

    cout << "--- Rendering Canvas ---" << endl; //
    for (int i = 0; i < canvas.size(); i++) { // Loops through all mixed shapes
        renderCanvas(canvas[i]);              // Draws each shape polymorphically
    }

    cout << "\n--- Cleaning Up Memory ---" << endl; //
    for (int i = 0; i < canvas.size(); i++) { //
        delete canvas[i];                     // Frees each shape from the heap to avoid leaks
    }

    return 0;           //
}
