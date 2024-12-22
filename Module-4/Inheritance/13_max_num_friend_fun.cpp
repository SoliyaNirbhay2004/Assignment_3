/* Write a program to find the max number from given two numbers 
using friend function */

#include <iostream>
using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int maxNumber = findMax(num1, num2);

    cout << "\nThe maximum number is: " << maxNumber << endl;

    return 0;
}

