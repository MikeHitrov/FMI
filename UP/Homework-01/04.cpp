#include <iostream>

using namespace std;

int main()
{
    int sequenceStart = 0, sequenceHelpNumber = 0;

    cout << "Enter the number from which the sequence will start: ";
    cin >> sequenceStart;

    sequenceHelpNumber = sequenceStart;
    cout << string(sequenceStart / 10 + 1, '*') << sequenceStart << endl;

    do
    {
        if (sequenceHelpNumber % 2 == 0)
        {
            sequenceStart = sequenceHelpNumber / 2;
        }
        else
        {
            sequenceStart = sequenceHelpNumber * 3 + 1;
        }

        sequenceHelpNumber = sequenceStart;

        cout << string(sequenceStart / 10 + 1, '*') << sequenceStart << endl;
    } while (sequenceStart != 1);

    return 0;
}