#include <iostream>

using namespace std;

int main()
{
    int startInterval, endInterval;

    cin >> startInterval;

    cin >> endInterval;

    for (int i = startInterval; i <= endInterval; i++)
    {
        switch (i)
        {
        case 1:
            cout << "One" << endl;
            break;
        case 2:
            cout << "Two" << endl;
            break;
        case 3:
            cout << "Three" << endl;
            break;
        case 4:
            cout << "Four" << endl;
            break;
        case 5:
            cout << "Five" << endl;
            break;
        case 6:
            cout << "Six" << endl;
            break;
        case 7:
            cout << "Seven" << endl;
            break;
        case 8:
            cout << "Eight" << endl;
            break;
        case 9:
            cout << "Nine" << endl;
            break;
        default:
            i % 2 == 0 ? cout << "Even" << endl : cout << "Odd" << endl;
        }
    }

    return 0;
}