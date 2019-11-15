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
    virtual void print() const;
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

int main()
{
  Dog dog;

  dog.name = "Tiny";
  dog.breed = "Great Dane";
  dog.print();

  return 0;
}
