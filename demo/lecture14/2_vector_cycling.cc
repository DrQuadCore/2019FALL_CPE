//Program to demonstrate STL iterators.
#include <iostream>
#include <vector>

using std::cout;    // Using only a part of std
using std::endl;
using std::vector;

int main( )
{
  vector<int> container;

  for (int i = 1; i <= 4; i++)
    container.push_back(i);

  for (auto it = container.begin(); it != container.end( ); it++)
    cout << *it << " ";
  cout << endl;

  for (auto it = container.begin(); it != container.end( ); it++)
    *it = 0;

  for (auto it = container.begin( ); it != container.end( ); it++)
    cout << *it << " ";
  cout << endl;

  return 0;
}

