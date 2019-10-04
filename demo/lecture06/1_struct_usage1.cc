#include <iostream>
#include <cmath>

using namespace std;

struct CDAccountV1  // name of new struct "type"
{ 
  double  balance; // member names  
  double  interestRate; 
  int     term;
};

struct CDAccountV2  // name of new struct "type"
{ 
  int   balance; // member names  
  int   interestRate; 
  int   term;
};


int main()
{
#if 1
  // C++
  CDAccountV1 account1;
  // C
  //struct CDAccountV1 account1;

  account1.balance = 1000;
  account1.interestRate = 0.02;
  account1.term = 2;

  cout << "I have $" << account1.balance << " in my account." << endl;
  double rate = pow(1+account1.interestRate, account1.term);
  cout << "After " << account1.term << " years it will become $" << account1.balance * rate << "." << endl;
#else
  // We can use the same names for member vars of different structs
  CDAccountV2 account2;

  account2.balance = 1000;
  account2.interestRate = 0.02; // CHECK TYPE!
  account2.term = 2;

  cout << "I have $" << account2.balance << " in my account." << endl;
  double rate = pow(1+account2.interestRate, account2.term);
  cout << "After " << account2.term << " years it will become $" << account2.balance * rate << "." << endl;
#endif

  return 0;
}
