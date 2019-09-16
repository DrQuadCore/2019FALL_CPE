#include <iostream>
#include <stdio.h>

using namespace std;

unsigned int get_bit(unsigned int num, int pos)
{
  if(pos > 32)
    return -1;
  return (num >> pos) & 1;
}

void print_bits(unsigned int num)
{
  printf("%u is ", num);
  for(int i=0; i<32; i++) {
    if(i % 4 == 0)
      printf(" ");
    printf("%u", get_bit(num, 31-i));
  }
  printf(".\n");
}


int main()
{
  int intVar1 = 1, intVar2 = 2;
  cout << 1 / 2 << endl;
  cout << intVar1 / intVar1 << endl;
  cout << 1.0 / 2 << endl;
  cout << 1 / 2.0 << endl;

  // following line doesn't work
  //cout << intVar1.0 / intVar1 << endl;
  //               ~~

  // different styles of casting
  
  cout << endl << "diffent styles of casting" << endl;
  int myInt = 1;
  double myDouble = 2;
  cout << (double) 1/2 << endl;
  cout << (double) (1/2) << endl;
  cout << 1/(double)2 << endl;
  cout << double(1)/2 << endl;
  cout << myInt/myDouble << endl;
  cout << double(myInt)/myDouble << endl;

  // static_cast
  cout << endl << "const_cast example" << endl;
  double doubleVar = static_cast<double>(intVar1) / intVar2;
  cout << doubleVar << endl;;
  doubleVar = intVar1 / static_cast<double>(intVar2);
  cout << doubleVar << endl;;
  doubleVar = static_cast<double>(intVar1 / intVar2);
  cout << doubleVar << endl;;

  // const_cast
  cout << endl << "const_cast example" << endl;
  // Check what happens with the below line!!
  //double var2 = const_cast<double>(var1);
  double var1 = 1.1;
  // Beware! It is undefined behavior to modify a value which is initially declared as const. 
  //const double var1 = 1.1;
  const double& var2 = var1;
  // Check what happens with the below line!!
  //var2 = 1.2;
  double& var3 = const_cast<double&>(var2);
  cout << var1 << '\t' << var2 << '\t' << var3 << endl;
  var3 = 1.3;
  cout << var1 << '\t' << var2 << '\t' << var3 << endl;
  //cout << &var1 << '\t' << &var2 << '\t' << &var3 << endl;

  // reinterpret_cast
  cout << endl << "reinterpret_cast example" << endl;
  int var4 = 1;
  float var5 = 1;
  print_bits(var4);
  print_bits(*((int*)&var5));
  print_bits(reinterpret_cast<int&>(var5));
}
