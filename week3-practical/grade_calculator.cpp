#include <iostream>     // Unlocks cin and cout
#include <iomanip>      // Unlocks setprecision(1)
using namespace std;    //

int main() {            //
    double score;       // Decimal box for percentage score
    char grade;         // Single-character box for base letter grade
    char modifier = ' '; // Single-character box for '+' or '-', initialized to blank space

    cout << "===== GRADE CALCULATOR =====" << endl; //
    cout << "Enter percentage score (0-100): "; //
    cin >> score;       //

    // Input validation: rejects impossible scores
    if (score < 0 || score > 100) { //
        cout << "Invalid score! Must be between 0 and 100." << endl; //
        return 1;       // Exits early with error code 1
    }

    // Determine base letter grade
    if (score >= 90) {          //
        grade = 'A';            //
    } else if (score >= 80) {   //
        grade = 'B';            //
    } else if (score >= 70) {   //
        grade = 'C';            //
    } else if (score >= 60) {   //
        grade = 'D';            //
    } else {                    //
        grade = 'F';            //
    }

    // Determine plus/minus modifiers (only for A, B, C, D)
    if (grade != 'F') {                         // No F+ or F-
        int lastDigit = (int)score % 10;        // Drops decimals, then '% 10' grabs the last digit
        if (grade == 'A') {                     //
            if (score >= 97) modifier = '+';    // 97–100 is A+
            else if (score < 93) modifier = '-';// 90–92 is A-
        } else if (grade == 'B' || grade == 'C' || grade == 'D') { //
            if (lastDigit >= 7) modifier = '+'; // Ends in 7, 8, or 9 -> '+'
            else if (lastDigit <= 3) modifier = '-'; // Ends in 0, 1, 2, or 3 -> '-'
        }
    }

    // Display result
    cout << "\nScore: " << fixed << setprecision(1) << score << "%" << endl; //
    cout << "Grade: " << grade;                 //
    if (modifier != ' ') cout << modifier;      // Only prints '+' or '-' if assigned
    cout << endl;                               //

    // Step 4.3: Personalized feedback message using switch
    switch (grade) {                            //
        case 'A': cout << "Excellent work!" << endl; break;   //
        case 'B': cout << "Good job!" << endl; break;         //
        case 'C': cout << "Satisfactory." << endl; break;     //
        case 'D': cout << "Needs improvement." << endl; break;//
        case 'F': cout << "Please seek help." << endl; break; //
    }

    return 0;           //
}
