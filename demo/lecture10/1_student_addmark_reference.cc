#include <iostream>

using namespace std;

class Person 
{
  public:
    Person() : name("John Doe") {}
    Person(string name) : name(name) {}
    string& getName() {return name;}
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
    void addMark();
    void printInfo();
  private:
    int sid;
};

void Student::addMark()
{
  string& name = getName();
  name += "(student)";
}

void Student::printInfo()
{
  cout << "Name:\t" << getName() << endl;
  cout << "Student ID: " << sid << endl;
}
int main()
{
  Student kim;
  kim.setName("Kim");
  kim.setSid(100);
  kim.addMark();
  kim.printInfo();
  return 0;
}
