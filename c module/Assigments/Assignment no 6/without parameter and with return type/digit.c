//10 Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
int digit();
void main()
{
    int result;
    result = digit();
}
int digit()
{
    int no = 12345;
    int ld = no % 10;
    int temp = no;

    while(temp >= 10)
    {
        temp = temp / 10;
    }

    int sum = temp + ld;
    printf("Sum of first and last digit is %d", sum);
    return sum;
}
