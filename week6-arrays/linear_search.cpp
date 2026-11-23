#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

// Function that checks each item one by one to find 'target'
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {    // Loops through every index from 0 up to size - 1
        if (arr[i] == target) {         // Checks if the current element matches what we want
            return i;                   // Found it! Immediately sends back the index position
        }
    }
    return -1;                          // Reached the end without finding it; returns -1
}

int main() {
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74}; // Creates an array holding 8 whole numbers
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculates total items (32 bytes / 4 bytes = 8)
    int target;                         // Box to hold the number the user wants to find

    cout << "Array contents: ";
    for (int i = 0; i < size; i++) {    // Prints out all 8 numbers so the user can see them
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter a number to search: ";
    cin >> target;                      // Saves user's search number

    int position = linearSearch(numbers, size, target); // Calls our search function

    if (position != -1) {               // Checks if a valid index was returned
        cout << "Element found at index: " << position << endl;
    } else {                            // Runs if -1 was returned
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
