#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//Class for amounts of money in U.S. currency.
class Money
{
  public:
    Money();
    Money(int theDollars, int theCents);
    Money(int theDollars);
    double getAmount() const;
    int getDollars() const;
    int getCents() const;
    void output() const;
    
    const Money& operator=(const Money& theMoney);
  private:
    int dollars; //A negative amount is represented as negative dollars and
    int cents; //negative cents. Negative $4.50 is represented as -4 and -50
};

const Money& Money::operator=(const Money& theMoney)
{
  // Just for example
  dollars = theMoney.getDollars() - 1;
  return *this; // Why should we return *this?
}

int main()
{
  Money   amount1(10), amount2, amount3;
  amount3 = amount2 = amount1;
  amount1.output();
  amount2.output();
  amount3.output();
  
  return 0;
}

Money::Money(): dollars(0), cents(0)
{/*Body intentionally empty.*/}

Money::Money(int theDollars)
  : dollars(theDollars), cents(0)
{/*Body intentionally empty*/}

//Uses cstdlib:
Money::Money(int theDollars, int theCents)
{
  if ((theDollars < 0 && theCents > 0) || (theDollars > 0 && theCents < 0)) {
    cout << "Inconsistent money data.\n";
    exit(1);
  }
  dollars = theDollars;
  cents = theCents;
}

double Money::getAmount() const
{
  return (dollars + cents*0.01);
}

int Money::getDollars() const
{
  return dollars;
}

int Money::getCents() const
{
  return cents;
}

//Uses iostream and cstdlib:
void Money::output() const
{
  int absDollars = abs(dollars);
  int absCents = abs(cents);
  if (dollars < 0 || cents < 0)//accounts for dollars == 0 or cents == 0
    cout << "$-";
  else
    cout << '$';
  cout << absDollars;

  if (absCents >= 10)
    cout << '.' << absCents;
  else
    cout << '.' << '0' << absCents;
  cout << "\n";
}
