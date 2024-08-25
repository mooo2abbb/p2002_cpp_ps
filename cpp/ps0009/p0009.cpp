#include <iostream>
using namespace std;
void swapArrays(int* arr1, int size1, int* arr2, int size2) {
    int minSize = (size1 < size2) ? size1 : size2;
    for (int i = 0; i < minSize; ++i) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
}
void insertElement(int* arr, int& size, int element, int index = -1) {
    if (index < 0 || index >= size) {
        arr[size] = element; 
    } else {
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
    }
    ++size;
}
void removeElement(int* arr, int& size, int index = -1) {
    if (index < 0 || index >= size) {
        --size;  
    } else {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
}
void swapElementsBetweenArrays(int* arr1, int index1, int* arr2, int index2) {
    int temp = arr1[index1];
    arr1[index1] = arr2[index2];
    arr2[index2] = temp;
}
void swapElementsWithinArray(int* arr, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
int main() {
    const int maxSize = 10;
    int arr1[maxSize] = {1, 2, 3, 4, 5};
    int arr2[maxSize] = {6, 7, 8, 9, 10};
    int size1 = 5;
    int size2 = 5; 
    swapArrays(arr1, size1, arr2, size2);
    insertElement(arr1, size1, 11, 2);
    removeElement(arr2, size2, 1);
    swapElementsBetweenArrays(arr1, 0, arr2, 1);
    swapElementsWithinArray(arr1, 1, 3);
    cout << "Array 1: ";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Array 2: ";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
}