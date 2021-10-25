#include <iostream>

using namespace std;

int greatestCommonDivisor(int a, int b)
{
    if (a == 0)
        return b;
    return greatestCommonDivisor(b % a, a);
}

int main()
{
    int number;

    cout << "Enter a 5-digit number:";

    do
    {
        cin >> number;
    } while (number < 10000 || number > 99999);

    int firstDigit = number / 10000;
    int secondDigit = number / 1000 % 10;
    int thirdDigit = number / 100 % 10;
    int fourthDigit = number / 10 % 10;
    int fifthDigit = number % 10;

    if (thirdDigit % 2 == 0)
    {
        int gcd = firstDigit;
        gcd = greatestCommonDivisor(secondDigit, thirdDigit);
        gcd = greatestCommonDivisor(thirdDigit, fourthDigit);
        gcd = greatestCommonDivisor(fourthDigit, fifthDigit);

        cout << "The greatest common divisor is: " << gcd << endl;
    }

    return 0;
}