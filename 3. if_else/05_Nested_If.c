#include <stdio.h>

int main ()
{
    int Age=18;
    bool IsCitizen = false;

    if ( Age>=18){
        printf("Old Enough to vote.\n");
        if (IsCitizen){
            printf("And you are a citizen, so you can vote!");
        }
        else {
            printf("But you are not a citizen, so you cannot vote!");
        }
    }
    else {
        printf("Not old enough to vote.");
    }
return 0;
}
