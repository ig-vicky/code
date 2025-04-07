#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited Rs" << amount << " successfully.\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn Rs" << amount << " successfully.\n";
        }
    }

    void display() {
        cout << "Account Details\n";
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Current Balance: Rs" << balance << endl;
    }
};

int main() {
    string name;
    int accNo;
    double initialAmount,depo,with;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter initial deposit amount: Rs";
    cin >> initialAmount;
    cout << "Enter deposit amount: Rs";
    cin >> depo;
    cout << "Enter withdraw: Rs";
    cin >> with;

    BankAccount account(name, accNo, initialAmount);

    account.deposit(depo);
    account.withdraw(with);
    account.display();

    return 0;
}
