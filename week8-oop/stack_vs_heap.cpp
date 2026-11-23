#include <iostream>     // Unlocks cout
#include <string>       // Unlocks std::string
using namespace std;    //

class Car {             //
public:                 //
    string model;       //

    Car(string m) {     // Constructor: runs when a Car is created
        model = m;      //
        cout << "Car created: " << model << endl; //
    }

    ~Car() {            // Destructor: runs when a Car is destroyed
        cout << "Car destroyed: " << model << endl; //
    }
};

int main() {            //
    cout << "--- Creating Stack Object ---" << endl; //
    Car stackCar("Toyota");     // STACK object: created automatically, cleaned up automatically at '}'

    cout << "\n--- Creating Heap Object ---" << endl; //
    Car* heapCar = new Car("Honda"); // HEAP object: created manually with 'new', returns a pointer

    // Use arrow '->' instead of dot '.' to access members through a pointer
    cout << "Heap car model: " << heapCar->model << endl; //

    cout << "\n--- End of main function ---" << endl; //
    delete heapCar;             // MUST manually delete heap object to trigger ~Car() and prevent leaks

    return 0;                   // stackCar ("Toyota") is automatically destroyed right here!
}
