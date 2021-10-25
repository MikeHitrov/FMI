#include <iostream>

using namespace std;

int main()
{
    int numberOfChairs, priceForChair, chairsForDiscount, discount = 0, chairsCounter = 0, total = 0;

    cin >> numberOfChairs;
    cin >> priceForChair;
    cin >> chairsForDiscount;

    for (int i = 0; i < numberOfChairs; i++)
    {
        if (chairsCounter == chairsForDiscount)
        {
            discount += 2;
            chairsCounter = 0;
        }

        total += priceForChair * (100 - discount) / 100;
        chairsCounter++;
    }

    cout << total << endl;
}