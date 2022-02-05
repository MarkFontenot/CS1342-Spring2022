#include <iostream>
#include <cstring>

using namespace std;

int myStrlen(char word[]) {
    int size{0};
    while (word[size] != '\0') {
        size++;
    }
    return size;
}

int main() {
    char str1[] = "George"; // "George\0"
    char str2[] = "George";

    // strlen - string length
    int size = myStrlen(str1);

    cout << "myStrlen(): " <<  size << endl;
    cout << "myStrlen(): " <<  strlen(str1) << endl;

    // strcmp(str1, str2)
    if (strcmp(str1, str2) == 0) {
        cout << "These are the same" << endl;
    } else {
        cout << "Not equal" << endl;
    }

    // strcat(char[], char[]) - concatenates 2 strings
    char str3[50] = "George"; // "George\0                   "
    char str4[] = " and Elroy";

    strcat(str3, str4);

    cout << str3 << endl;

    // strcpy(char[], char[]) - copies the contents of 2nd argument to the first
    char str5[10] = "Elroy";
    char str6[] = "George";

    strcpy(str5, str6);

    cout << "strcpy(): " << str5 << endl;

    return 0;
}
