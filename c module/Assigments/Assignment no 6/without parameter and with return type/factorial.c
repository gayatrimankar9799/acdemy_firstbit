//Find factorial of given number.
//Input: n = 5
//Output: 120

#include<stdio.h>
int fact();
void main()
{
    int result;
    result = fact();
}
int fact()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);

    int fact = 1;
    int temp = no;

    while(no > 1)
    {
        fact = fact * no;
        no--;
    }

    printf("%d Factorial number", fact);
    return fact;
}
