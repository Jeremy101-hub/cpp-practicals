#include <iostream>
#include <iomanip>      // Unlocks setprecision(2)
#include <cmath>        // Unlocks math utilities
using namespace std;

const double PI = 3.14159; // Shared global constant

// Calculates circle area: π * r²
double areaOfCircle(double radius) {
    if (radius < 0) {
        cout << "Error: Radius cannot be negative." << endl;
        return 0.0;
    }
    return PI * radius * radius;
}

// Calculates rectangle area: length * width
double areaOfRectangle(double length, double width) {
    if (length < 0 || width < 0) {
        cout << "Error: Length and width cannot be negative." << endl;
        return 0.0;
    }
    return length * width;
}

// Calculates triangle area: 0.5 * base * height
double areaOfTriangle(double base, double height) {
    if (base < 0 || height < 0) {
        cout << "Error: Base and height cannot be negative." << endl;
        return 0.0;
    }
    return 0.5 * base * height;
}

// Void function: prints menu text and returns no value
void displayMenu() {
    cout << "\n===== GEOMETRY CALCULATOR =====" << endl;
    cout << "1. Area of Circle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {                // Keeps showing the menu until user picks 4
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter radius: ";
                cin >> radius;
                area = areaOfCircle(radius); // Calls circle function
                cout << "Area of circle: " << fixed << setprecision(2) << area << endl;
                break;
            case 2:
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                area = areaOfRectangle(length, width); // Calls rectangle function
                cout << "Area of rectangle: " << fixed << setprecision(2) << area << endl;
                break;
            case 3:
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                area = areaOfTriangle(base, height); // Calls triangle function
                cout << "Area of triangle: " << fixed << setprecision(2) << area << endl;
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
