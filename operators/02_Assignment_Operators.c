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
  printf("%d\n",z); //2

  int a = 8;
  a |= 4; //bitwise OR assignment
  printf("%d\n",a); //12

  int k = 4;
  k ^= 6;
  printf("%d\n",k); //2

  int n = 2;
  n >>= 1; //facing towards is division
  printf("%d\n",n); //1 2/2^1

  int w = 9;
  w <<= 2; //facing away is multiplication
  printf("%d\n",w); //36 9x2^2

return 0;
}
