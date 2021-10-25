#include <iostream>

using namespace std;

int main()
{
    int number;

    do
    {
        cin >> number;
    } while (number < 100 || number > 999);

    int firstDigit = number / 100;
    int secondDigit = number / 10 % 10;
    int thirdDigit = number % 10;

    cout << "First digit: " << firstDigit << ", second digit: " << secondDigit << ", third digit: " << thirdDigit << endl;

    int sumOfDigits = firstDigit + secondDigit + thirdDigit;

    cout << "Sum of digits: " << sumOfDigits << endl;

    int productOfDigits = firstDigit * secondDigit * thirdDigit;

    cout << "Product of digits: " << productOfDigits << endl;

    return 0;
}