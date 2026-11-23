#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {            //
    int a, b, c;        // Three integer boxes to compare
    cout << "Enter three numbers: "; //
    cin >> a >> b >> c; // Reads all three numbers separated by spaces

    if (a > b) {        // Outer check 1: Is 'a' bigger than 'b'?
        if (b > c) {    // Inner check: Is 'b' also bigger than 'c'?
            cout << "Path 1: a > b > c" << endl; //
        } else {        // 'a > b' is true, but 'b > c' is false
            if (a > c) { // Checks if 'a' is still bigger than 'c'
                cout << "Path 2: a > c > b" << endl; //
            } else {     // 'c' is bigger than both 'a' and 'b'
                cout << "Path 3: c > a > b" << endl; //
            }
        }
    } else {            // Outer else: 'b' is greater than or equal to 'a'
        if (a > c) {    // Checks if 'a' is bigger than 'c'
            cout << "Path 4: b > a > c" << endl; //
        } else {        // Both 'b' and 'c' are >= 'a'
            if (b > c) { // Compares 'b' and 'c'
                cout << "Path 5: b > c > a" << endl; //
            } else {     // 'c' is the largest
                cout << "Path 6: c > b > a" << endl; //
            }
        }
    }

    return 0;           //
}
