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

template<class T, size_t N>
void swapValues( T (&var1)[N], T (&var2)[N] )
{
  cout << "swapValues template for arrays" << endl;
  for(int i=0; i<N; i++) {
    T temp = var1[i];
    var1[i] = var2[i];
    var2[i] = temp;
  }
}

template<class T, size_t N>
void print(T (&a)[N])
{
  for(auto i : a)
    cout << i << endl;
}

int main()
{
  int a[3] = {0,1,2}, b[3] = {3,4,5};
  print(a);
  swapValues(a, b);
  print(a);

  return 0;
}
