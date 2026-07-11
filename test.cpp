#include <iostream>
#include <windows.h>
using namespace std;
/*
 This is a small thing made out of boredom that everyone did before
 No data is saved
 All done in real time
 0 AI help js research
 Take it as a simple exercise; this was old, and I want to keep my old projects to revisit them someday.
*/

int choice;
double balance = 0.0;                           // Global initialization
string name = "Linus Torvalds";

double depositBalance(double dAmount){          // Function #1
    cout << "Enter amount to deposit:" << endl;
    cin >> dAmount;
    balance += dAmount;
    cout << "Deposit successful." << endl;
    return balance;
};

double withdrawBalance(double wAmount) {        // Function #2
    cout << "Enter amount to withdraw:" << endl;
    cin >> wAmount;
    balance -= wAmount;
    cout << "Withdrawal successful." << endl;
    return balance;
};
void showBalance(double balance){               // Function #3
    cout << "───────────" << endl
         << "| Name: " << name << endl
         << "| Balance: " << balance << endl
         << "───────────" << endl;
};
int main(){
    SetConsoleOutputCP(CP_UTF8); // to be able to render " ─ "
    cout << "──────────[ Welcome to The National Bank (NB). ]──────────" << endl; // Only at start of program
    // Use ASCII Alt + 2500 then release for " ─ "
    while (true) {
        cout << "[ Menu ]: " << endl
            << "────────────────" << endl
            << "| 1- Deposit" << endl
            << "| 2- Withdraw" << endl
            << "| 3- View Account" << endl
            << "| 0 - Exit" << endl
            << "────────────────" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
                depositBalance(balance);
                continue;
            case 2:
                withdrawBalance(balance);
                continue;
            case 3:
                showBalance(balance);
                continue;
            case 0:
                break;
        }

        break;
    }
    cout << "──────────[ Thank you for choosing The National Bank. ]──────────" << endl;
    return 0;
}
