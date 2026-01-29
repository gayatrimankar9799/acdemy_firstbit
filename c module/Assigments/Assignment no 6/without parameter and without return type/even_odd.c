//1. Write a program to check whether a number is even or odd using without paramter and without return type.
#include<stdio.h>
void evenodd();//function declaration
void main()
{
	evenodd();//calling
}//main end here
void evenodd()
{
	int no=4;
	if(no%2==0)
	{
		printf("Even no is %d",no);
	}
	else
	{
		printf("odd no is %d",no);
	}
}