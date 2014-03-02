#include <iostream>

using namespace std;

int main() {
  int age = 9;
  int * const pointer = &age;
  *pointer = 10;
  cout << *pointer << endl;

  pointer = NULL;
  return 0;
}
