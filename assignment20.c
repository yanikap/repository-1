#include <stdio.h>

// without pointers
void swap1(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Without pointers: a=%d b=%d\n", a, b);
}

// with pointers
void swap2(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap1(x, y);   // no change in main

    swap2(&x, &y); // actual swap
    printf("With pointers: a=%d b=%d", x, y);

    return 0;
}