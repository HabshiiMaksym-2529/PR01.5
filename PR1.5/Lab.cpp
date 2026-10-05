#include <iostream>

#include "Pair.h"
#include "RightAngle.h"

using namespace std;

int main()
{
    Pair pair;
    RightAngle triangle;

    int choice;

    do
    {
        cout << endl;
        cout << "========== MENU ==========" << endl;
        cout << "1  - Enter Pair" << endl;
        cout << "2  - Display Pair" << endl;
        cout << "3  - Calculate product" << endl;
        cout << "4  - Enter triangle sides" << endl;
        cout << "5  - Display triangle" << endl;
        cout << "6  - Calculate hypotenuse" << endl;
        cout << "7  - Calculate area" << endl;
        cout << "0  - Exit" << endl;
        cout << "==========================" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            pair.Read();
            break;

        case 2:
            cout << "Pair: ";
            pair.Display();
            break;

        case 3:
            cout << "Product = "
                << pair.product()
                << endl;
            break;

        case 4:
            triangle.Read();
            break;

        case 5:
            cout << "Triangle: ";
            triangle.Display();
            break;

        case 6:
            cout << "Hypotenuse = "
                << triangle.hypotenuse()
                << endl;
            break;

        case 7:
            cout << "Area = "
                << triangle.area()
                << endl;
            break;

            cout << "RightAngle.toString(): "
                << triangle.toString()
                << endl;

            break;

        case 0:
            cout << "Program finished." << endl;
            break;

        default:
            cout << "Incorrect menu item." << endl;
        }

    } while (choice != 0);

    return 0;
}