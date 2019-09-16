#include <iostream>

using namespace std;

int main()
{
  int* p_int = nullptr;
  printf("%s\n", typeid(nullptr).name() );

  return 0;
}
