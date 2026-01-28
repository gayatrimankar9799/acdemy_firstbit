//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main()
{
	
	int no=12345;
	int rem;
	int ld=no%10;
	while(no>10)
	{
	
		no=no/10;
	}
	int sum=no+ld;
	printf("Sum of first and last digit is %d",sum);

}
	