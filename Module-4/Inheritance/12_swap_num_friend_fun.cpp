/* Write a program to swap the two numbers using friend function 
without using third variable  */

#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    cout << "\nBefore swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    swapNumbers(num1, num2);

    cout << "\nAfter swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}

