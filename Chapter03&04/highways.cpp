#include <iostream>

using namespace std;

int main() {
    int highwayNumber;

    cout << "Enter a Highway Number: ";
    cin >> highwayNumber;

    // determine if valid highway number
    // 1. if highway is less than 1
    // 2. if highway is > 999
    // 3. if highway ends in 00 Ex: 200
    if (highwayNumber < 1 || highwayNumber > 999 || highwayNumber % 100 == 0) {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    } else {
        if (highwayNumber >= 1 && highwayNumber <= 99) {
            cout << "I-" << highwayNumber << " is primary, ";
            if (highwayNumber % 2 == 0) {
                cout << "going east/west" << endl;
            } else {
                cout << "going north/south" << endl;
            }
        } else {
            cout << "I-" << highwayNumber << " is auxiliary, ";
            int primaryHighway = highwayNumber % 100;
            cout << "serving I-" << primaryHighway << ", ";
            if (highwayNumber % 2 == 0) {
                cout << "going east/west" << endl;
            } else {
                cout << "going north/south" << endl;
            }
        }
    }

    return 0;
}
