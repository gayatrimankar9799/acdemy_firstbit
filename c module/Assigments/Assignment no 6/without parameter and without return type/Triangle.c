//Write a C program to input the base and height of a triangle and calculate its area using without paramter and without return type.
#include<Stdio.h>
void Area_of_triangle1();//function declaration
void main()
{
	Area_of_triangle1();//calling 
}//main end here
void Area_of_triangle1()//function defnition
{
	int base;
	int height;
	printf("Enter the base and height:");
	scanf("%d",&base);
	scanf("%d",&height);
	int  Area_of_triangle= 0.5*base*height;
	printf("Area_of_triangle is %d",Area_of_triangle);
}