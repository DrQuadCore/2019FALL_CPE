#include <iostream>

using namespace std;

int main()
{
  int arr[] = {20, 30, 40, 50};

  for(int i=0; i<sizeof(arr)/sizeof(int); i++) { // messy :(
    cout << arr[i] << " ";
  cout << endl;

  for( auto x : arr ) // beautiful :) 
    cout << x << " "; 
  cout << endl;
}
