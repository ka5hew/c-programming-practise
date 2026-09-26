// return with no arguments

#include <stdio.h>

int getFixedNumber(){
    int num = 42;
    return num; //return value to caller
}

int main (){
    int result = getFixedNumber();
    printf("Returned Value : %d\n", result);
    return 0;
}
