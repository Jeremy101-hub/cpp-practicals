#include <iostream>     //
using namespace std;    //

// BAD DESIGN: Everything is public, allowing anyone to corrupt the balance
class BadBankAccount {  //
public:                 //
    double balance;     // Exposed directly to the outside world
    BadBankAccount() {  //
        balance = 0.0;  //
    }
};

// GOOD DESIGN: Data is private and protected behind validated methods
class GoodBankAccount { //
private:                //
    double balance;     // Locked away from direct access
public:                 //
    GoodBankAccount() { //
        balance = 0.0;  //
    }
    void deposit(double amount) { // Safe way to add money
        if (amount > 0) {         // Blocks negative or zero deposits
            balance += amount;    //
        }
    }
    double getBalance() {         // Safe read-only view of the balance
        return balance;           //
    }
};

int main() {            //
    cout << "--- Testing BAD Design ---" << endl; //
    BadBankAccount badAccount;    //
    badAccount.balance = -5000;   // Direct hack! Sets an impossible negative balance
    cout << "Bad Account Balance: " << badAccount.balance << endl; //

    cout << "\n--- Testing GOOD Design ---" << endl; //
    GoodBankAccount goodAccount;  //
    // goodAccount.balance = -5000; // Would fail to compile because 'balance' is private!
    goodAccount.deposit(1000);    // Must go through the safe deposit method
    cout << "Good Account Balance: " << goodAccount.getBalance() << endl; //

    return 0;           //
}
