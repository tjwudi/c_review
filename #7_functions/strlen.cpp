#include <cstdio>

int strlen(const char * str) {
  const char * ptr = str;
  int count = 0;
  while(*ptr != '\0') {
    count ++;
    ptr ++;
  }
  return count;
}

int main() {
  printf("len: %d\n", strlen("Hello!"));
}
