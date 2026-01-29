//Write a C program to convert temperature from Celsius to Fahrenheit using the without parameter and without return type
//formula:
//F = (C *9/5) + 32
#include<stdio.h>
void temp();//function declaration
void main()
{
	temp();//calling function

}//main end here
void temp()//function definition
{
	double cel=4.56;
	printf("Enter the celsius ");
	scanf("%lf",&cel);
	double fahrenherit=(cel *9.0/5)+32;
	printf("Celsius to Fahrenheit is %lf",fahrenherit);
}