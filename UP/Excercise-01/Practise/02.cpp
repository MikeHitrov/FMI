#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float first, second, third;

    float p, area;

    cout << "Enter size of each sides of triangle";

    cout << "a = ";

    cin >> first;

    cout << "b = ";

    cin >> second;

    cout << "c = ";

    cin >> third;

    p = (first + second + third) / 2;

    area = sqrt(p * (p - first) * (p - second) * (p - third));

    cout << "Area = " << area << endl;

    return 0;
}