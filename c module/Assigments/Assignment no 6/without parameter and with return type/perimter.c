//Write a C program to input the length and width of a rectangle and find its perimeter using without parameter and with return type.
#include<stdio.h>
int perimeter(); //function declaration

void main()
{
    int result;
    result = perimeter(); //calling
} //main end here

int perimeter() //function definition
{
    int len, bre;
    printf("Enter the length and width: ");
    scanf("%d %d", &len, &bre);

    int rect = 2 * (len + bre);
    printf("Perimeter of rectangle is %d", rect);

    return rect;
}
