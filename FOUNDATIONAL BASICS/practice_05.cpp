#include <iostream>
#include <iomanip>  // For controlling output format

using namespace std;

// Global balance variable
double balance = 0.0;

// Function prototypes
void showBalance();
void deposit();
void withdraw();
void displayMenu();

int main()
{
    cout << "\n============================";
    cout << "\n   Welcome to MyBank System";
    cout << "\n============================\n";
    
    cout << "Enter initial balance: $";
    while (!(cin >> balance) || balance < 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a valid initial balance: $";
    }
    
    showBalance();
    
    int choice;
    while (true)
    {
        displayMenu();
        cout << "Enter your choice: ";
        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input! Please enter a number between 1 and 3.\n";
            continue;
        }

        switch (choice)
        {
        case 1: deposit(); break;
        case 2: withdraw(); break;
        case 3: cout << "\nThank you for using MyBank. Goodbye!\n"; return 0;
        default: cout << "Invalid choice! Please select a valid option.\n";
        }
    }
}

void displayMenu()
{
    cout << "\n============================";
    cout << "\n          Bank Menu         ";
    cout << "\n============================\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Exit\n";
}

void showBalance()
{
    // Formatting the balance to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "\n----------------------------";
    cout << "\n Current Balance: $" << balance;
    cout << "\n----------------------------\n";
}

void deposit()
{
    double amount;
    cout << "Enter amount to deposit: $";
    while (!(cin >> amount) || amount <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a positive amount: $";
    }
    balance += amount;
    cout << "\nSuccessfully deposited $" << amount << "!\n";
    showBalance();
}

void withdraw()
{
    double amount;
    cout << "Enter amount to withdraw: $";
    while (!(cin >> amount) || amount <= 0) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Invalid input! Please enter a positive amount: $";
    }

    if (amount > balance)
    {
        cout << "\nInsufficient balance! Withdrawal failed.\n";
    }
    else
    {
        balance -= amount;
        cout << "\nSuccessfully withdrew $" << amount << "!\n";
    }
    showBalance();
}