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

int main()
{
  int a[3], b[3];
  swapValues(a, b);

  return 0;
}
