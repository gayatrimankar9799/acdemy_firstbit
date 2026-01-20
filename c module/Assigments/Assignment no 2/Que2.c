//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include<stdio.h>
void main()
{
	
	int side1,side2,side3;
	printf("Enter the three side of triangle");
	scanf("%d",&side1);
	scanf("%d",&side2);
	scanf("%d",&side3);
	
	if(side1==side2 && side2==side3)
	{
		printf("Equilateral triangle");
	}
	else
	{
		if(side1==side2|| side2==side3|| side1==side3)
		{
		 printf("isosceles triangle");	
		}
		else
		{
			printf("scalene triangle");	
		}
	}
}