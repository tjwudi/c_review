#include <iostream>

template <class T>
class Complex {
  public:
    Complex (T r = 0, T i = 0): re(r), im(i) { };
    T real() { return this->re; };
    T imag() { return this->im; };
  private:
    T re, im;
};


int main() {
  Complex<double>* comp = new Complex<double>(1.2, 2.3);
  std::cout << comp->real() << std::endl;
  std::cout << comp->imag() << std::endl;
  return 0;
}
