#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;
    cout << "First number: " << endl;
    cin >> firstNumber;
    cout << "Second number: " << endl;
    cin >> secondNumber;

    firstNumber = firstNumber * secondNumber;
    secondNumber = firstNumber / secondNumber;
    firstNumber = firstNumber / secondNumber;

    cout << "First number (new value): " << firstNumber << endl;
    cout << "Second number (new value): " << secondNumber << endl;

    return 0;
}
