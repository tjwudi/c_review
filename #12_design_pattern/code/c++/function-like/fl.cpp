#include <iostream>
#include <functional>

template <class T>
class LessOP : public std::binary_function<T, T, bool> {
public:
  bool operator() (const T &x, const T &y) const { return x < y; }
};

int main()
{
  LessOP<int> less;
  if (less(9, 10)) 
  {
    std::cout << "OK" << std::endl;
  }
  else
  {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
