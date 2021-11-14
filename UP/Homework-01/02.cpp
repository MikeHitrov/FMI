#include <iostream>

using namespace std;

int main()
{
    int arabicNumber = 0;
    string romanNumber = "";

    cin >> arabicNumber;

    while (arabicNumber != 0)
    {
        if (arabicNumber >= 1000)
        {
            romanNumber += "M";
            arabicNumber -= 1000;
        }
        else if (arabicNumber >= 900)
        {
            romanNumber += "CM";
            arabicNumber -= 900;
        }
        else if (arabicNumber >= 500)
        {
            romanNumber += "D";
            arabicNumber -= 500;
        }
        else if (arabicNumber >= 400)
        {
            romanNumber += "CD";
            arabicNumber -= 400;
        }
        else if (arabicNumber >= 100)
        {
            romanNumber += "C";
            arabicNumber -= 100;
        }
        else if (arabicNumber >= 90)
        {
            romanNumber += "XC";
            arabicNumber -= 90;
        }
        else if (arabicNumber >= 50)
        {
            romanNumber += "L";
            arabicNumber -= 50;
        }
        else if (arabicNumber >= 40)
        {
            romanNumber += "XL";
            arabicNumber -= 40;
        }
        else if (arabicNumber >= 10)
        {
            romanNumber += "X";
            arabicNumber -= 10;
        }
        else if (arabicNumber >= 9)
        {
            romanNumber += "IX";
            arabicNumber -= 9;
        }
        else if (arabicNumber >= 5)
        {
            romanNumber += "V";
            arabicNumber -= 5;
        }
        else if (arabicNumber >= 4)
        {
            romanNumber += "IV";
            arabicNumber -= 4;
        }
        else if (arabicNumber >= 1)
        {
            romanNumber += "I";
            arabicNumber -= 1;
        }
    }

    cout << arabicNumber << "->" << romanNumber << endl;

    return 0;
}