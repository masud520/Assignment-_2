#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double fine = 0.0;

    // Prompt user to enter the number of days late
    cout << "Enter the number of days late: ";
    cin >> daysLate;
    
    // Prompt user to enter the type of book
    cout << "Enter the type of book (r for regular, c for children, f for reference): ";
    cin >> bookType;

    // Calculate fine based on the type of book and days late
    if (daysLate > 0) {
        if (bookType == 'r') {
            fine = 0.50 * daysLate; // Regular book fine
        } else if (bookType == 'c') {
            fine = 0.25 * daysLate; // Children's book fine
        } else if (bookType == 'f') {
            fine = 1.00 * daysLate; // Reference book fine
        } else {
            // Invalid book type entered
            cout << "Invalid book type entered." << endl;
            return 1;
        }
        cout << "The late fee is $" << fine << endl;
    } else {
        cout << "No late fee as the book is returned on time." << endl;
    }

    return 0;
}
