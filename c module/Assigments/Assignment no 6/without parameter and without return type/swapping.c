//4. Write a C program to swap two numbers using a temporary third variable using without parameter and without return type.

#include<stdio.h>
void number();//function declaration
void main()
{
	number();//calling 
}// main end here
void number()//function definition
{
	int a;
	int b;
	printf("Enter the a and b:");
	scanf("%d",&a);
	scanf("%d",&b);
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