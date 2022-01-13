#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char cstring[] = "Welcome";

  int index = 0;
  while (cstring[index] != '\0') {
    cout << cstring[index] << endl;
    index++;
  }

  int size = index;

  cout << "OUr size: " << size << endl;
  cout << "Strlen() size: " << strlen(cstring) << endl;

  return 0;
}