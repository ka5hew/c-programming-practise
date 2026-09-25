#include <stdio.h>

int main ()
{
    int x=6;

    printf("%d\n",x>3 && x<10);
    printf("%d\n",x<6 || x>2);
    printf("%d\n", !(x>3 && x<10));

    return 0;
}
