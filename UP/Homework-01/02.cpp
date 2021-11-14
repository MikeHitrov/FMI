#include <iostream>

using namespace std;

int main()
{
    char *symbols[] = {
        "I",  //1
        "IV", //4
        "V",  //5
        "IX", //9
        "X",  //10
        "XL", //40
        "IL", //49
        "L",  //50
        "XC", //90
        "IC", //99
        "C",  //100
        "CD", //400
        "ID", //499
        "D",  //500
        "CM", //900
        "IM", //999
        "M"}; //1000
    int values[] = {1, 4, 5, 9, 10, 40, 49, 50, 90, 99, 100, 400, 499, 500, 900, 999, 1000};

    int count = sizeof values / sizeof values[0]; //This just gets the number of elements
    int num = 3834;                               // Some number

    count--; //count how the index of the highest value
    while (num > 0)
    {
        //if num has a value greater than or equal to the value we are currently looking at
        //subtract that value from num and display the proper symbol for it
        if (num >= values[count])
        {
            std::cout << symbols[count];
            num -= values[count];
        }
        //if num doesn't have a value greater than or equal to the value we are currently looking at
        //decrament count we look at a lower value
        else
            count--;
    }

    std::cout << endl;
    return 0;
}