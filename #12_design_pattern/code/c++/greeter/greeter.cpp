#include <iostream>
using namespace std;

class Greeter {
  public:
    void say() {
      cout << "Welcome to our ";
      this->sayName();
    }

    virtual void sayName() = 0; 
};

class RestaurantGreeter : public Greeter {
  public:
    void sayName() { 
      cout << "restaurant" << endl;
    }
};

class HotelGreeter : public Greeter {
  public:
    void sayName() {
      cout << "hotel" << endl;
    }
};

int main() {
  RestaurantGreeter rg;
  rg.say();

  HotelGreeter hg;
  hg.say();
  return 0;
}
