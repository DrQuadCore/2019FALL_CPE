#include <iostream>

using namespace std;

class Person 
{
  public:
    Person() : name("not set") {}
    Person(string name) : name(name) {}
    string getName(string name) const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : public Person
{
  public:
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
  private:
    int sid;
};

int main()
{
  Student kim;
  kim.setName("Kim");
  kim.setSid(100);
  kim.printInfo();
  cout << kim.getSid() << endl;
  return 0;
}
