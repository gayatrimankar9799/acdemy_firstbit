//Write a C program to convert given minutes into hours and remaining minutes using without paramter and without return type.
#include<Stdio.h>
void min_into_hrs();//function declaration
void main()
{
	min_into_hrs();
}// main endd here
void min_into_hrs()
{
	int min;
	printf("Enter the minitues:");
	scanf("%d",&min);
	int hours,remain_min;
	hours=min/60;
	remain_min=min%60;
	printf("Min %d into hours is %d",min,hours);
	printf("\n remaining minutes %d",remain_min);
}