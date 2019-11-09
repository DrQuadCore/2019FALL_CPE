#include <iostream>

using namespace std;

class Person 
{
  public:
    Person();
    Person(string name); 
    ~Person();
    string getName() const {return name;}
    void setName(string name) {this->name=name;} 
    void printInfo() const;
  private:
    string name;
    int myCount;
    static int personCount;
};

int Person::personCount = 0;

Person::Person()
  :name("Not set")
{
  cout << "in Person()" << endl;
  myCount = personCount++;
}

Person::Person(string name)
  : name(name)
{
  cout << "in Person(string name)" << endl;
  myCount = personCount++;
}

Person::~Person()
{
  cout << "in ~Person() #" << myCount << endl;
}

void Person::printInfo() const
{
  cout << "Name: " << name << endl;
  cout << "Count: " << myCount << endl;
}

int main()
{
  Person persons[10];
  for(int i=0; i<10; i++)
    persons[i].printInfo();
  return 0;
}
