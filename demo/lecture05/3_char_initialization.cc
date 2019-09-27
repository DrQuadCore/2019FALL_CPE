#include <iostream>

using namespace std;

int main()
{
  // Following code has errors
  char s1[10] = "";
  char s2[10] = {}; 
  char s3[10] = {'\0'};

  // Checking items of s
  cout << "s1" << endl;
  for(char c : s1)
    cout << int(c) << endl;
  cout << "s2" << endl;
  for(char c : s2)
    cout << int(c) << endl;
  cout << "s3" << endl;
  for(char c : s3)
    cout << int(c) << endl;

  // What result can we conclude from the above resultz
}

