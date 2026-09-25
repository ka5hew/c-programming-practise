#include <stdio.h>

int main ()
{
    bool IsLoggedIn = true;
    bool IsAdmin = false;
    int securityLevel = 3; // 1 = highest

if (IsLoggedIn && ( IsAdmin || securityLevel <= 2)){
    printf("Access granted");
}
else {
    printf("Access denied");
}
return 0;
}
