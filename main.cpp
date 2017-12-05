#include <iostream>

  template< class T> class mixin :
     public T
  {

  };


int main(int argc, char *argv[])
{
  std::cerr << "Hello world!\n";

  struct Base
  {
    Base(int test) :
      test_(test)
    {
    }
    
    int test_;
  };

  struct Derived : public Base
  {
    Derived( int test) : Base(test)
    {
    }
  };

  Derived derived(5);
  
}
