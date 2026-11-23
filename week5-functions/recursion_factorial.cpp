#include <iostream>
using namespace std;

// 1. SIMPLE RECURSION: Multiplies on the way BACK UP after hitting the base case
int factorialRecursive(int n) {
    if (n <= 1) {       // Base case: stops the function from calling itself forever
        return 1;
    }
    return n * factorialRecursive(n - 1); // Calls itself with (n - 1)
}

// 2. TAIL RECURSION: Carries the running answer forward in 'accumulator'
int factorialTail(int n, int accumulator = 1) {
    if (n <= 1) {       // Base case: returns the final accumulated answer immediately
        return accumulator;
    }
    // Recursive call is the very last operation (uses less memory stack space)
    return factorialTail(n - 1, n * accumulator);
}

int main() {
    int num;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;

    if (num < 0) {      // Rejects negative numbers
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    cout << "\nUsing simple recursion: " << num << "! = " << factorialRecursive(num) << endl;
    cout << "Using tail recursion:   " << num << "! = " << factorialTail(num) << endl;

    return 0;
}
