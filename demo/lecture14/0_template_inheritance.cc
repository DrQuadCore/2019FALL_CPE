#include <iostream>
using namespace std;

void foo()
{
  cout<<"Global Function\n";
}

template <typename T>
class Cls1
{
  T Var1;
  public:
  void foo()
  {
    cout<<"Member Function\n";
  }
};

template <typename T>
class Cls2 : public Cls1<T>
{
  T Var2;
  public:
  void test()
  {
    //Cls1<T>::foo();
    foo();
  }
};

int main()
{
  Cls2<int> cls2;
  cls2.test();

  return 0;
}

