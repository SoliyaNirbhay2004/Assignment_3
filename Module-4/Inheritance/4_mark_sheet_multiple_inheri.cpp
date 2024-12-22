/* Write a C++ Program display Student Mark sheet using Multiple inheritance */

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    void showPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};


class Academic : public Person {
protected:
    float marks[5];

public:
    void setMarks(float m1, float m2, float m3, float m4, float m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    void showMarks() const {
        cout << "\nMarks: " << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }

        float total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << (total / 5) << "%" << endl;
    }
};


class Student : public Academic {
public:
    void showMarkSheet() const {
        showPerson();  
        showMarks();   
    }
};

int main() {
    Student student;

    student.setPerson("vivek", 20);

    student.setMarks(85.5, 92.0, 78.5, 88.0, 91.5);

    cout << "\nStudent Mark Sheet:" << endl;
    student.showMarkSheet();

    return 0;
}

