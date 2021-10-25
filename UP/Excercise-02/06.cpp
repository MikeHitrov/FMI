#include <iostream>

using namespace std;

int main()
{
    double sum = 0, number;

    cin >> number;

    while (number >= 0)
    {
        cin >> number;
        sum += number;
    }

    cout << "The sum of all numbers is: " << sum << endl;
}