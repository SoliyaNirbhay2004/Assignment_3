/*  Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation  */

#include <iostream>
#include <string>
using namespace std;

class Address {
public:
    string street, city, state, zip;

    void setAddress(string s, string c, string st, string z) {
        street = s; city = c; state = st; zip = z;
    }

    void showAddress() {
        cout << "Address: " << street << ", " << city << ", " << state << ", " << zip << endl;
    }
};


class Student {
public:
    string name, studentClass;
    int rollNumber;
    float marks;
    Address address;  

    void setStudent(string n, string c, int r, float m, string s, string ci, string st, string z) {
        name = n; studentClass = c; rollNumber = r; marks = m;
        address.setAddress(s, ci, st, z);  
    }

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        return 'F';
    }

    void showStudent() {
        cout << "Name: " << name << "\nClass: " << studentClass << "\nRoll Number: " << rollNumber;
        cout << "\nMarks: " << marks << "\nGrade: " << calculateGrade() << endl;
        address.showAddress();
    }
};

int main() {
    Student student;
    student.setStudent("vivek", "10th Grade", 25, 85.5, "123 Main St", "gujarat", "india", "62701");
    student.showStudent();  
    return 0;
}

