//Write a C program to convert given minutes into hours and remaining minutes using without paramter and with return type.
#include<stdio.h>
int min_into_hrs();
void main()
{
    int result;
    result = min_into_hrs();
}
int min_into_hrs()
{
    int min;
    printf("Enter the minutes: ");
    scanf("%d",&min);

    int hours = min / 60;
    int remain_min = min % 60;

    printf("Minutes %d into hours is %d", min, hours);
    printf("\nRemaining minutes %d", remain_min);

    return min;
}
