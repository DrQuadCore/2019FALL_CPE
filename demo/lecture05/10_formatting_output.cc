#include <iostream>

using namespace std;

int main()
{
#if 0
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);
#endif

  double price = 78.5;
  cout << "The price is $" << price << endl;

  return 0;
}
