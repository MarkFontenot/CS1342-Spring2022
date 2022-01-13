#include <iostream>

using namespace std;

int main() {
  int input{0};
  int count{0};
  int sum{0};

  cout << "Enter a number: " << endl;
  cin >> input;

  while (input != 0) {
    sum += input;
    count++;

    cout << "Enter a number: " << endl;
    cin >> input;
  }

  double average = static_cast<double>(sum) / count;

  return 0;
}