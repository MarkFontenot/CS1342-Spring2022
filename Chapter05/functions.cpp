#include <iostream>

using namespace std;

void myFunction() {
    cout << "This is a function" << endl;
}

void increment(int & v) {
    v++;
}

int findMax(int data[], const int &size) {
    int max = data[0];
    for (int i = 0; i < size; i++) {
         if (max < data[i]) {
             max = data[i];
         }
    }
    return max;
}

void doubleValues(int data[], const int &size) {
    for (int i = 0; i < size; i++) {
        data[i] *= 2;
    }
}

void printArray(int data[], const int &size) {
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }
}

int main() {
    int value = 100;
    increment(value);

    cout << "value: " << value << endl;

    // normal primitive variables
    int variable;

    // Built-in c-arrays
    const int size = 6;
    int array[size] = { 1, 2, 3, 4, 5, 6 };

    // c-strings
    char word[] = "Hello"; // "Hello\0"
    char word2[6] = "Hello";

    cout << "FindMax(): " << findMax(array, size) << endl;

    printArray(array, size);
    cout << endl;
    doubleValues(array, size);

    printArray(array, size);
    cout << endl;

    doubleValues(array, size);


    printArray(array, size);
    cout << endl;


    return 0;
}
