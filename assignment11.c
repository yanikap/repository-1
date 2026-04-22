#include <stdio.h>
#include <math.h>

int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++) f*=n>=1?i:1;
    return f;
}

int main(){
    int n,i,ch,prime=1;

    printf("Enter number: ");
    scanf("%d",&n);

    printf("\n1.Sqrt 2.Square 3.Cube 4.Prime 5.Factorial 6.Prime Factors\n");
    printf("Enter choice: ");
    scanf("%d",&ch);

    switch(ch)
    {

        case 1:
            printf("Square root = %.2f",sqrt(n));
            break;

        case 2:
            printf("Square = %d",n*n);
            break;

        case 3:
            printf("Cube = %d",n*n*n);
            break;

        case 4:
            if(n<=1) prime=0;
            for(i=2;i<=n/2;i++)
                if(n%i==0) prime=0;
            printf(prime?"Prime":"Not Prime");
            break;

        case 5:
            if(n<0) printf("Not possible");
            else printf("Factorial = %d",fact(n));
            break;

        case 6:
            printf("Prime Factors: ");
            for(i=2;i<=n;i++)
                while(n%i==0){
                    printf("%d ",i);
                    n/=i;
                }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}