#include <iostream>

using namespace std;

int main()
{
    int firstNumber = 0, secondNumber = 0, firstDigitCount = 0, secondDigitCount = 0, firstDuplicate = 0, secondDuplicate = 0;
    bool isItPrefix = true;

    cout << "Enter the value of the first number: ";
    cin >> firstNumber;

    cout << "Enter the value of the second number: ";
    cin >> secondNumber;

    firstDuplicate = firstNumber;
    secondDuplicate = secondNumber;

    if (secondNumber > firstNumber || (firstNumber > 0 && secondNumber == 0))
    {
        isItPrefix = false;
    }
    else if (firstNumber != secondNumber)
    {
        while (firstDuplicate != 0)
        {
            firstDuplicate /= 10;
            firstDigitCount++;
        }

        while (secondDuplicate != 0)
        {
            secondDuplicate /= 10;
            secondDigitCount++;
        }

        for (int i = 1; i <= firstDigitCount; i++)
        {
            int firstNumberDigit = firstNumber % 10;

            if (firstDigitCount - i < secondDigitCount)
            {
                if (secondDigitCount == 1)
                {
                    if (firstNumberDigit != secondNumber)
                    {
                        isItPrefix = false;
                        break;
                    }
                }
                else
                {
                    int secondNumberDigit = secondNumber % 10;

                    if (firstNumberDigit != secondNumberDigit)
                    {
                        isItPrefix = false;
                        break;
                    }

                    secondNumber /= 10;
                }
            }

            firstNumber /= 10;
        }
    }

    isItPrefix ? cout << "true" : cout << "false";

    return 0;
}