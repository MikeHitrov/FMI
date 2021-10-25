#include <iostream>

using namespace std;

int main()
{
    int oddNumbers, number, helpNumber, oddNumbersCounter = 0;

    cin >> oddNumbers;

    do
    {
        cin >> number;
    } while (number % 2 == 0);

    oddNumbersCounter++;
    helpNumber = number;

    while (oddNumbers != oddNumbersCounter)
    {
        cin >> number;

        if (number % 2 != 0)
        {
            cout << "Division: " << helpNumber - number << endl;
            helpNumber = number;
            oddNumbersCounter++;
        }
    }
}