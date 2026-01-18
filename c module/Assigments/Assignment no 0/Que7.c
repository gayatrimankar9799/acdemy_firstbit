//Write a C program to convert given minutes into hours and remaining minutes.
#include<Stdio.h>
void main()
{
	int min=130;
	int hours,remain_min;
	hours=min/60;
	remain_min=min%60;
	printf("Min %d into hours is %d",min,hours);
	printf("\n remaining minutes %d",remain_min);
}