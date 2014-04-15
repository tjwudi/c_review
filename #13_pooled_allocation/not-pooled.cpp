#include <unistd.h>

class Wrapper 
{
  private: 
    int data;
  public:
    void set_data(int);
};

void Wrapper::set_data(int data) 
{
  this->data = data;
}

int main()
{
  sleep(10);
  for (int i = 0; i < 10000; i ++) 
  {
    for (int j = 0; j < 10000; j ++)
    {
      new Wrapper();
    }
  }
  sleep(40);
  return 0;
}
