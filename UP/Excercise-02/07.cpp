#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum = 0, average;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int number;

        cin >> number;

        sum += number;
    }

    average = sum / n;

    // This line sets the precision of double numbers when written in the console to 2.
    cout.precision(2);

    cout << "Sum: " << sum << endl;
    cout << "Avg: " << average << endl;
}