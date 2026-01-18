//4. Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int temp;
	printf("Before Swapping no");
	printf("A is %d",a);
	printf("B is %d",b);
	temp=a;
	a=b;
	b=temp;
	
	printf("\nAfter Swapping no");
	printf("A is %d",a);
	printf("B is %d",b);
}