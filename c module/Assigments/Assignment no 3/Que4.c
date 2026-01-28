

//Input: n = 7
//Output: Prime
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int i=2;
	int status=0;
	for(int i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
			status=1;
			break;
			
			
		}
	}
//	while(i<=no/2)
//	{
//		if(no%i==0)
//			status=1;
//			break;
//		i++;
//	}
	if(status==0)
	{
		printf("%d prime number",no);
	
	}
	else
	{
		printf("%d not prime number",no);
	}
}