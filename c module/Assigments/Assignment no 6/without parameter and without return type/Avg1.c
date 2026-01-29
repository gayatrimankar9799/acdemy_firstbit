//Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage using without paramter and without return type.
#include<stdio.h>
void avg();//function declarartion
void main()
{
	avg();//calling 
}
void avg()
{
	double s1=98,s2=98,s3=89,s4=97,s5=89;
	double  total_marks=(s1+s2+s3+s4+s5);
	double per=(total_marks/500)*100;
	printf("total marks is %lf  \n",total_marks);
	printf("Percentage is %lf ",per);
}