//Write a C program to find the area of a circle using without parameter and with return type
#include<stdio.h>
double area1();//function declaration
void main()
{
	double result;
	result = area1();//calling
}//main end here
double area1()//function definition
{
	double radius;
	printf("Enter the radius");
	scanf("%lf",&radius);
	double area_circle = 3.14 * radius * radius;
	printf("Area of circle is %lf", area_circle);
	return area_circle;
}
