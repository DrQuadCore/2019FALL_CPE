#include <iostream>

using namespace std;

int main()
{
  // Following code has errors
  char s[10] = "Hi Mom!";

  cout << s << endl;

  // Checking items of s
  for(char c : s)
    cout << int(c) << endl;
}

