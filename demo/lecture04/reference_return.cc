#include <iostream>

using namespace std;

double& func( double& variable )
{
  return variable;
}

double& mal_func( double variable)
{
  return variable;
}

int main()
{
  double dVar = 3.14;  

  cout << dVar << endl;
  cout << func(dVar) << endl;
  cout << dVar << endl;

  // Assign the returned variable to a normal variable

  double dVar2 = func(dVar);
  // See the difference
  //double& dVar2 = func(dVar);
  cout << "&dVar:" << &dVar << endl;
  cout << "&dVar2:" << &dVar2 << endl;

 
  // What happens?
  dVar2 = mal_func(dVar);
  //double& dVar2 = func(dVar);
  cout << "&dVar:" << &dVar << endl;
  cout << "&dVar2:" << &dVar2 << endl;

 
}
