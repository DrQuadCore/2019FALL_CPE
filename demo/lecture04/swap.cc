#include <iostream>

using namespace std;

void swapValuesCpy( int variable1, int variable2 )
{
  int temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}


void swapValuesPtr( int* variable1, int* variable2 )
{
  int temp;
  temp = *variable1;
  *variable1 = *variable2;
  *variable2 = temp;
}

void swapValuesRef( int& variable1, int& variable2 )
{
  int temp;
  temp = variable1;
  variable1 = variable2;
  variable2 = temp;
}

int main()
{
  int i1 = 1, i2 = 2;
  
  cout << i1 << ", " << i2 << endl;

  swapValuesCpy(i1, i2);
  cout << i1 << ", " << i2 << endl;
  //swapValuesPtr(&i1, &i2);
  //cout << i1 << ", " << i2 << endl;
  //swapValuesRef(i1, i2);
  //cout << i1 << ", " << i2 << endl;

}
