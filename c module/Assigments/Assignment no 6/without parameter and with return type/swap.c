//4. Write a C program to swap two numbers using a temporary third variable using without parameter and with return type.
#include<stdio.h>
int number(); //function declaration
void main()
{
    int result;
    result = number(); //calling 
} // main end here

int number() //function definition
{
    int a, b, temp;
    printf("Enter the a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before Swapping:\n");
    printf("A is %d\n", a);
    printf("B is %d\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:\n");
    printf("A is %d\n", a);
    printf("B is %d\n", b);

    return a + b; // returning sum as an example
}
