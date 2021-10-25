#include <iostream>
#include<math.h>

using namespace std;

int main() {
    int firstNumber, secondNumber;
    
    cout << "Enter the first number: ";
    cin >> firstNumber;
    
    cout << "Enter the second number: ";
    cin >> secondNumber;
    
    firstNumber = firstNumber + secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber - secondNumber;
    
    cout << "First number is: " << firstNumber << "\n";
    cout << "Second number is: " << secondNumber;

    return 0;
}