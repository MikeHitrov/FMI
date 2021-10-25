#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            bool isPrime = true;

            for (int k = 2; k < i; k++)
            {
                if (i % k == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
            {
                cout << i << endl;
            }
        }
    }

    return 0;
}