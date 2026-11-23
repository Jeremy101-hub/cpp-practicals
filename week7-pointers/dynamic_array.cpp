#include <iostream>
using namespace std;

class DynamicArray {
private:
    int* data;                      // Pointer to our dynamically sized array on the heap
    int size;                       // How many items are currently stored inside
    int capacity;                   // Maximum slots currently available before resizing

public:
    // CONSTRUCTOR: Runs automatically when a DynamicArray is created
    DynamicArray(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        data = new int[capacity];   // Allocates the starting array on the heap
    }

    // DESTRUCTOR: Runs automatically when the program ends to clean up RAM
    ~DynamicArray() {
        delete[] data;              // 'delete[]' frees the entire dynamic array (prevents leaks)
    }

    // Adds a new number to the end, doubling array size if full
    void push_back(int value) {
        if (size == capacity) {     // Checks if we ran out of room
            int newCapacity = capacity * 2;         // Doubles the capacity
            int* newData = new int[newCapacity];    // Creates a brand-new, bigger array

            for (int i = 0; i < size; i++) {
                newData[i] = data[i];               // Copies all old items into the new array
            }

            delete[] data;          // Deletes the old, small array so memory isn't leaked
            data = newData;         // Points 'data' to the new bigger array
            capacity = newCapacity; // Updates capacity tracker

            cout << "[Resized capacity from " << capacity / 2 << " to " << capacity << "]" << endl;
        }

        data[size] = value;         // Places the new value into the next open slot
        size++;                     // Increases the count of stored items
    }

    // Prints all items currently in the array
    void display() {
        cout << "Array (Size: " << size << ", Capacity: " << capacity << "): ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    DynamicArray myArray(2);        // Starts with room for only 2 numbers
    cout << "Created dynamic array with capacity 2." << endl;

    myArray.push_back(10);          // Fits (1/2)
    myArray.push_back(20);          // Fits (2/2)
    myArray.display();

    cout << "\nAdding third element..." << endl;
    myArray.push_back(30);          // Full! Automatically doubles capacity to 4
    myArray.display();

    cout << "\nAdding fourth and fifth elements..." << endl;
    myArray.push_back(40);          // Fits (4/4)
    myArray.push_back(50);          // Full! Automatically doubles capacity to 8
    myArray.display();

    return 0;                       // ~DynamicArray() destructor runs here automatically
}
