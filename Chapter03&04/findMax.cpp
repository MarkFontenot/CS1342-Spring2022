#include <iostream>

using namespace std;

/**
 * @brief Find the maximum of 5 numbers entered by the user.
 *
 * @return int
 */
int main() {
  double maximum;
  cout << "Enter 5 numbers" << endl;

  for (int i = 0; i < 5; i++) {
    double input;
    cin >> input;

    if (input > maximum) {
      maximum = input;
    }
  }

  cout << "Max is " << maximum << endl;

  return 0;
}