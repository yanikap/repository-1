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
    int choice, n, i;
    float a, b, result;

    printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Power 6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) 
    {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division not possible");
            break;

        case 5:
            printf("Enter base and power: ");
            scanf("%f %f", &a, &b);
            result = 1;
            for(i = 1; i <= b; i++)
                result *= a;
            printf("Result = %.2f", result);
            break;

        case 6:
            printf("Enter number: ");
            scanf("%d", &n);
            if(n < 0)
                printf("Factorial not possible");
            else
                printf("Result = %d", fact(n));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}