//Write a C program to add two integers and display the result using without paramter with return type
#include<stdio.h>
int add();//function declaartion
void main()
{
	int result;
 	result = add();//calling
}//main end here
int add()//function definition
{
	int no1;
	int no2;
	printf("Enter the two number");
	scanf("%d",&no1);
	scanf("%d",&no2);
	int sum;
	sum = no1 + no2;
	printf("Addition is %d", sum);
	return sum;
}
