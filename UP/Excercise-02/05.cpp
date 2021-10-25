#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    for (int i = 2; i <= 3; i++)
    {
        int poweredNumber = number;

        for (int k = 0; k < i - 1; k++)
        {
            poweredNumber *= number;
        }

        cout << poweredNumber << endl;
    }

    // Can be done easier by:
    // cout << pow(number, 2) << endl;
    // cout << pow(number, 3) << endl;
}