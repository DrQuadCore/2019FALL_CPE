#include <iostream>

using namespace std;

template<class T>
void swapValues( T& var1, T& var2 )
{
  cout << "swapValues template" << endl;
  T temp = var1;
  var1 = var2;
  var2 = temp;
}

// for demo, passing arrays to functions
void foo(int a[3])
{
  for(auto &i : a)
    cout << &i << endl;
}

int main()
{
  int a[3], b[3];
  swapValues(a, b);

// for demo, passing arrays to functions
  for(auto &i : a)
    cout << &i << endl;
  foo(a);

  return 0;
}
