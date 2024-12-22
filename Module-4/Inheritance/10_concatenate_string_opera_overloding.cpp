/* Write a program to concatenate the two strings using Operator Overloading */

#include <iostream>
#include <string>
using namespace std;

class String {
private:
    string str;

public:
    
    String(const string& s = "") : str(s) {}

    String operator+(const String& s) {
        return String(str + s.str);
    }

    void display() const {
        cout << str << endl;
    }
};

int main() {
    string s1, s2;

    cout << "Enter the first string: ";
    getline(cin, s1);

    cout << "Enter the second string: ";
    getline(cin, s2);

    String string1(s1);
    String string2(s2);

    String result = string1 + string2;

    cout << "Concatenated string: ";
    result.display();

    return 0;
}

