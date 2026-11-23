#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {
    int numbers[5] = {10, 20, 30, 40, 50}; // Creates an array of 5 integers in sequential RAM
    int* ptr = numbers; // Creates a pointer holding the memory address of the first element (10)

    cout << "Array elements accessed via pointer arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Value: " << *ptr << endl; // '*' dereferences ptr (grabs the actual value at that address)
        ptr++;          // Moves the pointer forward by 4 bytes (1 integer) to the next array slot
    }

    ptr = numbers;      // Resets the pointer back to the starting address of the array

    cout << "\nAccessing using offset arithmetic:" << endl;

    for (int i = 0; i < 5; i++) {
        // *(ptr + i) jumps 'i' integers forward from the start and grabs the value (same as numbers[i])
        cout << "Index " << i << " has value: " << *(ptr + i) << endl;
    }

    return 0;           // Ends program cleanly
}
