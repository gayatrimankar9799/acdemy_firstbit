//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

#include<stdio.h>
int sum();
void main()
{
    int result;
    result = sum();
}

int sum()
{
    int end = 5;
    int sum = 0;

    for(int start = 1; start <= end; start++)
    {
        sum = sum + start;
    }

    printf("Sum from 1 to %d is: %d", end, sum);
    return sum;
}
