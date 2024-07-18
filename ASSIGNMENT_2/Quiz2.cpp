//Write a simple C++ program using if…else-if…else conditional (decision) structure to 
//out an appropriate full name and grade of a student depending on the score entered by 
//the user. Ask the user to input the full name of the student, the course and the score. 
//Grade distribution is as shown below: 
//Score Grade
//70 and above A
//60 - 69 B
//50 - 59 C

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
    if (score >= 70) {
        grade = 'A';
    } else if (score >= 60) {
        grade = 'B';
    } else if (score >= 50) {
        grade = 'C';
    } else {
        grade = 'F';  // Assuming any score below 50 is an F grade
    }

    // Output the student's full name, course, and grade
    cout << "Student: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
