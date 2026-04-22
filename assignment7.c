#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float per;
};

int main() {
    struct student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) 
    {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].per = s[i].total / 3.0;
    }

    printf("\nStudent Result:\n");

    for(i = 0; i < n; i++) 
    {
        printf("\nRoll No: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal Marks: %d", s[i].total);
        printf("\nPercentage: %.2f\n", s[i].per);
    }

    return 0;
}