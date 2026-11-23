#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

// Receives COPIES of x and y (pass-by-value)
void swapByValue(int a, int b) {
    cout << "  Inside swapByValue - Before: a = " << a << ", b = " << b << endl;
    int temp = a;       // Saves 'a' in a temporary box so it isn't lost
    a = b;              // Overwrites 'a' with 'b'
    b = temp;           // Puts the saved 'a' into 'b'
    cout << "  Inside swapByValue - After:  a = " << a << ", b = " << b << endl;
}                       // Copies are destroyed here; originals in main() stay untouched

// Step 6 Challenge: Uses '&' (pass-by-reference) to modify the ACTUAL originals
void swapByReference(int &a, int &b) {
    int temp = a;       // Swaps the real memory locations of x and y
    a = b;
    b = temp;
}

int main() {
    int x = 10;         // Original variable x
    int y = 20;         // Original variable y

    cout << "Before calling swapByValue: x = " << x << ", y = " << y << endl;
    swapByValue(x, y);  // Sends copies (fails to swap originals)
    cout << "After calling swapByValue:  x = " << x << ", y = " << y << endl;

    cout << "\nNow testing Step 6 Challenge (swapByReference):" << endl;
    swapByReference(x, y); // Sends actual references (successfully swaps originals!)
    cout << "After calling swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}
