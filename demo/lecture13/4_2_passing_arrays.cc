#include <iostream>

using namespace std;

#if 1
// for one array size
void foo(int (&a)[3])
{
  for(auto &i : a)
    cout << &i << endl;
}
#else
// for variable array sizes
template<size_t N>
void foo(int (&a)[N])
{
  for(auto &i : a)
    cout << &i << endl;
}
#endif

int main()
{
  int a[3] = {0,1,2};

  for(auto &i : a)
    cout << &i << endl;
  foo(a);

  return 0;
}
