#include <stdio.h>

int main() {
    int choice, i, j, r, c, n;
    int a[10][10], b[10][10], sum[10][10];
    float mat[2][2], det;

    printf("\n1. Addition\n2. Saddle Point\n3. Inverse (2x2)\n4. Magic Square\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        // 1. Addition
        case 1:
            printf("Enter rows & cols: ");
            scanf("%d %d", &r, &c);

            printf("Enter first matrix:\n");
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    scanf("%d",&a[i][j]);

            printf("Enter second matrix:\n");
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    scanf("%d",&b[i][j]);

            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    sum[i][j] = a[i][j] + b[i][j];

            printf("Result:\n");
            for(i=0;i<r;i++){
                for(j=0;j<c;j++)
                    printf("%d ",sum[i][j]);
                printf("\n");
            }
            break;

        // 2. Saddle Point
        case 2:
            printf("Enter rows & cols: ");
            scanf("%d %d",&r,&c);

            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    scanf("%d",&a[i][j]);

            for(i=0;i<r;i++){
                int min = a[i][0], col = 0;

                for(j=1;j<c;j++)
                    if(a[i][j] < min){
                        min = a[i][j];
                        col = j;
                    }

                for(j=0;j<r;j++)
                    if(a[j][col] > min)
                        break;

                if(j == r){
                    printf("Saddle Point = %d", min);
                    break;
                }
            }
            break;

        // 3. Inverse (2x2)
        case 3:
            printf("Enter 2x2 matrix:\n");
            scanf("%f%f%f%f",&mat[0][0],&mat[0][1],&mat[1][0],&mat[1][1]);

            det = mat[0][0]*mat[1][1] - mat[0][1]*mat[1][0];

            if(det == 0)
                printf("Inverse not possible");
            else {
                printf("Inverse:\n");
                printf("%.2f %.2f\n", mat[1][1]/det, -mat[0][1]/det);
                printf("%.2f %.2f\n", -mat[1][0]/det, mat[0][0]/det);
            }
            break;

        // 4. Magic Square
        case 4:
            printf("Enter order: ");
            scanf("%d",&n);

            for(i=0;i<n;i++)
                for(j=0;j<n;j++)
                    scanf("%d",&a[i][j]);

            int sum1 = 0, temp;

            for(j=0;j<n;j++)
                sum1 += a[0][j];

            for(i=1;i<n;i++){
                temp = 0;
                for(j=0;j<n;j++)
                    temp += a[i][j];
                if(temp != sum1){
                    printf("Not Magic Square");
                    return 0;
                }
            }

            printf("Magic Square");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}