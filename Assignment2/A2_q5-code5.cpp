#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    do {
        // Display menu
        cout << "Menu:\n";
        cout << "1. Calculate the area of a circle\n";
        cout << "2. Calculate the area of a rectangle\n";
        cout << "3. Calculate the area of a triangle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        
        switch (choice) {
            case 1:
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "The area of the circle is: " << PI * pow(radius, 2) << endl;
                break;
            case 2:
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The area of the rectangle is: " << length * width << endl;
                break;
            case 3:
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is: " << 0.5 * base * height << endl;
                break;
            case 4:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4.\n";
        }
    } while (choice != 4);

    return 0;
}
