#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char str1[6] = { 'H', 'e', 'l', 'l', 'o', '!' };
  char str2[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
  cout << strlen(str1) << " " << strlen(str2) << endl;
  return 0;
}
