#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {
    cout << "Number filter: Skip multiples of 3, stop at 15" << endl;

    // Loops from 1 up to 20
    for (int i = 1; i <= 20; i++) {
        if (i == 15) {  // Checks if i hit 15
            cout << "Breaking at " << i << "!" << endl;
            break;      // Kills the entire loop immediately
        }

        if (i % 3 == 0) { // Checks if i divides evenly by 3 (remainder is 0)
            continue;     // Skips printing this number and jumps to the next i++
        }

        cout << i << " "; // Prints numbers that weren't skipped
    }

    cout << endl;       // Moves cursor to a fresh line
    return 0;           // Ends program cleanly
}
