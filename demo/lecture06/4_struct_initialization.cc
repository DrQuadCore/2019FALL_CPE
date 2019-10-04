#include <iostream>

using namespace std;

// Only from C++11
// g++ -std=c++98 ... shows an error or a warning
struct Date {
  int month = 12;
  int day = 31;
  int year = 2003;
};

int main()
{
  Date dueDate;
  cout << dueDate.month << endl;
  return 0;
}
