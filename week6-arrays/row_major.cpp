#include <iostream>
using namespace std;

int main() {
    // Creates a 2D grid (table) with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},                   // Row 0
        {5, 6, 7, 8},                   // Row 1
        {9, 10, 11, 12}                 // Row 2
    };

    cout << "Row-major traversal (row by row):" << endl;
    for (int row = 0; row < 3; row++) {         // Outer loop moves down row by row
        for (int col = 0; col < 4; col++) {     // Inner loop moves across column by column
            cout << matrix[row][col] << " ";    // Prints value at current row & column
        }
        cout << endl;                           // New line at the end of each row
    }

    cout << "\nMemory addresses (each int takes 4 bytes):" << endl;
    for (int row = 0; row < 3; row++) {
        for (int col = 0; col < 4; col++) {
            // '&' grabs the exact RAM memory address where each number lives
            cout << "matrix[" << row << "][" << col << "] = " 
                 << matrix[row][col] 
                 << " at address " << &matrix[row][col] << endl;
        }
    }

    cout << "\nObservation: Addresses increase row by row." << endl;
    cout << "Row 0 is stored completely, then row 1, then row 2." << endl;
    cout << "This is called ROW-MAJOR ORDER." << endl;

    return 0;
}
