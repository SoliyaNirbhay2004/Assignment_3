/* Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[10]; 
	int size;

public:
    
    Matrix(int s) : size(s) {}

    
    Matrix operator+(const Matrix& m) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.arr[i] = arr[i] + m.arr[i];
        }
        return result;
    }

    
    void input() {
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }

    
    void display() const {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices (max 10): ";
    cin >> size;

    Matrix m1(size), m2(size);

    cout << "Enter elements for the first matrix:\n";
    m1.input();

    cout << "Enter elements for the second matrix:\n";
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "Resultant matrix after addition:\n";
    m3.display();

    return 0;
}

