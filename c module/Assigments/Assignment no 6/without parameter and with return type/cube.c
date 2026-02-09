//Write a C program to find the square and cube of a given number using without parameter and with return type.
#include<stdio.h>
int square();
int cube();

void main()
{
    int sq, cu;
    sq = square();
    cu = cube();
}

int square()
{
    int no;
    printf("Enter the number to find square: ");
    scanf("%d", &no);
    int sq = no * no;
    printf("Square is %d", sq);
    return sq;
}

int cube()
{
    int no;
    printf("\nEnter the number to find cube: ");
    scanf("%d", &no);
    int cu = no * no * no;
    printf("Cube is %d", cu);
    return cu;
}
