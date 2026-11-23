#include <iostream>
#include <windows.h>
using namespace std;
int main() { SetConsoleOutputCP(CP_UTF8); 
    // ============================================================
    // VARIABLE DECLARATIONS (Storage Boxes)
    // ============================================================
    string name;
    string course;
    string hobby;
    string reason;
    string expectation;
    string definition;
    // WELCOME MESSAGE & QUESTIONS
    // ============================================================
    cout << "========================================" << endl;
    cout << "  🚀 WELCOME TO YOUR FIRST PROGRAM! 🚀  " << endl;
    cout << "========================================" << endl;
    cout << endl;

    // Question 1: Name
    cout << "1. What is your name? ";
    getline(cin, name);

    // Question 2: Course
    cout << "2. What course are you doing? (BBIT/BCS): ";
    getline(cin, course);

    // Question 3: Hobby
    cout << "3. What is your hobby? ";
    getline(cin, hobby);

    // Question 4: Reason
    cout << "4. Why did you choose this course? ";
    getline(cin, reason);

    // Question 5: Expectation
    cout << "5. What do you expect to learn in programming? ";
    getline(cin, expectation);

    // Question 6: Definition
    cout << "6. In your own words, what is programming? ";
    getline(cin, definition);

    // ============================================================
    // DISPLAY THE SUMMARY (The Payoff!)
    // ============================================================
    cout << endl;
    cout << "========================================" << endl;
    cout << " ✨ YOUR PROFILE SUMMARY ✨" << endl;
    cout << "========================================" << endl;
    cout << endl;

    cout << "👤 Name:        " << name << endl;
    cout << "🎓 Course:      " << course << endl;
    cout << "🎨 Hobby:       " << hobby << endl;
    cout << "💡 Reason:      " << reason << endl;
    cout << "🎯 Expectation: " << expectation << endl;
    cout << "💻 Programming is: " << definition << endl;
    cout << endl;

    cout << "========================================" << endl;
    cout << "🎉 Great job, " << name << "! You are on your way to becoming a programmer! 🎉" << endl;
    cout << "========================================" << endl;

    return 0;
}