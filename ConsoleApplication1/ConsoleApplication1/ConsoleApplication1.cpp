#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string clientName;
    string accountNum;
    double balance;

public:
    BankAccount(string name, string accNum, double startingBalance) {
        clientName = name;
        accountNum = accNum;
        balance = startingBalance;
    }

    void displayAccount() {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNum << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }
};
int main() {
    BankAccount account("Kevin Rusev", "123456789", 1000.0);
    account.displayAccount();

    account.deposit(500.0);
    account.withdraw(200.0);
}