#include <stdio.h>
#include <unistd.h>

int main() 
{
  int childpid;
  int countChild, countParent;

  printf("before fork()\n");
  childpid = fork();
  if (childpid == 0) 
  {
    countChild = 0;
    while (countChild < 20) {
      printf("Child: %d\n", countChild);
      sleep(1);
      countChild ++;
    }
  }
  else 
  {
    countParent = 0;
    while (countParent < 15) {
      printf("Parent: %d\n", countParent);
      sleep(1);
      countParent ++;
    }
  }

  return 0;
}

