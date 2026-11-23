#include <iostream>
using namespace std;

// Demonstrates a memory leak (allocates RAM on the heap without freeing it)
void createLeak() {
    int* ptr = new int(42);         // 'new' reserves dynamic memory on the heap and stores 42
    cout << "Inside leaky function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;
    // 'ptr' vanishes when the function ends, leaving the 42 trapped in RAM forever (a leak!)
}

// Step 3 Fix: Properly frees the memory using 'delete'
void fixLeak() {
    int* ptr = new int(42);         // Allocates dynamic memory on the heap
    cout << "\nInside fixed function. Value: " << *ptr << endl;
    cout << "Memory allocated at address: " << ptr << endl;

    delete ptr;                     // Frees the heap memory back to Windows so it doesn't leak
    ptr = nullptr;                  // Clears the pointer so it doesn't become a dangerous "dangling pointer"
    cout << "Memory has been successfully freed." << endl;
}

int main() {
    cout << "--- Testing Leaky Function ---" << endl;
    createLeak();

    cout << "\n--- Testing the Fix ---" << endl;
    fixLeak();

    return 0;
}
