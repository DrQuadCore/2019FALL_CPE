#include <iostream>

using namespace std;

class DayOfYear 
{
  public:
    DayOfYear();
    DayOfYear(int, int);

    DayOfYear( const DayOfYear& other )
    {
      cout << "In the copy constructor " ;
      other.output();
      this->month = other.month;
      this->day = other.day;
    }

    void output() const;
  private:
    int month;
    int day;
};

DayOfYear::DayOfYear()
  : month(1), day(1)
{
  cout << "In the default constructor" << endl;
}


DayOfYear::DayOfYear(int monthValue, int dayValue)
  : month(monthValue), day(dayValue)
{
  cout << "In the constructor DayOfYear(" << monthValue;
  cout << "," << dayValue << ")" << endl;
  month = monthValue;
  day = dayValue;
}

void DayOfYear::output() const
{
  cout << month << "/" << day << endl;
}

void print_day( DayOfYear day )
{
  cout << "In print_day" << endl;
  day.output();
}

int main()
{
  DayOfYear newYear(1,1);
  DayOfYear holiday = newYear;
  holiday.output();

  holiday = DayOfYear(9,25);
  print_day(holiday);
}

