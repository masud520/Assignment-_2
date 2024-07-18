#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, totalCost;
    double discount = 0.0;

    // Prompt user to enter the purchase amount
    cout << "Enter the purchase amount: ";
    cin >> purchaseAmount;

    // Determine the discount based on the purchase amount
    if (purchaseAmount > 500) {
        discount = 0.20; // 20% discount
    } else if (purchaseAmount > 200) {
        discount = 0.10; // 10% discount
    } else if (purchaseAmount > 100) {
        discount = 0.05; // 5% discount
    } else {
        discount = 0.0; // No discount
    }

    // Calculate total cost after applying discount
    totalCost = purchaseAmount - (purchaseAmount * discount);
    cout << "The total cost after discount is $" << totalCost << endl;

    return 0;
}
