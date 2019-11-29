#include <iostream>

using namespace std;

template<class T>
void showStuff(int stuff1, T stuff2, T stuff3)
{
  cout << stuff1 << endl
    << stuff2 << endl
    << stuff3 << endl;
}

int main()
{
  showStuff(1, 1.1, 2.2);

  return 0;

}

