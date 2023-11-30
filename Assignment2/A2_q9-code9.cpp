#include <iostream>

using namespace std;

int main() {
    int age;
    char movieType;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (R for regular, 3 for 3D): ";
    cin >> movieType;

    double ticketPrice = 0.0;

    if (age < 0 || age > 120) {
        cout << "Invalid age. Please enter a valid age.\n";
        return 1; // Exit the program with an error code
    }

    if (movieType == 'R') {
        if (age <= 12) {
            ticketPrice = 7.5; // Regular movie, child ticket
        } else if (age >= 60) {
            ticketPrice = 8.0; // Regular movie, senior ticket
        } else {
            ticketPrice = 10.0; // Regular movie, adult ticket
        }
    } else if (movieType == '3') {
        if (age <= 12) {
            ticketPrice = 10.0; // 3D movie, child ticket
        } else if (age >= 60) {
            ticketPrice = 12.0; // 3D movie, senior ticket
        } else {
            ticketPrice = 15.0; // 3D movie, adult ticket
        }
    } else {
        cout << "Invalid movie type. Please enter R for regular or 3 for 3D.\n";
        return 1; // Exit the program with an error code
    }

    cout << "The ticket price is: $" << ticketPrice << endl;

    return 0;
}
