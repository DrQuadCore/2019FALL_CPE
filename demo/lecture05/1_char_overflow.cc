#include <iostream>

using namespace std;

int main()
{
  // Following code has errors
  char name1[5] = "Tzuyu";
  char name2[4] = {'S', 'a', 'n', 'a'};
  char name3[6] = {'D', 'a', 'h', 'y', 'u', 'n'};

  cout << name1 << endl;
  cout << name2 << endl;
  cout << name3 << endl;
}

