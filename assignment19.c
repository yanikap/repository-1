#include <stdio.h>
#include <string.h>

int main()
{
    struct Employee
    {
        char emp_name[50];
        char emp_designation[50];
        char emp_gender;
        int emp_date_of_joining;
        float salary;
    };

    int n,i,m=0,f=0;
    struct Employee emp[100];

    printf("Enter number of employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Name: ");
        scanf("%s", emp[i].emp_name);

        printf("Designation: ");
        scanf("%s", emp[i].emp_designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].emp_gender);

        printf("Year of Joining: ");
        scanf("%d", &emp[i].emp_date_of_joining);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nTotal Employees = %d\n", n);

    for(i=0;i<n;i++)
        if(emp[i].emp_gender=='M'||emp[i].emp_gender=='m') m++;
        else f++;

    printf("Male = %d  Female = %d\n", m, f);

    printf("\nEmployees with Salary > 10000:\n");
    for(i=0;i<n;i++)
        if(emp[i].salary > 10000)
            printf("%s\n", emp[i].emp_name);

    printf("\nAsst Manager Employees:\n");
    for(i=0;i<n;i++)
        if(strcmp(emp[i].emp_designation,"AsstManager")==0)
            printf("%s\n", emp[i].emp_name);

    return 0;
}