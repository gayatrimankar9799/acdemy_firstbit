//Write a program to check whether a given year is a leap year using without parameter and with return type.
#include<stdio.h>
int leap();//function declaration
void main()
{
    int result;
    result = leap();//calling
    if(result==1)
    	printf("Leap year is %d", result);
    else
    	 printf("Not a leap year: %d", result);
    
}
int leap()//function definition
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
     
        return 1;
    }
    else
    {
       
        return 0;
    }
}
