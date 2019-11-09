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
    Student() : Person(), sid(0) {}
    Student(int sid) : Person(), sid(sid) {}
    Student(string name, int sid) : Person(name), sid(sid) {}
    void setSid(int sid) {this->sid = sid;}
    int getSid() const {return sid;}
    void printInfo();
  private:
    int sid;
};

void Student::printInfo()
{
  cout << "Name: " << name << endl;
  cout << "Student ID: " << sid << endl;
}

int main()
{
  Student kim;
  kim.printInfo();
  Student lee(100);
  lee.printInfo();
  Student park("PSJ", 200);
  park.printInfo();
  return 0;
}
