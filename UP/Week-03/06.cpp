#include <iostream>

using namespace std;

int main()
{
    int number = 0;

    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        string wordResult = "";

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
                    if (k % 3 == 0)
                    {
                        wordResult += "Mozz";
                    }
                    else if (k % 3 == 1)
                    {
                        wordResult += "Mozz";
                    }
                    else
                    {
                        wordResult += "Sezz";
                    }
                }
            }
        }
        cout << i << " -> " << wordResult << endl;
    }
}