#include <iostream>
#include <string>

using namespace std;

int main() { 
    string fullName;
    string course;
    int score;

    cout << "Enter full name of the student: ";
    getline(cin, fullName);

    cout << "Enter course: ";
    getline(cin, course);

    cout << "Enter score: ";
    cin >> score;

   
    if (score >= 70) {
        cout << "Congratulations, " << fullName << "! Your grade for " << course << " is A." << endl;
    } else if (score >= 60) {
        cout << "Well done, " << fullName << ". Your grade for " << course << " is B." << endl;
    } else if (score >= 50) {
        cout << "Good effort, " << fullName << ". Your grade for " << course << " is C." << endl;
    } else {
        cout << "Sorry, " << fullName << ". You did not pass " << course << "." << endl;
    }

    return 0;
}