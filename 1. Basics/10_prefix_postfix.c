#include <stdio.h>

int main ()
{
    int z=10;
    printf("Postfix : %d\n",z++);
    printf("After postfix : %d\n",z);
// prints 10 , then z becomes 11
    printf("Prefix : %d\n", ++z);
// z becomes 12 , then prints 12

   int y=15;
   printf("Postfix : %d\n",y--);
   printf("After prefix : %d\n",y);
   printf("Prefix : %d\n", --z);

return 0;
}
