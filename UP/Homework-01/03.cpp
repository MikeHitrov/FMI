#include <iostream>

using namespace std;

int main()
{
    int number = 0, n = 0, m = 0, firstDigit = 0, secondDigit = 0, thirdDigit = 0;

    cout << "Enter the input number in range [100 - 999]: ";
    cin >> number;

    firstDigit = number / 100;
    secondDigit = number / 10 % 10;
    thirdDigit = number % 10;

    n = firstDigit + secondDigit;
    m = firstDigit + thirdDigit;

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            if (number % 5 == 0)
            {
                number -= firstDigit;
            }
            else if (number % 3 == 0)
            {
                number -= secondDigit;
            }
            else
            {
                number += thirdDigit;
            }

            cout << number << " ";
        }

        cout << endl;
    }

    return 0;
}