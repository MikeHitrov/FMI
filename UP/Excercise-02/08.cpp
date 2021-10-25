#include <iostream>

using namespace std;

int main()
{
    int number, digitCounter = 0, average = 0;

    cin >> number;

    while (number != 0)
    {
        digitCounter++;
        average += number % 10;

        number /= 10;
    }

    average /= digitCounter;

    average < 7
        ? cout << "Light" << endl
        : cout << "Heavy" << endl;
}