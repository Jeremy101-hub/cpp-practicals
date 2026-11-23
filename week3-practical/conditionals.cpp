#include <iostream>     // Unlocks cin and cout
using namespace std;    // Standard namespace shortcut

int main() {            // Program starts here
    int age;            // Stores user's age as a whole number
    bool hasTicket;     // Stores true (1) or false (0) for ticket
    bool isMember;      // Stores true (1) or false (0) for membership
    bool isBanned;      // Stores true (1) or false (0) for ban status

    cout << "Enter age: "; // Prompts for age
    cin >> age;            // Saves age
    cout << "Do you have a ticket? (1 for yes, 0 for no): "; //
    cin >> hasTicket;      // Saves ticket status
    cout << "Are you a member? (1 for yes, 0 for no): "; //
    cin >> isMember;       // Saves member status
    cout << "Are you banned? (1 for yes, 0 for no): "; //
    cin >> isBanned;       // Saves ban status

    // Eligible if: (18+ AND has ticket AND NOT banned) OR (is member AND NOT banned)
    bool canEnter = (age >= 18 && hasTicket && !isBanned) || //
                    (isMember && !isBanned);                 //

    if (canEnter) {        // Checks if canEnter evaluated to true
        cout << "You can enter the event!" << endl; //
    } else {               // Runs if canEnter evaluated to false
        cout << "Sorry, you cannot enter." << endl; //
    }

    return 0;              // Ends program cleanly
}
