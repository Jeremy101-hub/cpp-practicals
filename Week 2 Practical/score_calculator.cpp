#include<iostream>
#include<string>
#include<iomanip>
#include<windows.h>
using namespace std;
int main() {SetConsoleOutputCP(CP_UTF8);

    // ============================================================ 
    // VARIABLE DECLARATIONS (Storage Boxes)
    // ============================================================ 
    string studentName; // Text string to hold names containing spaces
    string course;      // Text string to hold the course code (BBIT/BCS)
     
    int score1, score2, score3; // Integer fields to store whole test scores 
    int totalScore;             // Holds the calculated sum of all scores
     
    double average;    // Decimal type for precision calculations
    double percentage; // Decimal type for holding percentage ratios

    // ============================================================ 
    // CONSTANT DECLARATION (Unchangeable values)
    // ============================================================ 
    const int MAX_SCORE = 100; // The ceiling cap score for any single test

    // ============================================================ 
    // WELCOME BANNER & USER INPUT
    // ============================================================ 
    cout << "========================================" << endl; 
    cout << " 🎓 STUDENT SCORE CALCULATOR 🎓" << endl; 
    cout << "========================================" << endl; 
    cout << endl;

    // Reading text rows with getline to allow spaces in text inputs
    cout << "👤 Enter student name: ";
    getline(cin, studentName); 
    
    cout << "📚 Enter course (BBIT/BCS): ";
    getline(cin, course);

    // Reading numerical data directly using the extraction stream
    cout << "📝 Enter score for Test 1: ";
    cin >> score1;
     
    cout << "📝 Enter score for Test 2: ";
    cin >> score2;
     
    cout << "📝 Enter score for Test 3: ";
    cin >> score3;

    // ============================================================ 
    // MATHEMATICAL CALCULATIONS
    // ============================================================ 
    // 1. Simple addition of whole integer values
    totalScore = score1 + score2 + score3;
    
    // 2. Division using a float literal (3.0) to avoid data truncation
    average = totalScore / 3.0;
    
    // 3. Percentage scale relative to maximum perfect performance score (300)
    percentage = (totalScore / 300.0) * 100;

    // ============================================================ 
    // DISPLAY SYSTEM FORMATTED REPORT CARD
    // ============================================================ 
    cout << endl;
    cout << "========================================" << endl; 
    cout << "          📊 REPORT CARD 📊             " << endl;
    cout << "========================================" << endl; 
    cout << endl;
     
    cout << "Student: " << studentName << endl;
    cout << "Course:  " << course << endl;
    cout << endl;
    
    cout << "💯 Test 1: " << score1 << "/" << MAX_SCORE << endl; 
    cout << "💯 Test 2: " << score2 << "/" << MAX_SCORE << endl; 
    cout << "💯 Test 3: " << score3 << "/" << MAX_SCORE << endl; 
    cout << endl;
    
    cout << "🏆 Total: " << totalScore << "/300" << endl;
    
    // fixed << setprecision(2) locks decimals down to exactly two digits
    cout << "📈 Average: " << fixed << setprecision(2) << average << endl; 
    cout << "🏁 Percentage: " << fixed << setprecision(2) << percentage << "%" << endl; 
    cout << endl;
     
    // Conditional Branching: Check logic bounds to pass or fail
    if (percentage >= 50.0) {
        cout << "🟢 Result: PASS" << endl;
    } else {
        cout << "🔴 Result: FAIL" << endl;
    }
    cout << "========================================" << endl;
    
    // Keeps window locked open when launched as an application
    cout << endl << "Press Enter to close the app...";
    cin.ignore(); // Clears any leftover input memory line breaks
    cin.get();    // Waits on keyboard feedback
    
    return 0;
}