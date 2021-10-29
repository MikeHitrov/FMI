#include <iostream>

using namespace std;

int main()
{
    int number = 0, sum = 0;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            cout << -i << "; ";
            sum -= i;
        }
        else
        {
            cout << i << "; ";
            sum += i;
        }
    }

    cout << endl
         << "Sum: " << sum;
}