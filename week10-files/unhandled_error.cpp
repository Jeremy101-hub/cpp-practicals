#include <iostream>     // Unlocks cout
#include <fstream>      // Unlocks ifstream
using namespace std;    //

int main() {            //
    // Tries to open a file that doesn't exist, intentionally skipping is_open()
    ifstream myFile("missing_file.txt"); //

    string data;        // Empty string box
    cout << "Attempting to read from missing file..." << endl; //

    myFile >> data;     // Fails silently without crashing; 'data' stays blank

    cout << "Data read: " << data << endl; // Prints nothing after the colon
    cout << "Program continued running without crashing." << endl; //

    return 0;           //
}
