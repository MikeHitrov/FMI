#include <iostream>

using namespace std;

int main()
{
    // ********
    //  *    *
    //   *  *
    //    **
    //   *  *
    //  *    *
    // ********

    int topRows = 0, middleSymbols = 0;
    char symbol = '*';

    cin >> symbol;
    cin >> topRows;
    cin >> middleSymbols;

    string topAndBottomRow = string(2 * topRows + middleSymbols, symbol);

    cout << topAndBottomRow << endl;

    for (int i = topRows - 2; i >= 0; i--)
    {
        cout << string(topRows - i - 1, ' ') << symbol << string(middleSymbols + 2 * i, ' ') << symbol << string(i, ' ') << endl;
    }

    cout << string(topRows, ' ') << string(middleSymbols, symbol) << string(topRows, ' ') << endl;

    for (int i = 0; i < topRows - 1; i++)
    {
        cout << string(topRows - i - 1, ' ') << symbol << string(middleSymbols + 2 * i, ' ') << symbol << string(i, ' ') << endl;
    }

    cout << topAndBottomRow << endl;
}