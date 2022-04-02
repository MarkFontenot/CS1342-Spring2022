#include <iostream>

using namespace std;

class MyClass {
 public:
  int *ptr;
  char *assignmentName;

  MyClass(const MyClass &copyClass); // copy constructor
  MyClass();
};

MyClass::MyClass() { ptr = new int(10); assignmentName = new char[20]; }

MyClass::MyClass(const MyClass &copyClass) {
  // ptr = copyClass.ptr;

  ptr = new int;
  *ptr = *(copyClass.ptr);

  assignmentName = new char[20];
  for (int i = 0; i < 20; i++) {
    assignmentName[i] = copyClass.assignmentName[i];
  }

}

void updateClass(MyClass localClass) { *(localClass.ptr) = 100; }

int main() {
  MyClass obj1;
  MyClass obj2(obj1);  // copy constructor called

  cout << "ptr 1: " << *(obj2.ptr) << endl;
  updateClass(obj2);  // copy constructor called
  cout << "ptr 1 again: " << *(obj2.ptr) << endl;
  return 0;
}