//Implement the program in question 2 above using a selection decision structure (switch 
case)

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables to store student's details
    string fullName, course;
    int score;
    char grade;

    // Capture student's full name
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    // Capture student's course
    cout << "Enter the course: ";
    getline(cin, course);

    // Capture student's score
    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade based on the score
    switch (score / 10) {
        case 10: // Fall-through to case 9 for scores 100-90
        case 9:
        case 8:
        case 7:
            grade = 'A';
            break;
        case 6:
            grade = 'B';
            break;
        case 5:
            grade = 'C';
            break;
        default:
            grade = 'F';  // Assuming any score below 50 is an F grade
    }

    // Output the student's full name, course, and grade
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
