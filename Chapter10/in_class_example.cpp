#include <iostream>
#include <string>

using namespace std;

//class definition
class Profile {
public:
    // public, private, protected

    // Constructors()
    // Default Constructor
    Profile();
    // Overloaded Constructor
    Profile(string, string, int);

    // utility
    void display() const;

    // getters / setters
    string getFirstname() const;
    void setFirstname(string newFirstName);
    string getLastname() const;
    void setLastname(string newLastname);
    int getAge() const;
    void setAge(int newAge);


    // data members
private:
    string firstName;
    string lastName;
    int age;
};

void Profile::setFirstname(string newFirstName) {
    firstName = newFirstName;
}

string Profile::getFirstname() const {
    return firstName;
}

string Profile::getLastname() const {
    return lastName;
}

void Profile::setLastname(string newLastname) {
    lastName = newLastname;
}

int Profile::getAge() const {
    return age;
}

void Profile::setAge(int newAge) {
    age = newAge;
}

void Profile::display() const {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
}

// initializer list
Profile::Profile() : firstName{"John"}, lastName{"Doe"}, age{0} {
    cout << "Default Constructor" << endl;
}

Profile::Profile(string firstName, string lastName, int age) {
    cout << "Overloaded Constructor" << endl;

    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
}

int main() {

    int x;
    x = 10;

    int y{10};

    Profile profile1; //object
    Profile profile2("Erik", "Gabrielsen", 26);
    Profile profile3;

    profile1.display();
//
//    profile1.setFirstname("Erik");
//    cout << profile1.getFirstname();
    return 0;
}
