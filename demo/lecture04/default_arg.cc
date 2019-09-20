#include <iostream>

using namespace std;

// The code has errors

void show_volume( int length, int width=1, int height=1 );

int main()
{
  show_volume(2, 4, 6); // all arguments supplied
  show_volume(3, 5);    // height defaulted to 1
  show_volume(7);     // width & height defaulted to 1
}

void show_volume( int length, int width=1, int height=1 ) 
{
  cout << length * width * height << endl;

}
