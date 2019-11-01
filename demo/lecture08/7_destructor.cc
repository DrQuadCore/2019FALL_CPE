#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear() {month = 1; day = 1;}
    DayOfYear(int, int);
    ~DayOfYear();

    void output(); 
  private:
    int month;
    int day;
};

DayOfYear::~DayOfYear()
{
  cout << "Destructing ";
  output();
}

DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "In the constructor ";
  output();
}

void DayOfYear::output()
{
  cout << month << "/" << day << endl;
}

int main()
{
  DayOfYear day(10,31);
  {
    DayOfYear day(11,1);
    day.output();
    cout << "We are going out of scope" << endl;
  }
  day.output();
  cout << "Program ends" << endl;
}

