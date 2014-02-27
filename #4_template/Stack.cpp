#include "Stack.h"

template <typename Type>
Stack<Type>::Stack() { 
  top = 0;
}

template <typename Type>
bool Stack<Type>::isempty() {
  return top == 0;
}

template <typename Type>
bool Stack<Type>::isfull() {
  return top == MAX;
}

template <typename Type>
void Stack<Type>::push(const Type& item) {
  items[top] = item;
  top ++;
}

template <typename Type>
void Stack<Type>::pop(Type &item) {
  item = items[--top];
}


