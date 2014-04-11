#include <iostream>

class A {
  public:
    virtual void print();
};

class B : A {
};

int main() 
{
  B* b = new B();  
  return 0;
}
