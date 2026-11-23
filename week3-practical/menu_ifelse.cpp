#include <iostream>     // Unlocks cin and cout
using namespace std;    //

int main() {            //
    int choice;         // Stores menu selection number
    cout << "Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: "; // '\n' creates new lines
    cin >> choice;      // Reads user's menu choice

    if (choice == 1) {          // Uses '==' to check equality
        cout << "Starting game..." << endl; //
    } else if (choice == 2) {   // Checks option 2
        cout << "Loading game..." << endl; //
    } else if (choice == 3) {   // Checks option 3
        cout << "Opening settings..." << endl; //
    } else if (choice == 4) {   // Checks option 4
        cout << "Exiting..." << endl; //
    } else {                    // Catch-all for any number other than 1-4
        cout << "Invalid choice!" << endl; //
    }

    return 0;           //
}
