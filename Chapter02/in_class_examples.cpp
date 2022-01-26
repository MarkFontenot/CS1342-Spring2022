#include <iostream>

using namespace std;

int main() {
    const int value = 10;

    int mutableVariable = 10;
    mutableVariable = 100;


    // mutability
    // immutable - cannot change its value
    // mutable - can be changed

    // +, -, *, /
    double result = static_cast<double>(value) / 7;


    // % - modulo
    int moduleResult = 10 % 4;
    std::cout << moduleResult;

   int evenOrOdd;
   std::cin >> evenOrOdd;

   if (evenOrOdd % 2 == 0) {
       std::cout << "Even" << endl;
   } else {
       std::cout << "Odd" << endl;
   }

    // c-string
    char word[20];
    word[0] = 'c';
    word[1] = 'a';
    word[2] = 't';
    word[2] = '\0';
    char word2[] = "hello world\0";

    string name = "Erik";
    name.length();
    name.append(" Gabrielsen");

    cout << word2;


    return 0;
}
