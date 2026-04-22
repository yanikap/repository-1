#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int a, b, i, gcd, scd = -1;

    scanf("%d %d", &a, &b);

    a = abs(a);
    b = abs(b);

    for(i = 2; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0)
        {
            scd = i;
            break;
        }
    }

    if(scd == -1)
        printf("No common divisor other than 1\n");
    else
        printf("SCD = %d\n", scd);

    // GCD
    for(i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    printf("GCD = %d", gcd);

    return 0;
}