/* Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)  */

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

class Student : public Person {
protected:
    float percentage;

public:

    void setStudent(string n, int a, float p) {
        setPerson(n, a);  
        percentage = p;
    }

    void showStudent() const {
        showPerson();  
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    float salary;

public:
 
    void setTeacher(string n, int a, float s) {
        setPerson(n, a);  
        salary = s;
    }

    void showTeacher() const {
        showPerson();  
        cout << "Salary: " << salary << endl;
    }
};

int main() {
   
    Student student;
    student.setStudent("John Doe", 20, 85.5);

    Teacher teacher;
    teacher.setTeacher("Jane Smith", 35, 50000);

    cout << "\nStudent Info:" << endl;
    student.showStudent();

    cout << "\nTeacher Info:" << endl;
    teacher.showTeacher();

    return 0;
}

