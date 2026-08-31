#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    std::string accountHolder; // ŒûÀ–¼‹`l
    double balance;            // Žc‚

public:

    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {
    }

    double getBalance() const {
        return balance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    void displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"
            << "Current Balance: " << balance << "\n";
    }
};
