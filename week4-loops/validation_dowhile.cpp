#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {
    int number = 0;     // Initialized to 0

    // Executes the code inside FIRST, then checks the condition at the bottom
    do {
        cout << "Enter a positive number: "; // Only needs to be written ONCE
        cin >> number;

        if (number <= 0) {
            cout << "Invalid! "; // Warns user before repeating
        }
    } while (number <= 0);       // Repeats if the number is 0 or negative

    cout << "You entered: " << number << endl; // Prints valid number
    return 0;
}
