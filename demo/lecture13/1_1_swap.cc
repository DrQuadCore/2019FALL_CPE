#include <iostream>

using namespace std;

void swapValues(int& var1, int& var2 )
{
  cout << "swapValues i" << endl;
  int temp = var1;
  var1 = var2;
  var2 = temp;
}

void swapValues(char& var1, char& var2 )
{
  cout << "swapValues c" << endl;
  char temp = var1;
  var1 = var2;
  var2 = temp;
}

int main()
{
  int i_A = 1, i_B = 2;
  cout << i_A << ", " << i_B << endl;
  swapValues(i_A, i_B);
  cout << i_A << ", " << i_B << endl;

  char c_A = 'a', c_B = 'b';
  cout << c_A << ", " << c_B << endl;
  swapValues(c_A, c_B);
  cout << c_A << ", " << c_B << endl;

  return 0;
}
