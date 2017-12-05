#include <iostream>

  template< class T> struct mixin :
     public T
  {
    template <class ... Args> mixin( Args ... args ) :
      T( std::forward<Args>( args ) ... )
    {
    }
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

  struct Derived : public mixin< Base >
  {
    Derived( int test) : mixin(test)
    {
    }
  };

  Derived derived(5);

  std::cerr << "Derived test_ : " << derived.test_ << "\n";
}
