#include <iostream>
#include <string>
#include <csignal> // for raise()
#include <limits> // for numeric_limits
#include <sstream> // for string streams
#include <fstream> // for file stream

using namespace std;

void bad_function();
void getline_with_cin();
void invalid_input_handling();
void string_streams();
void basic_file_io();

int main() {
//    getline_with_cin();
//    invalid_input_handling();
    string_streams();
    return 0;
}

void bad_function() {
    raise(SIGSEGV);
}

void getline_with_cin() {
    string firstName, lastName;

    cin >> firstName;
    cin.ignore();
//    cin.clear();

    getline(cin, lastName);

    cout << "Firstname: " << firstName;
    bad_function();
    cout << "\nLastname: " << lastName << endl;
}

void invalid_input_handling() {
    int number;

    do {
        cout << "Enter a number: " << endl;
        cin >> number;

        while (cin.fail()) {
            // Clear error state
            cin.clear();

            // Ignore characters in stream until newline
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Try again: " << endl;
            cin >> number;
        }

        cout << "You entered: " << number << endl;
    } while (number != 1);
}

void string_streams() {
    string sentence = "Erik,Gabrielsen,123456789,Houston,USA";
    istringstream myStream(sentence);  // string buffer
    string word;
    int count{0};
    myStream >> word;
    fstream file1;
    while (getline(file1, word, ',', 0)) {
        cout << "word: " << word << endl;
        count ++;
    }
}

void basic_file_io() {
    // TODO: Some basic file input and

}