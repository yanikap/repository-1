#include <stdio.h>
int main()
{
    int num, digit;
    printf("enter value");
    scanf("%d", &num);
    printf("reverse of %d is ", num);
    while (num > 0)
    {
        digit = num % 10;
        printf("%d", digit);
        num = num / 10;
    }
    printf("\n");
    return 0;
}