#include <iostream>
#include <string>

using namespace std;

int main() {
    // Capture student details
    string fullName;
    string course;
    int score;

    cout << "Enter full name of the student: ";
    getline(cin, fullName);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter score: ";
    cin >> score;

    // Determine and output the grade
    if (score >= 70) {
        cout << "Congratulations, " << fullName << "! Your grade for " << course << " is A." << endl;
    } else if (score >= 60) {
        cout << "Well done, " << fullName << ". Your grade for " << course << " is B." << endl;
    } else if (score >= 50) {
        cout << "Good effort, " << fullName << ". Your grade for " << course << " is C." << endl;
    } else if (score >= 40) {
        cout << "Keep working hard, " << fullName << ". Your grade for " << course << " is D." << endl;
    } else if (score >= 0 && score < 40) {
        cout << "Sorry, " << fullName << ". Your grade for " << course << " is F." << endl;
    } else {
        cout << "Invalid score entered for " << fullName << " in " << course << "." << endl;
    }

    return 0;
}
