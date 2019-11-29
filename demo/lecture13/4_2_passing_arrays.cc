// For demo, passing arrays to functions

#include <iostream>

using namespace std;

#if 1
// Error case
void foo(int a[3])
{
  for(auto &i : a)
    cout << &i << endl;
}

void print(int a[3])
{
  for(auto i : a)
    cout << i << endl;
}
#endif

#if 0
// for one array size
void foo(int (&a)[3])
{
  for(auto &i : a)
    cout << &i << endl;
}

void print(int (&a)[3])
{
  for(auto i : a)
    cout << i << endl;
}
#endif

#if 0
// for variable array sizes
template<class T, size_t N>
void foo(T (&a)[N])
{
  for(auto &i : a)
    cout << &i << endl;
}

template<class T, size_t N>
void print(T (&a)[N])
{
  for(auto i : a)
    cout << i << endl;
}

#endif

int main()
{
  int a[3] = {0,1,2};

  for(auto &i : a)
    cout << &i << endl;
  foo(a);

  print(a);

  return 0;
}
