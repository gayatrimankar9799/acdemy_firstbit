//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include<stdio.h>
void main()
{
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	int temp=no;
	int count=0;
	while(no>0)
	{
		count++;
		no=no/10;
	
	}
	no=temp;
	int sum=0,rem;
	while(no>0)
	{
		rem=no%10;
		int res=1;
		for(int i=1;i<=count;i++)
		{
			res=res*rem;
		}
	
		sum=sum+res;
		no=no/10;
	}
	if(sum==temp)
	{
		printf("%d armstrong number",temp);
	}
	else
	{
		printf("%d not armstrong number",temp);
	}


}