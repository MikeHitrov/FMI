#include <iostream>

using namespace std;

int main()
{
    int numberOfChars = 0;
    char firstCharacter = 'a', secondCharacter = 'a';
    bool isLexicographicallyOrdered = true;

    cin >> numberOfChars;
    cin >> firstCharacter;

    for (int i = 1; i < numberOfChars; i++)
    {
        cin >> secondCharacter;

        if ((int)firstCharacter > (int)secondCharacter)
        {
            isLexicographicallyOrdered = false;
            break;
        }

        firstCharacter = secondCharacter;
    }

    isLexicographicallyOrdered ? cout << "Lexicographically ordered." << endl : cout << "Not lexicographically ordered." << endl;
}