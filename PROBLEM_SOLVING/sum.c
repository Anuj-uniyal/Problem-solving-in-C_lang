// you have to take two inputs from the user and in output you have to show sum of that two numbers

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("%d", sum);

    return 0;
}
