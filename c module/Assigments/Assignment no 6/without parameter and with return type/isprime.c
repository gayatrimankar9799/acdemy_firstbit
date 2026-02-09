//Input: n = 7
//Output: Prime
#include<stdio.h>
int isprime();
void main()
{
	int result;
	result = isprime();
}
int isprime()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);

	int status = 0;
	for(int i = 2; i <= no/2; i++)
	{
		if(no % i == 0)
		{
			status = 1;
			break;
		}
	}

	if(status == 0)
	{
		printf("%d prime number", no);
		return 1;
	}
	else
	{
		printf("%d not prime number", no);
		return 0;
	}
}
