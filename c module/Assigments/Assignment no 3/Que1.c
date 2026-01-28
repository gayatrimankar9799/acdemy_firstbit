//Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10

#include<stdio.h>
void main()
{
	int no;
	printf("Enter the No ");
	scanf("%d",&no);
	for(int i=1;i<=no;i++)
	{
		printf("%d",i);
	}
}