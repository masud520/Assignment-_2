#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        // Display the menu
        cout << "\nMenu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Calculate the area of a circle
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                area = M_PI * radius * radius; // M_PI is a constant for pi in cmath
                cout << "The area of the circle is: " << area << endl;
                break;
            case 2:
                // Calculate the area of a rectangle
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;
            case 3:
                // Calculate the area of a triangle
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;
            case 4:
                // Quit the program
                cout << "Quitting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
