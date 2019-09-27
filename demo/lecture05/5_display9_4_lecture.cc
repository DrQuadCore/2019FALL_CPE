// demonstrates the standard class string.
#include <iostream>
#include <string>
using namespace std;

int main( )
{
  string phrase; // initialized to the empty string

  // two equivalent ways of initializing a string variable
  string adjective("fried"), noun("ants");

  string wish = "Bon appetite!";

  phrase = "I love " + adjective + " " + noun + "!";
  cout << phrase << endl << wish << endl;
  return 0;
}
