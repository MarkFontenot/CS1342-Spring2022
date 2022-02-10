#include <iostream>
#include <string>

using namespace std;

void func(string word);
void func2(string &word);

int main() {
    string word = "Hello";
    word = "World Hello";
//    word.at(20);
//    word[20] = 'a';

    word += "String";

//    // getline and cin
//    string name; // Erik Gabrielsen
//    cin >> name;
//
//    getline(cin, name); // '\n'
//    cout << "Name: " << name << endl;

    string firstname;
    string lastname;

    getline(cin, firstname, ' ');
//    getline(cin, firstname, ' ');
    getline(cin, lastname, 'l');

    cout << "FirstName: " << firstname << endl;
    cout << "LastName: " << lastname;





    return 0;
}
