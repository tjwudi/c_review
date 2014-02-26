#include <iostream>
#include <string>
#include <cstdio>
#include <climits>
#include <cassert>
#include "util.h"

using namespace std;

char buf[100] = { 0 };

int main () {
  int a = ~0U >> 1, count_bits = count_of_bits(a);
  sprintf(buf, "the integer type on this machine has %d bits", count_bits);
  cout << buf << endl;
  sprintf(buf, "and one byte has %d bits ...", CHAR_BIT);
  cout << buf << endl;
  sprintf(buf, "so the integer type on this machine has %d bytes", count_bits / CHAR_BIT);
  cout << buf << endl;

  // use assertion to check
  assert(sizeof (a) == count_bits / CHAR_BIT);
  cout << "And the assertion is all good!" << endl;
  return 0;
}
