#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    const int MAGICNUMBER = 3;

    int initialNumber;

    cin >> initialNumber;

    int finalNumber = initialNumber;

    finalNumber += initialNumber * initialNumber;

    finalNumber = finalNumber / initialNumber;

    finalNumber += 17;

    finalNumber -= initialNumber;

    finalNumber = finalNumber / 6;

    cout << "Final number is: " << finalNumber << " and my guess is: " << MAGICNUMBER;

    return 0;
}