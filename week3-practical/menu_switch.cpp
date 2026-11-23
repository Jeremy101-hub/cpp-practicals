#include <iostream>     // Unlocks cin and cout
using namespace std;    //

int main() {            //
    int choice;         // Stores menu selection number
    cout << "Menu:\n1. Start\n2. Load\n3. Settings\n4. Exit\nChoice: "; //
    cin >> choice;      //

    switch (choice) {   // Jumps directly to the matching case number
        case 1:         // Runs if choice is 1
            cout << "Starting game..." << endl; //
            break;      // Exits switch immediately so it doesn't fall through to case 2
        case 2:         // Runs if choice is 2
            cout << "Loading game..." << endl; //
            break;      //
        case 3:         // Runs if choice is 3
            cout << "Opening settings..." << endl; //
            break;      //
        case 4:         // Runs if choice is 4
            cout << "Exiting..." << endl; //
            break;      //
        default:        // Runs if none of the cases matched (like 'else')
            cout << "Invalid choice!" << endl; //
    }

    return 0;           //
}
