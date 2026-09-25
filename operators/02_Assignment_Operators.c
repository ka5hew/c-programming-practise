#include <stdio.h>

int main ()
{
//assignment operator
  float x=5;
  printf("%.2f\n", x);
  x += 3;
  printf("%.2f\n", x);
  x -= 3;
  printf("%.2f\n", x);
  x *= 3;
  printf("%.2f\n", x);
  x /= 3;
  printf("%.2f\n", x);

  int y = 7;
  y %= 3;
  printf("%d\n",y);

  int z= 6;
  z &= 3; //bitwise AND assignment
  printf("%d\n",z);

  int a = 8;
  a |= 4; //bitwise OR assignment
  printf("%d\n",a);

  int k = 4;
  a ^= 6;
  printf("%d\n",k);

  int n = 2;
  n >>= 1;
  printf("%d\n",n);

  int w = 9;
  w <<= 2;
  printf("%d\n",w);

return 0;
}
