#include <iostream>

using namespace std;

class GrandParent 
{
  public:
    GrandParent():age(1000) { cout << "in GrandParent()" << endl; }
    GrandParent(int age) : age(age) { cout << "in GrandParent(int age)" << endl; }
    void printAge() { cout << age << endl; }
    ~GrandParent() { cout << "in ~GrandParent()" << endl; }
  private:
    int age;
};

class Parent : public GrandParent
{
  public:
    Parent(int age) : GrandParent(age){ 
      cout << "in Parent(int age)" << endl; 
    }
    ~Parent() { cout << "in ~Parent()" << endl; }
    // We cannot initialize parents' member variable.
    //Parent(int age) : age(age) { cout << "in Parent(int age)" << endl; }
};

int main()
{
  Parent parent(100);
  parent.printAge();
  return 0;
}
