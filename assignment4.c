#include <stdio.h>

int main() {
    float basic, hra, da, gross, tax, net;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;   // 10% HRA
    da = 0.05 * basic;    // 5% DA

    gross = basic + hra + da;

    tax = 0.02 * gross;   // 2% tax

    net = gross - tax;

    printf("\nGross Salary = %.2f", gross);
    printf("\nNet Salary = %.2f", net);

    return 0;
}