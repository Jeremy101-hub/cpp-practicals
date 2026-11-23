#include <iostream>
#include <cstring>      // Unlocks old-school C-string functions like strlen and strcpy
using namespace std;

int main() {
    char name[50];      // Creates a fixed-size character array (max 49 letters + 1 end marker)

    cout << "Enter your name: ";
    cin.getline(name, 50); // Reads up to 50 characters including spaces

    cout << "Name: " << name << endl;
    cout << "Length: " << strlen(name) << endl; // Counts characters up to the null terminator
    cout << "First character: " << name[0] << endl; // Grabs the very first letter at index 0

    char copy[50];      // Must create another fixed-size array to hold a copy
    strcpy(copy, name); // Manually copies characters from 'name' into 'copy'
    cout << "Copy: " << copy << endl;

    return 0;
}
