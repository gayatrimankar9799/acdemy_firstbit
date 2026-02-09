//without paramter and with return type using  prime function;
#include<stdio.h>
int isprime();//declaration
void main()
{
	isprime();//calling
	if(isprime())
	{
		return "prime no";
	}
	else
	{
		return "not prime";
	}
}
int isprime()
{
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	int i=2;
//	int status=0;
	for(int i=2;i<=no/2;i++)
	{
		if(no%i==0)
		{
//			status=1;
//			break;
			return 1;			
			
		}
	}
//	while(i<=no/2)
//	{
//		if(no%i==0)
//			status=1;
//			break;
//		i++;
//	}
//	if(status==0)
//	{
//		printf("%d prime number",no);
//	
//	}
//	else
//	{
//		printf("%d not prime number",no);
//	
}