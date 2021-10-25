#include <iostream>
#include <math.h>

using namespace std;

bool CheckIfTriangleisValid(int a, int b, int c)
{
    return (a + b > c && a + c > b && b + c > a);
}

int main()
{
    int sideA, sideB, sideC;

    cout << "Enter the value of side A: ";
    cin >> sideA;

    cout << "Enter the value of side B: ";
    cin >> sideB;

    cout << "Enter the value of side C: ";
    cin >> sideC;

    if (CheckIfTriangleisValid(sideA, sideB, sideC))
    {
        double semiPerimeter = (sideA + sideB + sideC) / 2;
        double area = sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC));

        cout << "Area: " << area << endl;

        double heightA = (2 * area) / sideA;
        double heightB = (2 * area) / sideB;
        double heightC = (2 * area) / sideC;

        cout << "ha: " << heightA << ", hb: " << heightB << ", hc: " << heightC << endl;
    }
    else
    {
        cout << "There is no valid triangle." << endl;
    }

    return 0;
}