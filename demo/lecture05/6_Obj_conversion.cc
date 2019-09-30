#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char aCString[] = "My C-string";
  string stringVar = aCString;

  cout << "C String: " << aCString << endl;
  cout << "string: " << stringVar << endl;

  strcpy( aCString, stringVar.c_str() );
  //aCString = stringVar; // illegal!
  //aCString = stringVar.c_str(); // What happens with this code?

  cout << endl;
  cout << "C String: " << aCString << endl;
  cout << "string: " << stringVar << endl;
}
