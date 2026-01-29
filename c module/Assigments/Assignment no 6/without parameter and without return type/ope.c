//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void add();
void sub();
void mul();
void div();
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

	add();
	sub();
	mul();
	div();
}
void add()
{
	int no1,no2;
	char ope;
	if(ope=='+')
	{
		int add=no1+no2;
		printf("Addition %d",add);
	}
}
void sub()
{
	int no1,no2;
char ope;
	if(ope=='-')
	{
		int sub=no1-no2;
		printf("Subtraction %d",sub);	
	}
}
void mul()
{
	int no1,no2;
	char ope;
	if(ope=='*')
	{
		int mul=no1 * no2;
		printf("Multiplication %d",mul);
	}
}
void div()
{
	int no1,no2;
	char ope;
	 if(ope=='/')
	{
		int div=no1/no2;
		printf("Division %d",div);
	}
}
