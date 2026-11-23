#include <iostream>     // Unlocks cin and cout
#include <iomanip>      // Unlocks setw() for neat column spacing
using namespace std;    // Standard namespace shortcut

int main() {
    cout << "========================================" << endl;
    cout << "    MULTIPLICATION TABLE (1 to 10)      " << endl;
    cout << "========================================" << endl;
    cout << endl;

    // OUTER LOOP: Controls the 10 horizontal rows (i = 1 to 10)
    for (int i = 1; i <= 10; i++) {
        
        // INNER LOOP: Runs all 10 columns (j = 1 to 10) for EVERY single row
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j; // Gives every number 5 spaces of width so columns align
        }

        cout << endl;   // Drops down to a new line after all 10 columns in a row finish
    }

    cout << "========================================" << endl;
    return 0;
}
