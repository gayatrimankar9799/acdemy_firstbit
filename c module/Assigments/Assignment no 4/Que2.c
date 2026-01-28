//2. Print prime numbers in the given range 1 to n.

#include<stdio.h>
void main()
{
	int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    printf("Prime numbers between 1 and %d are:\n", no);

    for (int num = 2; num <= no; num++)
    {
        int status = 0;

		for(int i=2;i<=num/2;i++)
		{
			if(num%i==0)
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
			printf("%d prime number",num);
		
		}
	}
	return 0;
}