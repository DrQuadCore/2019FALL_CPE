#include <iostream>

using namespace std;

int main()
{
  int num;
  // See the initial value of num 
  cout << "Initial value of num: " << num << endl;
  cout << "Enter a new number for num: ";
  cin >> num;
  // What happens when we enter a value 
  // with a different data type rather than int?
  cout << "Entered value of num: " << num << endl;
  return 0;
}
