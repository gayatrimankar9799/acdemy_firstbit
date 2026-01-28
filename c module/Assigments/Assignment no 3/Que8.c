//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the numbers:");
	scanf("%d",&no);
	int temp;
	temp=no;
	int sum=0;
	while(no>0)
	{
		int rem=no%10;
		int fact=1;
		for(int i=1;i<=rem;i++)
		{
			fact=fact*i;
			
		}
		sum=sum+fact;
		no=no/10;
		
	}
	if(sum==temp)
		printf("%d strong number",temp);
	else
		printf("%d not strong number",temp);
}