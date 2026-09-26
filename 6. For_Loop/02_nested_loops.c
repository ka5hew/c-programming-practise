#include <stdio.h>

int main ()
{
    int i,j;
    for(i=1;i<=2;++i){
        printf("Outer: %d\n",i);

        for(j=1;j<=3;++j){
            printf(" Inner: %d\n",j);
        }
    }
    return 0;
}
/*
Outer: 1
 Inner: 1
 Inner: 2
 Inner: 3
Outer: 2
 Inner: 1
 Inner: 2
 Inner: 3
*/
