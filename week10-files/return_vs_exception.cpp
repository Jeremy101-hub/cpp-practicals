#include <iostream>     // Unlocks cout
#include <fstream>      // Unlocks ifstream
#include <stdexcept>    // Unlocks standard error types like runtime_error
using namespace std;    //

// METHOD 1: Old-school Return Code (returns false if something goes wrong)
bool readFileWithReturnCode(const string& filename) { //
    ifstream file(filename);           //
    if (!file.is_open()) {             //
        return false;                  // Manually passes a false flag back to main()
    }
    return true;                       //
}

// METHOD 2: Modern C++ Exception (actively throws an alarm that cannot be ignored)
void readFileWithException(const string& filename) { //
    ifstream file(filename);           //
    if (!file.is_open()) {             //
        // Immediately halts function and jumps straight to the 'catch' block
        throw runtime_error("File not found: " + filename); //
    }
}

int main() {            //
    cout << "--- Testing Return Code Strategy ---" << endl; //
    if (readFileWithReturnCode("data.txt") == false) { // Must remember to check 'false' manually
        cout << "Return Code: Handled error gracefully. Program continues." << endl; //
    }

    cout << "\n--- Testing Exception Strategy ---" << endl; //
    try {                              // 'try' wraps risky code that might throw an error
        readFileWithException("data.txt"); //
    } 
    catch (const runtime_error& e) {   // 'catch' grabs the thrown error and prevents a crash
        cout << "Exception Caught: " << e.what() << endl; // e.what() prints our custom message
        cout << "Exception Strategy: Forced us to handle the error!" << endl; //
    }

    return 0;           //
}
