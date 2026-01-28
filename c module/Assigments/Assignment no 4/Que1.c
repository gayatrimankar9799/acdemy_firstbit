//1. Print armstrong numbers in the given range 1 to n.

#include<stdio.h>
void main()
{
	int no;
	printf("Enter the no:");
	scanf("%d",&no);
	printf("Armstrong numbers between 1 and %d are:\n",no);
	for (int num = 1; num <= no; num++)
    {
        int temp = num;
        int count = 0;
        int sum = 0;
        int rem;
        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = num;
        while (temp > 0)
        {
            rem = temp % 10;
            int res = 1;

            for (int i = 1; i <= count; i++)
            {
                res = res * rem;
            }

            sum = sum + res;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}