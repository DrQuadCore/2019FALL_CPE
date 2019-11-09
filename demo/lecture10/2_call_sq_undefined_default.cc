#include <iostream>

using namespace std;

class GrandParent 
{
  public:
    GrandParent():age(1000) { cout << "in GrandParent()" << endl; }
    GrandParent(int age) : age(age) { cout << "in GrandParent(int age)" << endl; }
    void printAge() { cout << age << endl; }
    ~GrandParent() { cout << "in ~GrandParent()" << endl; }
  protected:
    int age;
};

class Parent : public GrandParent
{
  public:
    Parent(int age) { 
      this->age = age;
      cout << "in Parent(int age)" << endl; 
    }
    ~Parent() { cout << "in ~Parent()" << endl; }
    // We cannot initialize parents' member variable.
    //Parent(int age) : age(age) { cout << "in Parent(int age)" << endl; }
};

class Child : public Parent
{
  public:
    Child() : Parent(0) { cout << "in Child()" << endl; }
    // The following line causes an error
    // because there is no default ctor in Parent class.
    //Child() {  }
    ~Child() { cout << "in ~Child()" << endl; }
};

int main()
{
  Child child;
  child.printAge();
  return 0;
}
