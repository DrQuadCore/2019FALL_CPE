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

  cout << "Here is what is in the container:\n";
  for (auto it = container.begin(); it != container.end(); it++)
    cout << *it << " ";
  cout << endl;

  cout << "Print in a reverse order\n";
  // What happens with the below line?
  for (auto it = container.end(); it != container.begin(); it--)
  //for (vector<int>::reverse_iterator it = container.rbegin(); it != container.rend(); it++)
    cout << *it << " ";
  cout << endl;

  return 0;
}

