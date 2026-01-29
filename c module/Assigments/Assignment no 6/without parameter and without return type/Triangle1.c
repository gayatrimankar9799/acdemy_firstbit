//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.

#include<stdio.h>
void equilateral();//declaartion function
void scalene();//declaartion function
void isosceles();//declaartion function
void main()
{
	int side1,side2,side3;
	printf("Enter the three side of triangle");
	scanf("%d",&side1);
	scanf("%d",&side2);
	scanf("%d",&side3);
	
	 equilateral();//caaling
	 scalene();//calling
	 isosceles();//calling
}//main end here
void equilateral()
{

	int side1,side2,side3;
//	printf("Enter the three side of triangle");
//	scanf("%d",&side1);
//	scanf("%d",&side2);
//	scanf("%d",&side3);
	
	if(side1==side2 && side2==side3)
	{
		printf("Equilateral triangle");
	}
}
void scalene()
{
	int side1,side2,side3;
//	printf("Enter the three side of triangle");
//	scanf("%d",&side1);
//	scanf("%d",&side2);
//	scanf("%d",&side3);
		if(side1==side2|| side2==side3|| side1==side3)
		{
		 printf("isosceles triangle");	
		}
		else
		{
			printf("scalene triangle");	
		}
}

void isosceles()
{
	int side1,side2,side3;
//	printf("Enter the three side of triangle");
//	scanf("%d",&side1);
//	scanf("%d",&side2);
//	scanf("%d",&side3);
		if(side1==side2|| side2==side3|| side1==side3)
		{
		 printf("isosceles triangle");	
		}
		else
		{
			printf("scalene triangle");	
		}
}