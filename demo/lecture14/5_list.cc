#include <iostream>
#include <list>
using std::cout;
using std::endl;
using std::list;

int main()
{
  list<int> listObject;
  for (int i = 1; i <= 3; i++)
    listObject.push_back(i);

  cout << "List contains:\n";
  list<int>::iterator iter;
  for (iter = listObject.begin(); iter != listObject.end(); iter++)
    cout << *iter << " ";
  cout << endl;

  cout << "Setting all entries to 0:\n";
  for (iter = listObject.begin(); iter != listObject.end(); iter++)
    *iter = 0;

  cout << "List now contains:\n";
  for (iter = listObject.begin(); iter != listObject.end(); iter++)
    cout << *iter << " ";
  cout << endl;

  // Random access is not defined.
  //iter = listObject.begin();
  //cout << iter[2] << endl;

  return 0;
}

