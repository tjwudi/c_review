#ifndef STACK_H
#define STACK_H

template <class Type>
class Stack {
private:
  enum { MAX = 10 };
  Type items[MAX];
  int top;
public:
  Stack();
  bool isempty()const;
  bool isfull()const;
  void push(const Type& item);
  void pop(Type &item);
};

#endif
