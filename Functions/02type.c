// No return with Arguments

#include <stdio.h>

void printSum(int a,int b)
{
    int sum= a+b;
    printf("Sum: %d\n",sum);
}
int main ()
{
    printSum(5,10);
    return 0;
}
