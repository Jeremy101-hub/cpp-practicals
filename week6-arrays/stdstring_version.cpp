#include <iostream>
#include <string>       // Unlocks modern dynamic C++ strings
using namespace std;

int main() {
    string name;        // No fixed size needed; grows automatically in memory

    cout << "Enter your name: ";
    getline(cin, name); // Reads the full line cleanly

    cout << "Name: " << name << endl;
    cout << "Length: " << name.length() << endl; // Built-in .length() tool
    cout << "First character: " << name[0] << endl; // Grabs first character at index 0

    string copy = name; // Copies easily using a normal '=' sign
    cout << "Copy: " << copy << endl;

    string greeting = "Hello, " + name + "!"; // Stitches strings together easily with '+'
    cout << greeting << endl;

    return 0;
}
