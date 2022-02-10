#include <iostream>
#include <limits> //  used for std::numeric_limits && std::streamsize
#include <string>

using namespace std;

int main() {
  string text;
  int input;
  cout << "Enter Option: ";

  cin >> input;
  cin.ignore(); // ignores a single character
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignores until next \n character
  cin.clear(); // resets the state of the cin buffer

  cout << "Enter a string: ";
  getline(cin, text);

  cout << "You entered " << text << endl;

  return 0;
}
