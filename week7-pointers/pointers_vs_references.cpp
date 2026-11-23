#include <iostream>
using namespace std;

int main() {
    int originalValue = 100;        // A normal integer variable stored in RAM
    int& refValue = originalValue;  // A REFERENCE: an alias (nickname) locked permanently to originalValue
    int* ptrValue = &originalValue; // A POINTER: stores the memory address ('&') of originalValue

    cout << "--- Initial State ---" << endl;
    cout << "originalValue: " << originalValue << endl;      // Prints 100
    cout << "refValue: " << refValue << endl;                // Prints 100
    cout << "ptrValue points to: " << *ptrValue << endl;     // '*' reads the value at that address (100)

    // MODIFICATION 1: Changing the reference changes the original
    refValue = 200;
    cout << "\n--- After setting refValue = 200 ---" << endl;
    cout << "originalValue: " << originalValue << endl;      // Prints 200
    cout << "ptrValue points to: " << *ptrValue << endl;     // Prints 200

    // MODIFICATION 2: Changing the value through the pointer changes the original
    *ptrValue = 300;                // Goes to the address stored in ptrValue and overwrites it with 300
    cout << "\n--- After setting *ptrValue = 300 ---" << endl;
    cout << "originalValue: " << originalValue << endl;      // Prints 300
    cout << "refValue: " << refValue << endl;                // Prints 300

    // MODIFICATION 3: Re-aiming the pointer to a brand new variable
    int anotherValue = 500;
    ptrValue = &anotherValue;       // Pointers can switch targets; references cannot
    cout << "\n--- After pointing ptrValue to anotherValue ---" << endl;
    cout << "originalValue: " << originalValue << endl;      // Still 300
    cout << "ptrValue points to: " << *ptrValue << endl;     // Now prints 500

    return 0;
}
