#include <iostream>

using namespace std;

class Pet
{
  public:
    string name;
    virtual void print() const;
    Pet() {
    }
};

class Dog : public Pet
{
  public:
    string breed;
    void print() const;
    Dog() {
    }
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
  Dog* dog;
  Pet* pet;
  dog = new Dog;

  dog->name = "Tiny";
  dog->breed = "Great Dane";
  pet = dog;
  // Following line is still illegal
  //cout << pet->breed << endl;
  pet->print();

  return 0;
}
