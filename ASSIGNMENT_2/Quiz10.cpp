#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00; // Example balance
    double withdrawalAmount;
    double dailyLimit = 500.00; // Example daily limit
    double dailyWithdrawal = 0.0; // Track daily withdrawal amount

    // Prompt user to enter the amount to withdraw
    cout << "Enter the amount to withdraw: ";
    cin >> withdrawalAmount;

    // Check if the withdrawal amount exceeds the balance
    if (withdrawalAmount > balance) {
        cout << "Insufficient funds." << endl;
    } else if (withdrawalAmount > dailyLimit - dailyWithdrawal) {
        // Check if the withdrawal amount exceeds the daily limit
        cout << "Exceeds daily withdrawal limit." << endl;
    } else {
        // Process the withdrawal
        balance -= withdrawalAmount;
        dailyWithdrawal += withdrawalAmount;
        cout << "Withdrawal successful. New balance is $" << balance << endl;
    }

    return 0;
}







_