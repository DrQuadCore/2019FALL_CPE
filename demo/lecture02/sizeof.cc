#include <stdio.h>

int main()
{
  size_t int_size = sizeof(int);
  size_t double_size = sizeof(double);

  printf("%zd %zd\n", int_size, double_size );

  return 0;
}
