//Create a simple C++ application to check if a customer is qualified for a loan given the 
//conditions below. Capture the customer details from the user. 
//Conditions
//Age must be above 22 years
//Bank balance more than 50,000
//CRB status should be good
//Must have been a customer for more than 6 months;

#include <iostream>
#include <string>

using namespace std;

// Function to check loan eligibility
bool isQualifiedForLoan(int age, double bankBalance, string crbStatus, int customerDuration) {
    return (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerDuration > 6);
}

int main() {
    // Variables to store customer details
    int age;
    double bankBalance;
    string crbStatus;
    int customerDuration;

    // Capture customer details
    cout << "Enter customer age: ";
    cin >> age;

    cout << "Enter customer bank balance: ";
    cin >> bankBalance;

    cout << "Enter customer CRB status (good/bad): ";
    cin >> crbStatus;

    cout << "Enter duration of customer relationship in months: ";
    cin >> customerDuration;

    // Check if the customer is qualified for a loan
    if (isQualifiedForLoan(age, bankBalance, crbStatus, customerDuration)) {
        cout << "Customer is qualified for a loan." << endl;
    } else {
        cout << "Customer is not qualified for a loan." << endl;
    }

    return 0;
}
