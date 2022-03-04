#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<vector<string>> characters;
    ifstream inFile;
    inFile.open("../file.txt");

    if (!inFile.is_open()) {
        cout << "Error" << endl;
        return 1;
    }

    string line;

    double sum{0};
    int count{0};
    while (getline(inFile, line)) {
        vector<string> row;
        istringstream lineSS(line);

        string firstName, lastName, ageString;
        int age;
        getline(lineSS, firstName, ',');
        getline(lineSS, lastName, ',');
        getline(lineSS, ageString);
        age = stoi(ageString);
        sum += age;

        row.push_back(firstName);
        row.push_back(lastName);
        row.push_back(ageString);
        characters.push_back(row);

        count++;
    }

    cout << sum / count << endl;


    cout << "\nTable: " << endl;
    for (auto row : characters) {
        for (auto col: row) {
            cout << col << " ";
        }
        cout << endl;
    }


    inFile.close();


    return 0;
}
