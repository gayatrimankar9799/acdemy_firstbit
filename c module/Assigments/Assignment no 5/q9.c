//10. Print a hollow square with diagonal pattern
//Input: n = 5
//Output:
//
//* * * * *
//* *     *
//*   *   *
//*     * *
//* * * * *


void main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
		//s
			if(i==1||i==4|| j==1||j==4||i==j)
			{
		     	printf("*");
				
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}