#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);

    void output(); 
  private:
    int month = 1;
    int day = 1;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "In the constructor DayOfYear(" << monthValue;
  cout << "," << dayValue << ")" << endl;
  month = monthValue;
  day = dayValue;
}

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

int main()
{
  DayOfYear christmas(12,25);
  // What is the result? What does it mean?
  christmas.output();
}

