#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    if (a == 1 && b == 0)
    {
        return 1;
    }
    else if (a == 0 && b == 1)
    {
        return 1;
    }
    else if (a == 1 && b == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}