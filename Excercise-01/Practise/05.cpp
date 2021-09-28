#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, k;

    cout << "Enter the values of x and k: \n";

    cout << "X must be three-digit number: ";

    do
    {
        cin >> x;
    } while (x < 100 || x > 999);

    cout << "K must be number between 1 and 3: ";

    do
    {
        cin >> k;
    } while (k < 1 || k > 3);

    cout << "The number is: " << to_string(x)[k - 1];

    return 0;
}