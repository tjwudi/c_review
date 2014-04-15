#include "stdio.h"

int main()
{
  char *c = (char*) malloc(1024);
  printf("%d\n", sizeof(c));
  return 0;
}