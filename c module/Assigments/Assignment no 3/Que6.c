//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the numbers");
	scanf("%d",&no);
	int sum=0;
	for(int i=1;i<no;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum==0)
	{
		printf("%d perfect number",no);
		
	}
	else
	{
		
		printf("%d  not perfect number",no);
	
	}
}