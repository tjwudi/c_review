template <typename Type>
class Stack {
private:
  enum { MAX = 10 };
  Type items[MAX];
  int top;
public:
  Stack();
  bool isempty()const;
  bool isfull()const;
  bool push(const Type& item);
  bool pop(Type &item);
}
