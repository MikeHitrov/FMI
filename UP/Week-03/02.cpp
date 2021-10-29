#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << "; ";
        sum += i;
    }

    cout << endl
         << "Sum: " << sum;
}