#include <iostream>

using namespace std;

void foo(int *a, int& b) {
    b = 5;
    a[0] = b + 1;
    a[1] = *a + 1;
    a = new int[3];

    // Draw Diagram Here
}

int main() {
  int v = 3;
  int *p = new int[2];
  int *z = p;
  int data[v] = { 3, 4, 5 };
  foo(z, v);

  return 0;
}