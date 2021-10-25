#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double waffleRadius, waffleFormer, ballRadius, numberOfBalls;

    cout << "Enter the radius of the ice cream waffle cup: " << endl;
    cin >> waffleRadius;

    cout << "Enter the former of the ice cream waffle cup: " << endl;
    cin >> waffleFormer;

    cout << "Enter the radius of the ice cream ball: " << endl;
    cin >> ballRadius;

    cout << "Enter the number of ice cream balls: " << endl;
    cin >> numberOfBalls;

    double waffleHeight = sqrt(pow(waffleFormer, 2) - pow(waffleRadius, 2));

    double waffleVolume = (M_PI * pow(ballRadius, 2) * waffleHeight) / 3;

    double ballsVolume = ((4 / 3 * M_PI * pow(ballRadius, 3)) / 2) * numberOfBalls;

    double iceCreamVolume = waffleVolume + ballsVolume;

    cout << "The volume of the ice cream is: " << iceCreamVolume << endl;

    return 0;
}