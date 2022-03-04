#include <iostream>
#include <vector>
#include <string>

using namespace std;

void reverse(vector<int> &numbers) {
    for (int i = 0; i < numbers.size() / 2; i++) {
        // swap
        int temp = numbers.at(i);
        numbers.at(i) = numbers.at(numbers.size() - 1 - i);
        numbers.at(numbers.size() - 1 - i) = temp;
    }
}

int findMin(vector<int> &numbers) {
    int min = numbers.at(0);
    for (int &val: numbers) {
        if (min > val) {
            min = val;
        }
    }
    return min;
}


void normalize(vector<int> &numbers) {
    int min = findMin(numbers);

    for (int &val : numbers) {
        val -= min;
    }
}

int main() {
    std::vector<int> numbers;
    std::vector<int> numbers2(10);
    std::vector<int> numbers3(10, -1);

    std::vector<int> numbers4 = { 0, 1, 2, 3 };

    numbers4.at(0) = 100;
//    std::cout << numbers4.at(0) << std::endl;

    // for loop w. counter
//    for (int i = 0; i < numbers4.size(); i++) {
//        std::cout << numbers4.at(i);
//    }


    std::vector<int> myVector;
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(4);

    /**
     * Range Based For Loops
     */
    for (int x : myVector) {
        x = 10;
    }
    for (int x : myVector) {
        std::cout << "x: " << x << std::endl;
    }
    for (int &x : myVector) {
        x = 10;
    }
    for (int x : myVector) {
        std::cout << "x: " << x << std::endl;
    }

    /**
     * Normalize a vector
     */
    myVector.clear();
    myVector.push_back(2);
    myVector.push_back(1);
    myVector.push_back(3);
    myVector.push_back(4);

    normalize(myVector);

    for (int x : myVector) {
        cout << x << " ";
    }
    cout << endl;

    reverse(myVector);
    for (int x : myVector) {
        cout << x << " ";
    }

    vector<int> v;
    v.push_back(1);


    /**
     * 2-D Vectors
     */
    vector<vector<int>> table;
    auto table2 = table;

    vector<int> row1;
    row1.push_back(1);
    row1.push_back(2);
    row1.push_back(3);
    table.push_back(row1); // 1 2 3

    vector<int> row2;
    row2.push_back(4);
    row2.push_back(5);
    row2.push_back(6);
    table.push_back(row2);
    // 1 2 3
    // 4 5 6

    cout << "\n\n Table: \n\n";
    for (vector<int> row : table) {
        for (int col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}
