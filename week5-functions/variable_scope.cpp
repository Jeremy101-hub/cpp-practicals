#include <iostream>
using namespace std;

int globalCounter = 100; // GLOBAL variable: declared outside all functions, visible everywhere

void displayGlobal() {
    // Can read globalCounter because it is global
    cout << "Inside displayGlobal: globalCounter = " << globalCounter << endl;
    // cout << localCounter; // Would crash: localCounter only exists inside main()
}

void modifyGlobal() {
    globalCounter = 500; // Permanently changes the shared global variable
    cout << "Inside modifyGlobal: globalCounter changed to " << globalCounter << endl;
}

void localDemo() {
    int globalCounter = 999; // LOCAL variable with the exact same name (SHADOWS the global one)
    cout << "Inside localDemo: globalCounter = " << globalCounter << endl; // Prints 999
}

int main() {
    int localCounter = 50; // LOCAL to main() only

    cout << "In main: globalCounter = " << globalCounter << endl; // Prints 100
    cout << "In main: localCounter = " << localCounter << endl;   // Prints 50

    displayGlobal();    // Prints 100
    modifyGlobal();     // Changes globalCounter to 500
    localDemo();        // Prints its own local 999 without touching the global 500

    cout << "Back in main: globalCounter = " << globalCounter << endl; // Prints 500
    return 0;
}
