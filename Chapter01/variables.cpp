#include <iostream>
#include <string>

//using namespace std;
using std::string;
using std::cout;
using std::cin;
using std::endl;

/*
 * Types of Errors
 * 1. Compile Error
 * 2. Runtime Error
 * 3. Undefined Behavior Error
 *        Logic Error
 */

/*
 * main()
 * Starting point for this program
 */
int main() {
    // variable declaration
    int value; // 4 byte integer
    // variable initialization
    value = 100;

    // modifiers
    long long int x = 10;
    long int y = 123423455828;
    cout << y << endl;

//    char c = 't';

    // variable declarations and initializations
    int value2 = 10; // old method
    int value3{10}; // preferred method

    float float1{10.50}; // 4 bytes
    double double1{20.5}; // 8 bytes

    char alpha = 'a'; // 'a' == 'A'

    string name = "Erik Gabrielsen";

    string new_name = "Elroy";

    // Console Output - insertion operator
    std::cout << "Name: " <<  name << std::endl;
    std::cout << "Age: " << float1;
    // Hello World Hi Again
    // Hello WorldHi Again

    // Characters in
    int a; // 129
    char b; // .
    float c;  //
    float d; // 498 || .498

    cin >> a >> b >> c >> d;
    cout << a << " " << b  << " " << c;


    return 0;
}
