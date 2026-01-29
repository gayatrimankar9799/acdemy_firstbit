//Write a program to check whether a given character is uppercase or lowercase using without return type and paramter.
#include<stdio.h>
void character();//function  declaration
void main()
{
	character();//calling
}
void character()
{
	char ch;
	printf("Enter the character");
	scanf(" %c",&ch);
	if(ch>='A'&& ch<='Z')
	{
		printf("uppercase");
	}
	else
	{
		printf("Lowercase");
	}
}