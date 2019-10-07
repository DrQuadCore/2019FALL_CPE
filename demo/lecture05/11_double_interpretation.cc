#include <iostream>

using namespace std;

int main()
{
#if 1
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(100);
#endif
  double num1 = 0.000899999999999999975366926641; 
  double num2  = 0.0009;
  cout << "num1:\t" << num1 << endl;
  cout << "num2:\t" << num2 << endl;
  cout << "diff:\t" << num1 - num2 << endl;

  return 0;
}
