#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {
    int number;         // Box to hold the user's number

    cout << "Enter a positive number: "; // First prompt BEFORE the loop
    cin >> number;                       // Reads first attempt

    // Checks condition FIRST; if number is already positive, this loop never runs
    while (number <= 0) {
        cout << "Invalid! Please enter a positive number: "; // Asks again
        cin >> number;                                       // Reads new attempt
    }

    cout << "You entered: " << number << endl; // Runs once a valid number is given
    return 0;
}
