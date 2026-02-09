//6. Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)
#include<stdio.h>
int isDivisible();
void main()
{
	int result;
	result = isDivisible();
}
int isDivisible()
{
	int no;
	printf("Enter the no");
	scanf("%d",&no);

	if(no%3==0 && no%5!=0)
	{
		printf("Divisible by 3 but not by 5");
		return 1;
	}
	else if(no%5==0 && no%3!=0)
	{
		printf("Divisible by 5 but not by 3");
		return 2;
	}
	else if(no%3==0 && no%5==0)
	{
		printf("Divisible by both");
		return 3;
	}
	else
	{
		printf("Divisible by None");
		return 0;
	}
}
