#include <iostream>     // Unlocks screen input/output (cin/cout)
#include <fstream>      // Unlocks file input/output (ifstream/ofstream)
using namespace std;    // Standard namespace shortcut

int main() {            //
    ifstream inputFile("numbers.txt"); // Opens numbers.txt for reading ('if' = input file)

    if (!inputFile.is_open()) {        // Checks if the file failed to open (e.g., missing file)
        cout << "Error: Could not open numbers.txt for reading!" << endl; //
        return 1;                      // Exits early with an error code
    }

    int num;                           // Box to hold each number as we read it
    int sum = 0;                       // Running total starts at 0
    cout << "Reading numbers from file..." << endl; //

    // Reads one number at a time until it hits the end of the file
    while (inputFile >> num) {         //
        cout << "Read: " << num << endl; //
        sum += num;                    // Adds the number to our running total
    }

    inputFile.close();                 // Closes the input file to free Windows resources
    cout << "Total Sum: " << sum << endl; // Prints 92 to the screen

    // Opens (or creates) sum.txt for writing ('of' = output file)
    ofstream outputFile("sum.txt");    //

    if (!outputFile.is_open()) {       // Checks if Windows allowed us to create the file
        cout << "Error: Could not create sum.txt for writing!" << endl; //
        return 1;                      //
    }

    // Writes directly into sum.txt instead of the terminal screen
    outputFile << "The total sum is: " << sum << endl; //
    outputFile << "Calculated automatically by the C++ program." << endl; //

    outputFile.close();                // Saves and closes sum.txt cleanly
    cout << "Result successfully saved to sum.txt!" << endl; //

    return 0;                          //
}
