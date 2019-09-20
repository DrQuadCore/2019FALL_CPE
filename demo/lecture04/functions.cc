#include <iostream>

using namespace std;

int AddOneRef(int& i)
{
  return i++;
  //return ++i;
}


int AddOne(int i)
{
  return i++;
  //return ++i;
}

double Half(double d)
//double Half(double& d)
{
  d /= 2;
  return d;
}

int main()
{
  int i = 1;
  double d = 3.14;

  cout << "before: " <<  i << endl;
  cout << AddOne(i) << endl;
  //cout << AddOneRef(i) << endl;
  cout << "after : " << i << endl;

  cout << "before: " << d << endl;
  cout << Half(d) << endl;
  cout << "after : " << d << endl;
}
