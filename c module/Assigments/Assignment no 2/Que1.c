//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void main()
{
	int no1,no2;
	char ope=' ';
	printf("Enter the first number \n ");
	scanf("%d",&no1);
	printf("Enter the operator(+,-,/,*,%) \n");
	scanf(" %c",&ope);
	
	printf("Enter the second number \n ");
	scanf("%d",&no2);

	if(ope=='+')
	{
		int add=no1+no2;
		printf("Addition %d",add);
	}
	else if(ope=='-')
	{
		int sub=no1-no2;
		printf("Subtraction %d",sub);	
	}
	else if(ope=='*')
	{
		int mul=no1 * no2;
		printf("Multiplication %d",mul);
	}
	else if(ope=='/')
	{
		int div=no1/no2;
		printf("Division %d",div);
	}
	else if(ope=='%')
	{
		int mod=no1%no2;
		printf("Mod %d",mod);
	}
}