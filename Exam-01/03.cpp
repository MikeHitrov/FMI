#include <iostream>

using namespace std;

int main()
{
    int shapeSize = 0, spaceSize = 0;

    cout << "Enter the size of the shape: ";
    do
    {
        cin >> shapeSize;
    } while (shapeSize < 3 || shapeSize > 25);

    spaceSize = 2 * (shapeSize - 2);

    //Top row of the shape
    cout << "*****";

    for (int i = 0; i < spaceSize; i++)
    {
        cout << ' ';
    }

    cout << "*****" << endl;

    //Middle row of the shape
    for (int i = 1; i <= shapeSize - 2; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        cout << "*   *";

        for (int j = 0; j < spaceSize - 2 * i; j++)
        {
            cout << ' ';
        }

        cout << "*   *" << endl;
    }

    //Bottom row of the shape
    for (int i = 0; i < shapeSize - 1; i++)
    {
        cout << ' ';
    }

    for (int i = 0; i < 8; i++)
    {
        cout << '*';
    }

    return 0;
}