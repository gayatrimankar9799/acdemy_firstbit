//Print an inverted right-angled triangle pattern
//Input: n = 5
//Output:
//
//*****
//****
//***
//**
//*

void main()
{
	int n=5;
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			
			printf("*");
		}
		printf("\n");
	}
}