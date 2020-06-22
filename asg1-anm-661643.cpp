// This program displays a menu prompting users to select a choice
// to calculate the area of either a circle, rectangle or triangle using
// values from the user and upon completion of the calculation,
// the menu is displayed again.
// Author:  Alexander Musyoki
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int choice = 0;
    do{
        cout << "<------------------ Menu --------------------->" << endl;
        cout << "\t1. Area of a circle" << endl;
        cout << "\t2. Area of a rectangle" << endl;
        cout << "\t3. Area of a triangle" << endl;
        cout << "\t4. Quit" << endl;
        cout << "Please make a choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the radius of the circle: ";
            double radius;
            cin >> radius;
            double pi = 2 * asin(1.0);
            double cir_total = pow(radius, 2) * pi;
            cout << fixed << showpoint << setprecision(2);
            cout << "The area of the circle is: " << cir_total << endl;
        }
        else if (choice == 2) {
            cout << "Enter the height of the rectangle: ";
            double length;
            cin >> length;
            cout << "\nEnter the width of the rectangle: ";
            double width;
            cin >> width;
            double rec_total = length * width;
            cout << fixed << showpoint << setprecision(2);
            cout << "The area of the rectangle is: " << rec_total << endl;
        }
        else if (choice == 3) {
            cout << "Enter the base of the triangle: ";
            double base;
            cin >> base;
            cout << "\nEnter the height of the triangle: ";
            double height;
            cin >> height;
            double tri_total = 0.5 * base * height;
            cout << fixed << showpoint << setprecision(2);
            cout << "The area of the triangle is: " << tri_total << endl;
        }
        else if (choice == 4) {
            cout << "\nThank you for your time. Have a nice day" << endl;
            choice++;
        }
        else {
            cout << "Please enter a valid choice" << endl;
        }
    } while (choice > 0 && choice < 5);
}
