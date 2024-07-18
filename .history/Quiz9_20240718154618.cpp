#include <iostream>
using namespace std;

int main() {
    int age;
    char movieType;
    double ticketPrice = 0.0;

    // Prompt user to enter the age of the customer
    cout << "Enter the age of the customer: ";
    cin >> age;

    // Prompt user to enter the type of movie
    cout << "Enter the type of movie (r for regular, d for 3D): ";
    cin >> movieType;

    // Determine the ticket price based on age and type of movie
    if (age < 12) {
        if (movieType == 'r') {
            ticketPrice = 5.00; // Regular movie price for children
        } else if (movieType == 'd') {
            ticketPrice = 7.00; // 3D movie price for children
        } else {
            // Invalid movie type entered
            cout << "Invalid movie type entered." << endl;
            return 1;
        }
    } else if (age >= 12 && age <= 60) {
        if (movieType == 'r') {
            ticketPrice = 10.00; // Regular movie price for adults
        } else if (movieType == 'd') {
            ticketPrice = 15.00; // 3D movie price for adults
        } else {
            // Invalid movie type entered
            cout << "Invalid movie type entered." << endl;
            return 1;
        }
    } else {
        if (movieType == 'r') {
            ticketPrice = 8.00; // Regular movie price for seniors
        } else if (movieType == 'd') {
            ticketPrice = 12.00; // 3D movie price for seniors
        } else {
            // Invalid movie type entered
            cout << "Invalid movie type entered." << endl;
            return 1;
        }
    }

    cout << "The ticket price is $" << ticketPrice << endl;

    return 0;
}
