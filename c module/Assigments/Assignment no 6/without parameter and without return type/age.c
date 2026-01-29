//Write a program to check whether a person is eligible to vote (age = 18) using without paramter and return type.
#include<stdio.h>
void age();//ddeclaartion
void main()
{
	age();//calling
}//main end here
void age()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("This person  age is%d eligible to vote \n ",age);
	}
	else
	{
		printf("This person   age is%d  not eligible to vote ",age);
	}
}