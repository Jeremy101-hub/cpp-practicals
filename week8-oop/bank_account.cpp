#include <iostream>     //
#include <string>       //
using namespace std;    //

class BankAccount {     //
private:                //
    string accountHolder; // Private owner name
    double balance;       // Private account balance

public:                 //
    // CONSTRUCTOR: Initializes account with validation
    BankAccount(string name, double initialBalance) { //
        accountHolder = name;     //
        if (initialBalance >= 0) { // Prevents opening an account with negative money
            balance = initialBalance; //
        } else {                //
            balance = 0;        //
            cout << "Warning: Initial balance cannot be negative. Set to 0." << endl; //
        }
    }

    // METHOD: Deposit money safely
    void deposit(double amount) { //
        if (amount > 0) {         // Ensures deposit is positive
            balance += amount;    //
            cout << "Successfully deposited: $" << amount << endl; //
        } else {                //
            cout << "Error: Deposit amount must be greater than 0." << endl; //
        }
    }

    // METHOD: Withdraw money with double validation
    void withdraw(double amount) { //
        if (amount <= 0) {         // Check 1: Rejects zero or negative withdrawals
            cout << "Error: Withdrawal amount must be greater than 0." << endl; //
            return;                // Exits the method immediately
        }

        if (amount > balance) {    // Check 2: Prevents overdrafting beyond available funds
            cout << "Error: Insufficient funds! Current balance is $" << balance << endl; //
        } else {                   //
            balance -= amount;     // Deducts the valid withdrawal amount
            cout << "Successfully withdrew: $" << amount << endl; //
        }
    }

    // METHOD: Displays account summary
    void displayBalance() {        //
        cout << "Account Holder: " << accountHolder << endl; //
        cout << "Current Balance: $" << balance << endl;     //
    }
};

int main() {            //
    cout << "--- Opening Account ---" << endl; //
    BankAccount aliceAccount("Alice Smith", 500.00); // Creates Alice's account with $500
    aliceAccount.displayBalance(); //

    cout << "\n--- Attempting Deposits ---" << endl; //
    aliceAccount.deposit(200.00);  // Valid: balance becomes $700
    aliceAccount.deposit(-50.00);  // Invalid: blocked by validation

    cout << "\n--- Attempting Withdrawals ---" << endl; //
    aliceAccount.withdraw(100.00);  // Valid: balance becomes $600
    aliceAccount.withdraw(1000.00); // Invalid: blocked due to insufficient funds
    aliceAccount.withdraw(-20.00);  // Invalid: blocked because it's negative

    cout << "\n--- Final Account Status ---" << endl; //
    aliceAccount.displayBalance(); // Prints final balance of $600

    return 0;           //
}
