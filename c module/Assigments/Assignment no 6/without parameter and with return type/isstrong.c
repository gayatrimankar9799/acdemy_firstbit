//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
int isstrong();
void main()
{
	int result;
	result = isstrong();
	if(result==1)
		printf("%d strong number", result);
	else
		printf("%d not strong number", result);
	
		
}
int isstrong()
{
	int no;
	printf("Enter the numbers:");
	scanf("%d",&no);
	int temp = no;
	int sum = 0;

	while(no > 0)
	{
		int rem = no % 10;
		int fact = 1;
		for(int i = 1; i <= rem; i++)
		{
			fact = fact * i;
		}
		sum = sum + fact;
		no = no / 10;
	}

	if(sum == temp)
	{
		return 1;
	}
	else
	{
		
		return 0;
	}
}
