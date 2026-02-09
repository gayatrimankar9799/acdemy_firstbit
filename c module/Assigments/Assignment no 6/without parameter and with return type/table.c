//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50

#include<stdio.h>
int table();
void main()
{
    int result;
    result = table();
}

int table()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i = 1; i <= 10; i++)
    {
        printf("%d ", i * n);
    }

    return n;
}
