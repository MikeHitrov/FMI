#include <iostream>

using namespace std;

int main()
{
    bool partOfCompany = true;
    bool workEnoughTime = false;
    bool recieveSalary = partOfCompany && workEnoughTime;

    bool freeOfExcersises = false;
    bool passedExcersises = true;
    bool passedTheory = true;
    bool passCourse = (freeOfExcersises || passedExcersises) && passedTheory;

    bool isHungry = true;
    bool isMidnight = false;
    bool isCloudy = false;
    bool eat = (isHungry || isMidnight) && !isCloudy;

    bool gotEnoughSleep = false;
    bool isSleepy = false;
    bool haveToWork = true;
    bool wantToWork = true;
    bool isHappy = (gotEnoughSleep || !isSleepy) && (!haveToWork || wantToWork);

    return 0;
}