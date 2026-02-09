#include <stdio.h>

// function declaration
void addition(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    addition(a, b);   // passing arguments

    return 0;
}

// function definition
void addition(int x, int y)
{
    int sum;
    sum = x + y;

    printf("Sum = %d", sum);
}
