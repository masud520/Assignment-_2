#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (r for regular, c for children, f for reference): ";
    cin >> bookType;

    if (daysLate > 0) {
        if (bookType == 'r') {
            fine = 0.50 * daysLate;
        } else if (bookType == 'c') {
            fine = 0.25 * daysLate;
        } else if (bookType == 'f') {
            fine = 1.00 * daysLate;
        } else {
            cout << "Invalid book type entered." << endl;
            return 1;
        }
        cout << "The late fee is $" << fine << endl;
    } else {
        cout << "No late fee as the book is returned on time." << endl;
    }

    return 0;
}
