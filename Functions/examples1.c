// Sum of n even numbers ( Functions type with return value and with arguments )

#include <stdio.h>

int EvenNumbers()
{
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    int sum=n*(n+1);
    return sum;
}
int main ()
{
    int result = EvenNumbers();
    printf("The sum of n even numbers : %d\n",result);
    return 0;
}
