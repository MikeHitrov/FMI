#include <iostream>

using namespace std;

int main()
{
    bool firstStatement = true;
    bool secondStatement = false;

    bool conjunction = firstStatement || secondStatement;

    bool implication = false;

    if (firstStatement && secondStatement || firstStatement == false && secondStatement == true || firstStatement == false && secondStatement == false)
    {
        implication == true;
    }

    return 0;
}