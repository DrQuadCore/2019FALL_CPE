#include <iostream>

using namespace std;


int main()
{
  string str("");

  // empty
  if(str.empty())
    str = "This is my string";

  // iterating
  for(char c : str)
    cout << c;
  cout << endl;

  for(int i=0; i<str.length(); i++)
    //cout << str.at(i);
    cout << str[i];
  cout << endl;

  // erase
  str.erase(0, 4);
  cout << str << endl;

  // insert
  cout << "01234567890123456789" << endl;
  str.insert(0, "That");
  cout << str << endl;

  // find
  cout << "Find a string \"is\": " << str.find("is") << endl;
  cout << "Find a character \' \': " << str.find(' ') << endl;

  cout << "Find \' \' using position 5: " << str.find(' ', 5) << endl;
}
