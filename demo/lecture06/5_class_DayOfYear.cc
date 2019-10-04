#include <iostream>

using namespace std;

class DayOfYear // name of new class type
{
  public:
    void output(); // member function! implementation elsewhere
    void assign1(int m, int d);
    void assign2(int month, int day);
    void assign3(int, int);
    int month;
    int day;
};

void DayOfYear::assign1(int m, int d)
{
  month = m;
  day = d;
}

// Resolving scope confliction by using this pointer
void DayOfYear::assign2(int month, int day)
{
  this->month = month;
  this->day = day;
}


void DayOfYear::assign3(int month, int day)
{
  this->month = month;
  this->day = day;
}

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

int main()
{
  DayOfYear birthday;
  
  birthday.month = 5;
  birthday.day = 11;
  birthday.output(); // invokes member function

  birthday.assign1(9,6);
  birthday.output();

  birthday.assign2(1,22);
  birthday.output();

  birthday.assign3(12,23);
  birthday.output();
}

