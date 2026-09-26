// Sum of n even numbers ( Functions type with return value and without arguments )

#include <stdio.h>

int SumEvenNumbers()
{
    int n;
    printf("Enter a value : ");
    scanf("%d", &n);
    int sum=n*(n+1);
    return sum;
}
int main ()
{
    int result = SumEvenNumbers();
    printf("The sum of first n even numbers : %d\n",result);
    return 0;
}

// Sum of n even numbers ( function type with return value with arguments )
/* #include <stdio.h>

int SumEvenNumbers(int n)
{
    int sum = n * (n + 1);
    return sum;
}

int main()
{
    int n;

    printf("Enter a value: ");
    scanf("%d", &n);

    int result = SumEvenNumbers(n);

    printf("The sum of first %d even numbers: %d\n", n, result);

    return 0;
} */

// Sum of n even numbers ( function type without return value but with arguments )
/* #include <stdio.h>

void SumEvenNumbers (int n)
{
    int sum = n*(n+1);
    printf("The sum of first n even integers is : %d", sum);
}
int main ()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    SumEvenNumbers(n);
    return 0;

} */

// Sum of n even numbers ( function type without return value and arguments )
/* #include <stdio.h>

void SumEvenNumbers ()
{
    int n;
    printf("Enter a value : ");
    scanf("%d",&n);
    int sum = n*(n+1);
    printf("The sum of first n even integers is : %d", sum);
}
int main ()
{
    SumEvenNumbers();
    return 0;
} */

      
