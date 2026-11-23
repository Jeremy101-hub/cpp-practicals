#include <iostream>     // Unlocks cout
using namespace std;    //

class Animal {          // Base class
public:                 //
    // 'virtual' tells C++ to check the ACTUAL object type at runtime (Dynamic Binding)
    // Without 'virtual', it would print the generic Animal sound instead of barking!
    virtual void speak() { //
        cout << "Animal makes a generic sound." << endl; //
    }
};

class Dog : public Animal { // Derived class
public:                 //
    void speak() {      // Overrides the base class speak() method
        cout << "Dog barks: Woof! Woof!" << endl; //
    }
};

int main() {            //
    cout << "--- With Virtual Keyword (Dynamic Binding) ---" << endl; //

    Animal* myPet;      // Creates a pointer of the parent type (Animal)
    myPet = new Dog();  // Points it to a child object (Dog) on the heap

    myPet->speak();     // Because of 'virtual', C++ sees it's a Dog and prints "Woof! Woof!"

    delete myPet;       // Frees the heap memory cleanly
    return 0;           //
}
