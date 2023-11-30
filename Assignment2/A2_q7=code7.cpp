#include <iostream>

using namespace std;

int main() {
    int daysLate;
    char bookType;

    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;

    cout << "Enter the type of book (R for regular, C for children's, or N for reference): ";
    cin >> bookType;

    double fine = 0.0;

    if (daysLate <= 0) {
        cout << "No late fee. Thank you for returning the book on time!" << endl;
    } else {
        if (bookType == 'R') {
            fine = daysLate * 1.5;
        } else if (bookType == 'C') {
            fine = daysLate * 1.0;
        } else if (bookType == 'N') {
            fine = daysLate * 2.0;
        } else {
            cout << "Invalid book type. Please enter R, C, or N." << endl;
            return 1; 
        }

        cout << "The late fee for the book is: $" << fine << endl;
    }

    return 0;
}
