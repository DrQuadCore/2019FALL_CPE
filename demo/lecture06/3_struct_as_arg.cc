#include <iostream>
#include <cmath>

using namespace std;

struct CDAccountV1  // name of new struct "type"
{ 
  double  balance; // member names  
  double  interestRate; 
  int     term;
};

void printAccountInfo(CDAccountV1 myAccount)
{
  cout << "I have $" << myAccount.balance << " in my account." << endl;
  double rate = pow(1+myAccount.interestRate, myAccount.term);
  cout << "After " << myAccount.term << " years it will become $" << myAccount.balance * rate << "." << endl;
  // What happens when we modify the value of myAccount's member variables?
  // What does it imply?
}

int main()
{
  CDAccountV1 acc;
  acc.balance = 2000;
  acc.interestRate = 0.02;
  acc.term = 3;

  printAccountInfo(acc);
  return 0;
}
