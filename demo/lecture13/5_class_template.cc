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

template<class T>
T diff(const Pair<T>& thePair)
{
  return thePair.getFirst() - thePair.getSecond();
}


int main()
{
  Pair<int> score;

  score.setFirst(3);
  score.setSecond(1);

  score.print();

  cout << addUp(score) << endl;
  cout << diff(score) << endl;

  Pair<int> *tmp = new Pair<int>();
 
  tmp->setFirst(3);
  tmp->setSecond(1);

  tmp->print();

  cout << addUp(*tmp) << endl;
  cout << diff(*tmp) << endl;

 return 0;
}
