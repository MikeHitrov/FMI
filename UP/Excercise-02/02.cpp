#include <iostream>

using namespace std;

// ако n=3
//   *
//  ***
// *****
//   *

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << string(n - i, ' ') << string(2 * i - 1, '*') << endl;
    }

    cout << string(n - 1, ' ') << '*' << endl;

    return 0;
}