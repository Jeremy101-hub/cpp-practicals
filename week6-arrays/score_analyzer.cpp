#include <iostream>
#include <iomanip>      // Unlocks setprecision(2)
using namespace std;

// Calculates the average from an array of scores
double calculateAverage(int scores[], int size) {
    int sum = 0;                        // Running total starts at 0
    for (int i = 0; i < size; i++) {    // Loops through all scores in the array
        sum += scores[i];               // Adds each score to sum
    }
    return (double)sum / size;          // Casts sum to double so decimals aren't lost
}

// Prints every score that beat the class average
void displayAboveAverage(int scores[], int size, double average) {
    cout << "\nScores above average (" << average << "):" << endl;
    bool found = false;                 // Tracks whether at least one score was above average

    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {      // Checks if current score is higher than average
            cout << " Score " << scores[i] << " at position " << i + 1 << endl;
            found = true;               // Marks that we found a match
        }
    }

    if (!found) {                       // Runs if nobody scored above average
        cout << " None" << endl;
    }
}

int main() {
    const int SIZE = 10;                // Constant array size of 10 students
    int scores[SIZE];                   // Array to hold 10 integer scores

    cout << "Enter " << SIZE << " student scores:" << endl;
    for (int i = 0; i < SIZE; i++) {    // Loops 10 times to fill indices 0 through 9
        cout << "Score " << i + 1 << ": ";
        cin >> scores[i];               // Stores each input into its slot in the array
    }

    double average = calculateAverage(scores, SIZE); // Calls function to get average

    cout << "\n--- Results ---" << endl;
    cout << "Average score: " << fixed << setprecision(2) << average << endl;

    displayAboveAverage(scores, SIZE, average); // Calls function to display top scores

    return 0;
}
