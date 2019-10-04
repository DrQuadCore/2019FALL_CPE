#include <iostream>
#include <cmath>

using namespace std;

struct CDAccountV1  // name of new struct "type"
{ 
  double  balance; // member names  
  double  interestRate; 
  int     term;
} account;
//~~~~~~~

int main()
{
  account.balance = 1000;
  account.interestRate = 0.02;
  account.term = 2;

  cout << "I have $" << account.balance << " in my account." << endl;
  double rate = pow(1+account.interestRate, account.term);
  cout << "After " << account.term << " years it will become $" << account.balance * rate << "." << endl;

  CDAccountV1 acc;
  acc.balance = 2000;
  acc.interestRate = 0.02;
  acc.term = 3;

  cout << "I have $" << acc.balance << " in my account." << endl;
  rate = pow(1+acc.interestRate, acc.term);
  cout << "After " << acc.term << " years it will become $" << acc.balance * rate << "." << endl;

  return 0;
}
