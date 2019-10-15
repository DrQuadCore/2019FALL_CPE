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
  if(num1 == num2)
    cout << "1: num1 and num2 are same" << endl;
  cout << endl;

  num1 = 0.09;
  num2 = num1 * 10 - 0.81;
  cout << "num1:\t" << num1 << endl;
  cout << "num2:\t" << num2 << endl;
  cout << "diff:\t" << num1 - num2 << endl;
  if(num1 == num2)
    cout << "2: num1 and num2 are same" << endl;
  return 0;
}
