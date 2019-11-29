#include <iostream>

using namespace std;


template<class T>
class Pair{
  public:
    Pair() {};
    Pair(T firstVal, T secondVal);
    void setFirst(T newVal);
    void setSecond(T newVal);
    T getFirst() const { return first; };
    T getSecond() const { return second; };
    void print() const { cout << "(" << first << ", " << second << ")" << endl; }
  private:
    T first;
    T second;
};

template<class T>
Pair<T>::Pair(T firstVal, T secondVal)
{
  first = firstVal;
  second = secondVal;
}

template<class T>
void Pair<T>::setFirst(T newVal)
{
  first = newVal;
}


template<class T>
void Pair<T>::setSecond(T newVal)
{
  second = newVal;
}

template<class T>
T addUp(const Pair<T>& thePair)
{
  return thePair.getFirst() + thePair.getSecond();
}

#if 1
typedef Pair<int> PairOfInt;
#else
using PairOfInt = Pair<int>;
#endif

int main()
{
  PairOfInt score;

  score.setFirst(3);
  score.setSecond(0);

  score.print();

  cout << addUp(score) << endl;

  PairOfInt *tmp = new PairOfInt();
 
  tmp->setFirst(3);
  tmp->setSecond(0);

  tmp->print();

  cout << addUp(*tmp) << endl;

 return 0;
}
