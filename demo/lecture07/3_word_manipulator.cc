#include <iostream>

using namespace std;

class myWordMani
{
  public:
    string getWord() {
      return str;
    }
    void setWord(string str) {
      this->str = str;
    }
    void printWord() {
      cout << str << endl;
    }
    void sortWord();
    void reverseWord();
    int countChar(char);
    int removeChar(char);
  private:
    string str;
};

void swap(string& str, int i, int j)
{
  char tmp = str[i];
  str[i] = str[j];
  str[j] = tmp;
}

int myWordMani::countChar(char c)
{
  int count = 0;
  for(char ch : str) {
    if(ch == c)
      count++;
  }
  return count;
}

int myWordMani::removeChar(char c) 
{
  int count = 0;
  for(int i=0; i<str.length(); i++) {
    if(str.at(i) == c) {
      str.erase(i, 1);
      count++;
      i--;
    }
  }
  return count;
}

void myWordMani::sortWord()
{
  // Selection sort
  for(int i=0; i<str.length(); i++) {
    int minIndex = i;
    for(int j=i; j<str.length(); j++) {
      if(str[j] < str[minIndex])
        minIndex = j;
    }
    swap(str, i, minIndex);
  }
}

void myWordMani::reverseWord()
{
  for(int i=0; i<str.length()/2; i++) {
    swap(str, i, str.length()-1-i);
  }
}

int main()
{
  myWordMani mwm;
  mwm.setWord("pneumonoultramicroscopicsilicovolcanoconiosis");
  cout << mwm.getWord() << endl;
  mwm.sortWord();
  cout << mwm.getWord() << endl;
  mwm.reverseWord();
  cout << mwm.getWord() << endl;

  cout << mwm.countChar('a') << endl;
  cout << mwm.removeChar('c') << endl;
  cout << mwm.getWord() << endl;

  return 0;
}
