#include <iostream>

using namespace std;

int main()
{
#if 0 // C style
  int* ptr;
  cout << ptr << endl;
  ptr = (int*) malloc( sizeof(int)*1 );
  cout << ptr << endl;
  *ptr = 1;
  cout << *ptr << endl;

  if(ptr1) free( ptr1 );
  ptr1 = NULL;
#else // C++ style
  // c++ style
  int *ptr = new int;
  *ptr = 1;
  cout << *ptr << endl;

  // guess results
  //cout << ptr << endl;
  //cout << sizeof(ptr) << endl;
  //cout << sizeof(*ptr) << endl;
  
  if(ptr != nullptr) delete ptr;
  ptr = nullptr;
#endif

  return 1;
}
