#include <stdio.h>
int main()
{
    int num, temp, digit, sum;
    printf("enter number");
    scanf("%d", &sum);
    temp = sum;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    if (sum == num)
        printf("armstrong number");
    else
        printf("not armstrong number");
    return 0;
}