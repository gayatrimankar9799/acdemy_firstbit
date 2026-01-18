//Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
void main()
{
	int age=34;
	if(age>=18)
	{
		printf("This person  age is%d eligible to vote \n ",age);
	}
	else
	{
		printf("This person   age is%d  not eligible to vote ",age);
	}
}