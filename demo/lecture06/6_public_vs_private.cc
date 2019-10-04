#include <iostream>

using namespace std;

class DayOfYear // name of new class type
{
  public:
    void output(); // member function! implementation elsewhere
    void assign(int month, int day);
  private:
    int month;
    int day;
};

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

void DayOfYear::assign(int month, int day)
{
  this->month = month;
  this->day = day;
}

int main()
{
  DayOfYear birthday;
  
  // Illegal accesses to private member variables
  //birthday.month = 5;
  //birthday.day = 11;
  birthday.assign(5, 11);
  birthday.output(); // invokes member function
}

