#include <iostream>
#include <cassert>
#include "Stack.h"

using namespace std;

int main() {
  Stack<int>* stack = new Stack<int>();
  assert(stack->isempty());
  return 0;
}
