#include <iostream>

using namespace std;

class Person 
{
  public:
    Person() : name("not set") {}
    Person(string name) : name(name) {}
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
};

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
}

class Student : private Person
{
  public:
    void setSid(int sid) {this->sid = sid;}
    void setName(string name);
    int getSid() const {return sid;}
    void printInfo() const;
  private:
    int sid;
};

void Student::setName(string name)
{
  // It causes an error with private member name
  this->name = name; 
}

void Student::printInfo() const
{
  cout << "Name: " << getName()<< endl;
  cout << "Student ID: " << sid << endl;
}

int main()
{
  Student kim;
  kim.setName("Kim");
  kim.setSid(100);
  kim.printInfo();
  return 0;
}
