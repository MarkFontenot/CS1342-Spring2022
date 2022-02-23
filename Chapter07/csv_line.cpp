#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void parseValues(string, string[]);

int main() {
  string test = "1, Erik, Gabrielsen, egabrielsen@smu";

  stringstream s1(test);  // "1, Erik, Gabrielsen, egabrielsen@smu"

  string user_id;
  string first_name;
  string last_name;
  string email;

  getline(s1, user_id, ',');
  getline(s1, first_name, ',');

  // string tester = "Erik;Gabrielsen;egabrielsen@smu.edu";
  // const int size = 3;
  // string values[size];

  // parseValues(tester, values);

  // for (int i = 0; i < size; i++) {
  //   cout << i << ": " << values[i] << endl;
  // }

  return 0;
}

void parseValues(string stringToParse, string values[3]) {
  // convert to inSS
  stringstream inSS(stringToParse);  // Erik;Gabrielsen;egabrielsen@smu.edu
  // parse values
  getline(inSS, values[0], ';');  // Erik
  getline(inSS, values[1], ';');  // Gabrielsen
  getline(inSS, values[2]);       // egabrielsen@smu.edu
}