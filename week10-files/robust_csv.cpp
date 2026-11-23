#include <iostream>     // Unlocks cout
#include <fstream>      // Unlocks ifstream
#include <sstream>      // Unlocks stringstream to chop up comma-separated lines
#include <string>       // Unlocks std::string
#include <stdexcept>    // Unlocks invalid_argument exception
using namespace std;    //

int main() {            //
    ifstream file("students.csv");     // Opens our CSV data file

    if (!file.is_open()) {             // Stops cleanly if students.csv is missing
        cout << "Error: Could not find students.csv!" << endl; //
        return 1;                      //
    }

    string line;                       // Holds one full row of text at a time
    cout << "--- Processing Student Records ---" << endl; //

    while (getline(file, line)) {      // Reads the file row by row
        if (line.empty()) continue;    // Skips any accidental blank lines

        stringstream ss(line);         // Turns the row string into a stream we can slice up
        string name;                   //
        string scoreStr1, scoreStr2, scoreStr3; // Temporarily holds scores as text strings

        // Reads text up to each comma ','
        getline(ss, name, ',');        //
        getline(ss, scoreStr1, ',');   //
        getline(ss, scoreStr2, ',');   //
        getline(ss, scoreStr3, ',');   //

        try {                          // Protects against corrupted text like "Error"
            int s1 = stoi(scoreStr1);  // Converts string to int; throws invalid_argument if not a number
            int s2 = stoi(scoreStr2);  //
            int s3 = stoi(scoreStr3);  //

            double average = (s1 + s2 + s3) / 3.0; // Calculates decimal average
            cout << name << " -> Average: " << average << endl; //
        } 
        catch (const invalid_argument& e) { // Catches Charlie's "Error" text without crashing
            cout << "WARNING: Skipping malformed record for " << name 
                 << " (Invalid score data)." << endl; // Logs warning and continues loop
        }
    }

    file.close();                      // Closes students.csv
    cout << "\n--- Processing Complete ---" << endl; //

    return 0;           //
}
