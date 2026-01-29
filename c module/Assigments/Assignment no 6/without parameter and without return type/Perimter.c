//Write a C program to input the length and width of a rectangle and find its perimeter using without parameter and without return type.
#include<stdio.h>
void perimeter();//function declaration
void main()
{
	perimeter();//calling
	
}//main end here
void perimeter()
{
	int len;
	int bre;
	printf("Enter the length and width");
	scanf("%d",&len);
	scanf("%d",&bre);
	int rect = 2*(len+bre);
	printf("perimeter of rectangle is %d",rect);
}