//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong

#include<stdio.h>
int isarmstrong();
void main()
{
    int result;
    result = isarmstrong();
    if(result==1)
    	printf("%d Armstrong number", result);
    else
    	printf("%dnot  Armstrong number", result);
}
int isarmstrong()
{
    int no;
    printf("Enter the number: ");
    scanf("%d",&no);
    int temp = no;
    int count = 0;

    while(no > 0)
    {
        count++;
        no = no / 10;
    }

    no = temp;
    int sum = 0, rem;

    while(no > 0)
    {
        rem = no % 10;
        int res = 1;
        for(int i = 1; i <= count; i++)
        {
            res = res * rem;
        }
        sum = sum + res;
        no = no / 10;
    }

    if(sum == temp)
    {
      
        return 1;
    }
    else
    {
        printf("%d not Armstrong number", temp);
        return 0;
    }
}
