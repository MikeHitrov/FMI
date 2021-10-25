#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int sumOfDividers = 0;

        for (int k = 1; k < i - 1; k++)
        {
            if (i % k == 0)
            {
                sumOfDividers += k;
            }
        }

        if (i == sumOfDividers)
        {
            cout << i << endl;
        }
    }
}