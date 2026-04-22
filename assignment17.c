#include <stdio.h>

// factorial function
int fact(int n) 
{
    int i, f = 1;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main() 
{
    int n, i, sign = 1;
    float x, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float power = 1;
        int j;

        // calculate x^(2i-1)
        for(j = 1; j <= (2*i-1); j++)
            power *= x;

        sum += sign * power / fact(2*i-1);
        sign = -sign;
    }

    printf("Sum of sine series = %.4f", sum);

    return 0;
}