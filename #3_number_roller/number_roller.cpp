#include <iostream>
#include <unistd.h>
using namespace std;

// You can output std::flush to clear a line

int main() {
  sleep(5); // test if sleep function works, it's fun!
  cout << "I am awake now! Let's get our hands dirty." << endl;

  for (int i = 0; i < 100; i ++) {
    cout << "i: " << i;
    sleep(1);
    cout << "\033[K" << std::flush;
  }
  return 0;
}
