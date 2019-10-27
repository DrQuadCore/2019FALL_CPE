#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear(int, int);

    void output(); 
  private:
    int month;
    int day;
};

DayOfYear::DayOfYear(int monthValue, int dayValue)
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
  christmas.output();

  // We are calling constructors for intergers
  int month(5);
  int* day = new int(11);

  DayOfYear* birthday = new DayOfYear(month, *day);
  birthday->output();
}

