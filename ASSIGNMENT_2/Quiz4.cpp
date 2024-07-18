//Write a C++ program using Switch…Case to determine the maximum number given 
//two numbers from a user.

#include <iostream>

using namespace std;

int main() {
    // Variables to store the two numbers
    double num1, num2;
    int comparison;

    // Capture two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Compare the two numbers
    if (num1 > num2) {
        comparison = 1;
    } else if (num1 < num2) {
        comparison = 2;
    } else {
        comparison = 3;
    }

    // Determine the maximum number using switch
    switch (comparison) {
        case 1:
            cout << "The maximum number is: " << num1 << endl;
            break;
        case 2:
            cout << "The maximum number is: " << num2 << endl;
            break;
        case 3:
            cout << "Both numbers are equal: " << num1 << endl;
            break;
        default:
            cout << "Error in comparison." << endl;
    }

    return 0;
}
