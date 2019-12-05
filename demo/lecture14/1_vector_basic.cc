#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v;

  cout << "capacity: " << v.capacity() << endl;

  int num[] = {0,1,2,3,4,5};

  for(auto i : num) {
    v.push_back(i);
    cout << "after insert " << i << ", capacity: " << v.capacity() << endl;
  }

  for(auto i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }

  cout << "capacity: " << v.capacity() << endl;

  v.reserve(100);

  cout << "capacity: " << v.capacity() << endl;
  return 0;
}
