#include <iostream>     // Unlocks cin and cout
#include <string>       // Unlocks std::string
using namespace std;    // Standard namespace shortcut

class Student {         // Defines a blueprint named 'Student'
private:                // Hides data so outside code cannot directly touch or corrupt it
    string name;        // Private variable for the student's name
    int age;            // Private variable for the student's age

public:                 // Exposes safe methods (buttons/screens) for outside code to use
    // CONSTRUCTOR: Runs automatically when a new Student is created
    Student(string studentName, int studentAge) { //
        name = studentName;     // Sets the student's name
        setAge(studentAge);     // Calls our setter so the initial age is also validated
    }

    // GETTER: Safely reads and returns the private 'name'
    string getName() {          //
        return name;            //
    }

    // SETTER: Safely updates 'age' only if it passes our rules
    void setAge(int newAge) {   //
        if (newAge > 0 && newAge < 120) { // Checks that age is realistic (1 to 119)
            age = newAge;       // Valid! Saves the new age
        } else {                //
            cout << "Error: Invalid age! Age must be between 1 and 119." << endl; //
            age = 0;            // Sets a safe default instead of storing a negative number
        }
    }

    // GETTER: Safely reads and returns the private 'age'
    int getAge() {              //
        return age;             //
    }
};

int main() {                    //
    Student s1("Alice", 20);    // Creates object 's1' using the constructor

    cout << "Student Name: " << s1.getName() << endl; // Reads name via public getter
    cout << "Student Age: " << s1.getAge() << endl;   // Reads age via public getter

    cout << "\nAttempting to change age to 25..." << endl; //
    s1.setAge(25);              // Valid update through setter
    cout << "New Age: " << s1.getAge() << endl; //

    cout << "\nAttempting to change age to -5..." << endl; //
    s1.setAge(-5);              // Triggers validation error and resets to 0
    cout << "Age after invalid attempt: " << s1.getAge() << endl; //

    return 0;                   //
}
