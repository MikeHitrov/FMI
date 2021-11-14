#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x = 0, y = 0;
    const int CIRCLE_CENTRE_X = 0, CIRCLE_CENTRE_Y = -2;

    cout << "Enter the X cordinate value: ";
    cin >> x;

    cout << "Enter the Y cordinate value: ";
    cin >> y;

    if (x > 2 || y > 2 || x < -2 || y < -2)
    {
        cout << "X, Y don't lay in the shape." << endl;
    }
    else
    {
        if (x >= 0 && x <= 2 && y >= 0 && y <= 2)
        {
            cout << "X, Y lay in the shape." << endl;
        }
        else
        {
            if (pow(x - CIRCLE_CENTRE_X, 2) - pow(y - CIRCLE_CENTRE_Y, 2) < 0)
            {
                cout << "X, Y don't lay in the shape." << endl;
            }
            else
            {
                cout << "X, Y lay in the shape." << endl;
            }
        }
    }

    return 0;
}