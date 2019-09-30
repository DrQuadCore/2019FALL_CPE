#include <iostream>

using namespace std;

int main()
{
  char short_string1[] = "abcdefg";
  cout << "String1: " << short_string1 << endl;
  cout << "Size: " << sizeof(short_string1) << endl;

  char short_string2[] = {"k", "l", "m"};
#if 0
  // What happens with the below code?
  char short_string2[] = {'k', 'l', 'm'};
  cout << "String2: " << short_string2 << endl;
  cout << "Size: " << sizeof(short_string2) << endl;
#endif
}
