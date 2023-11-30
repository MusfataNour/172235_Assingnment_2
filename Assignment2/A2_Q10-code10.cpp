#include <iostream>

using namespace std;

int main() {
    double accountBalance = 1000.0; 
    double withdrawalAmount;

    cout << "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;

    
    double dailyWithdrawalLimit = 500.0;
    double accountBalanceLimit = 0.0;

    if (withdrawalAmount <= 0) {
        cout << "Invalid withdrawal amount. Please enter a positive value.\n";
    } else if (withdrawalAmount > dailyWithdrawalLimit) {
        cout << "Withdrawal amount exceeds daily limit. Please enter a smaller amount.\n";
    } else if (withdrawalAmount > accountBalance) {
        cout << "Insufficient funds. Your account balance is $" << accountBalance << ".\n";
    } else if (withdrawalAmount > accountBalanceLimit) {
        cout << "Withdrawal successful. Your new account balance is $" << (accountBalance - withdrawalAmount) << ".\n";
        
        accountBalance -= withdrawalAmount;
    } else {
        cout << "Withdrawal amount exceeds account balance limit. Please enter a smaller amount.\n";
    }

    return 0;
}
