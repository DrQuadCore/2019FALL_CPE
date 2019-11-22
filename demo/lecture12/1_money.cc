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
  private:
    int dollars; //A negative amount is represented as negative dollars and
    int cents; //negative cents. Negative $4.50 is represented as -4 and -50
};

const Money operator+(const Money& amount1, const Money& amount2);
const Money operator-(const Money& amount1, const Money& amount2);
bool operator==(const Money& amount1, const Money& amount2);
const Money operator-(const Money& amount);

int main()
{
  Money   amount1(10), amount2(6), amount3;
  amount3 = amount1 - amount2;
  //Calls binary "-" overload
  amount3.output(); //Displays $4.00
  amount3 = -amount1;
  //Calls unary "-" overload
  amount3.output();    //Displays -$10.00
  
  return 0;
}

const Money operator+(const Money& amount1, const Money& amount2)
{
  int allCents1 = amount1.getCents() + amount1.getDollars()*100;
  int allCents2 = amount2.getCents() + amount2.getDollars()*100;
  int sumAllCents = allCents1 + allCents2;
  int absAllCents = abs(sumAllCents); //Money can be negative.
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;

  if (sumAllCents < 0) {
    finalDollars = -finalDollars;
    finalCents = -finalCents;
  }

  return Money(finalDollars, finalCents);
}

//Uses cstdlib:
const Money operator-(const Money& amount1, const Money& amount2)
{
  int allCents1 = amount1.getCents() + amount1.getDollars()*100;
  int allCents2 = amount2.getCents() + amount2.getDollars()*100;
  int diffAllCents = allCents1 - allCents2;
  int absAllCents = abs(diffAllCents); 
  int finalDollars = absAllCents/100;
  int finalCents = absAllCents%100;

  if (diffAllCents < 0) {
    finalDollars = -finalDollars;
    finalCents = -finalCents;
  }

  return Money(finalDollars, finalCents);
}

bool operator==(const Money& amount1, const Money& amount2)
{
  return ((amount1.getDollars() == amount2.getDollars())
      && (amount1.getCents() == amount2.getCents()));
}

const Money operator-(const Money& amount)
{
  return Money(-amount.getDollars(), -amount.getCents());
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
