//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include<stdio.h>
int triangle_type(); // function declaration

void main()
{
    int result;
    result = triangle_type(); // calling
}

int triangle_type() // function definition
{
    int side1, side2, side3;
    printf("Enter the three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(side1 == side2 && side2 == side3)
    {
        printf("Equilateral triangle");
        return 1;
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Isosceles triangle");
        return 2;
    }
    else
    {
        printf("Scalene triangle");
        return 3;
    }
}
