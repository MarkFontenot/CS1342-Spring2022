#include <iostream>

using namespace std;

int findMin(int data[], const int &size) {
    int min = data[0];
    for (int i = 0; i < size; i++) {
        if (data[i] < min) {
            min = data[i];
        }
    }

    return min;
}

int str_len(char word[]) {
    int size = 0;
    while (word[size] != '\0') {
        size++;
    }
    return size;
}

int main() {
    const int size = 10;
    int myNumbers[size] = { -4, 10, 5, 5, 6, 3, 11, -6, 15, 20 };

    cout << "Find Min: " << findMin(myNumbers, size) << endl;

//    strcmp(word1, word2)

    char word[] = "What is my length?";
    cout << "Size of word: " << str_len(word) << endl;

    return 0;
}
