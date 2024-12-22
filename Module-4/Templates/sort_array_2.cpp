/* Write a program of to sort the array using templates  */

#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 25, 12, 22, 11};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original integer array: ";
    printArray(intArr, intSize);

    sortArray(intArr, intSize);

    cout << "Sorted integer array: ";
    printArray(intArr, intSize);

    return 0;
}

