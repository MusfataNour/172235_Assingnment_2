#include <iostream>

#include <string>

using namespace std;

int main() {
    
    string name;
    int age;
    double bankBalance;
    bool crbStatus;
    int monthsAsCustomer;

    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter customer age: ";
    cin >> age;

    cout << "Enter bank balance: ";
    cin >> bankBalance;

    cout << "Enter CRB status (1 for good, 0 for bad): ";
    cin >> crbStatus;

    cout << "Enter months as a customer: ";
    cin >> monthsAsCustomer;

    
    if (age > 22 && bankBalance > 50000 && crbStatus && monthsAsCustomer > 6) {
        cout << "Congratulations, " << name << "! You are qualified for the loan." << endl;
    } else {
        cout << "Sorry, " << name << ". You do not meet the eligibility criteria for the loan." << endl;
    }

    return 0;
}
