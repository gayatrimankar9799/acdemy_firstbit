
//Write a program to check whether a given year is a leap year using without paranter and without return type.
#include<stdio.h>
void leap();//function declaration
void main()
{
	leap();//caaling
}//main end here
void leap()//funcytion definition
{
	int year;
	printf("Enter the leap year");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("Leap yeae is %d",year);
	}
	else
	{
		printf(" not leap year  is %d",year);
	}
}