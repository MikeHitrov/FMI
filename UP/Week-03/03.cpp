#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        int sumOfDivisors = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sumOfDivisors += j;
            }
        }

        if (sumOfDivisors == i)
        {
            cout << i << " - ";

            for (int k = 2; k < i; k++)
            {
                if (i % k == 0)
                {
                    bool isPrime = true;

                    for (int j = 2; j < k; j++)
                    {
                        if (k % j == 0)
                        {
                            isPrime = false;
                        }
                    }

                    if (isPrime)
                    {
                        cout << k << " ";
                    }
                }
            }

            cout << endl;
        }
    }
}