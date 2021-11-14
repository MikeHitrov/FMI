#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, nonNegativeNumbers = 0, dividedBySeven = 0;
    bool areTherePositiveNUmbers;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    if (a >= 0)
    {
        nonNegativeNumbers++;
    }
    else if (b >= 0)
    {
        nonNegativeNumbers++;
    }
    else if (c >= 0)
    {
        nonNegativeNumbers++;
    }

    if (a % 7 == 0)
    {
        dividedBySeven++;
    }
    else if (b % 7 == 0)
    {
        dividedBySeven++;
    }
    else if (c % 7 == 0)
    {
        dividedBySeven++;
    }

    bool isDividedAndNonNegative = nonNegativeNumbers >= 0 && dividedBySeven == 1;

    cout << "There are at least 2 non negative numbers and only one that divides by 7: " << isDividedAndNonNegative << endl;

    return 0;
}