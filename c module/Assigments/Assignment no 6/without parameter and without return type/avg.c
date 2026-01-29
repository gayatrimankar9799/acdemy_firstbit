//Write a C program to input five numbers and find their average.\
#include<stdio.h>
void marks();//function declaration
void main()
{
	marks();//calling
}//main end here
void marks()//function definition
{
	int no1,no2,no3,no4,no5;
	printf("Enter the 5 subject marks");
	scanf("%d",&no1);
	scanf("%d",&no2);
	scanf("%d",&no3);
	scanf("%d",&no4);
	scanf("%d",&no5);
	int avg;
	avg =(no1+no2+no3+no4+no5)/5;
	printf("Avg is %d",avg);
}