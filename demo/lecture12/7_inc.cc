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
    
    Money operator++(); // preifx 
  // Make members public just for the example
  //private: 
    int dollars; //A negative amount is represented as negative dollars and
    int cents; //negative cents. Negative $4.50 is represented as -4 and -50
};

// Postfix version, not a member
Money operator++(Money& theMoney, int ignoreMe)
{
  // We need range checks for cents.
  // This is just for an example.
  int dollars = theMoney.dollars++;
  int cents = theMoney.cents++;
  return Money(dollars, cents); 
}


Money Money::operator++()
{
  // We need range checks for cents.
  // This is just for an example.
  dollars++;
  cents++;
  return Money(dollars, cents); 
}

int main()
{
  Money   amount(10);
  Money a = amount++;
  a.output();
  amount.output();
  
  amount = Money(10);
  a = ++amount;
  a.output();
  amount.output();
  
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
