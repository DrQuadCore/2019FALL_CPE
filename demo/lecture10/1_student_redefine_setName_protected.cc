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
  protected:
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
    void setName(string name);
    void printInfo();
  private:
    int sid;
};

void Student::setName(string name) 
{
  this->name = name+"(student)";
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
  kim.printInfo();
  return 0;
}
