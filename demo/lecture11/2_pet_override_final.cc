#include <iostream>

using namespace std;

class Pet
{
  public:
    string name;
    virtual void print() const;
};

class Dog : public Pet
{
  public:
    string breed;
    void print() const override;
};

class MyDog : public Dog
{
  public:
    string address;
    void print() const override;
};

void Pet::print() const
{
  cout << "name: " << name << endl;
}

void Dog::print() const
{
  Pet::print();
  cout << "breed: " << breed << endl;
}

void MyDog::print() const
{
  Dog::print();
  cout << "address: " << address << endl;
}


int main()
{
  MyDog myDog;

  myDog.name = "Tiny";
  myDog.breed = "Great Dane";
  myDog.address = "2066";

  myDog.print();

  return 0;
}
