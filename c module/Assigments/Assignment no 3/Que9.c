//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int temp=no;
	int rev=0;
	int rem;
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
		
	}
	if(temp==rev)
	{
		printf("%d palindrome number ",temp);
	}
	else
	{
		printf("%d  not palindrome number ",temp);
	}
}