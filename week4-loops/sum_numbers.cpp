#include <iostream>     // Unlocks input (cin) and output (cout)
using namespace std;    // Lets us write cout instead of std::cout

int main() {            // Where the program starts running
    int n;              // Stores the user's upper limit number (N)
    int sum = 0;        // Stores the running total, starting at 0

    cout << "Enter a positive number (N): "; // Prompts the user
    cin >> n;                                // Saves user input into 'n'

    // Starts i at 1, loops while i <= n, adds 1 to i after each round
    for (int i = 1; i <= n; i++) {
        sum += i;       // Adds current value of i to sum (same as sum = sum + i)
    }

    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl; // Prints result
    return 0;           // Ends program cleanly
}
