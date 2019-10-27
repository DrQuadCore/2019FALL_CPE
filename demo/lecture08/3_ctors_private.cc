#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);

    void output(); 
  private:
    // We cannot call private constructors
    DayOfYear(int=0, double=0) {}
    DayOfYear(double=0, int=0) {}
    DayOfYear(double=0, double=0) {}

    int month;
    int day;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "In the constructor DayOfYear" << endl;
}

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

int main()
{
  DayOfYear christmas(12, 25.0);
  christmas.output();
}

