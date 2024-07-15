//Write a C++ program using Switch…Case to determine the maximum number given 
//two numbers from a user.

#include<iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    int max;

    if (num1 > num2)
        max = num1;
    else
        max = num2;

    cout << "Maximum number is: " << max << endl;

    // Using Switch...Case
    switch ((num1 > num2) - (num2 > num1)) {
        case 1:
            cout << "Maximum number is: " << num1 << endl;
            break;
        case -1:
            cout << "Maximum number is: " << num2 << endl;
            break;
        default:
            cout << "Both numbers are equal." << endl;
            break;
    }

    return 0;
}