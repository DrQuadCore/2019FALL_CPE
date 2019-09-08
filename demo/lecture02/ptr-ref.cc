#include <iostream>

using namespace std;

int main()
{
#if 0
  int a = 0 , b = 1;
  int* pa = &a, *pb = &b;
  int ca = a, cb = b;

  cout << "a:"    << a    << ", b:"   << b    << endl;
  // Check the addresses
  cout << "pa:"   << pa   << " pb:"   << pb   << endl;
  cout << "*pa:"  << *pa  << " *pb:"  << *pb  << endl;
  cout << "ca:"   << ca   << " *ca:"  << cb   << endl;

  cout << endl << "Increasing a,b" << endl;

  a++;
  b++;

  cout << "a:"    << a    << ", b:"   << b    << endl;
  cout << "pa:"   << pa   << " pb:"   << pb   << endl;
  cout << "*pa:"  << *pa  << " *pb:"  << *pb  << endl;
  cout << "ca:"   << ca   << " *ca:"  << cb   << endl;
#else
  int a = 0 , b = 1;
  int& ra = a, &rb = b;
  int ca = a, cb = b;

  cout << "a:"    << a    << ", b:"   << b    << endl;
  // Check the addresses
  cout << "ra:"   << ra   << " rb:"   << rb   << endl;
  cout << "ca:"   << ca   << " *ca:"  << cb   << endl;

  cout << endl << "Increasing a,b" << endl;

  a++;
  b++;

  cout << "a:"    << a    << ", b:"   << b    << endl;
  cout << "ra:"   << ra   << " rb:"   << rb   << endl;
  cout << "ca:"   << ca   << " *ca:"  << cb   << endl;
#endif

  return 0;
}
