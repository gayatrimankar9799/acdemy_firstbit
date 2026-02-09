//Write a C program to convert temperature from Celsius to Fahrenheit using the without parameter and with return type
//formula: F = (C * 9/5) + 32
#include<stdio.h>
double temp(); //function declaration
void main()
{
    double result;
    result = temp(); //calling function
}
double temp() //function definition
{
    double cel;
    printf("Enter the Celsius: ");
    scanf("%lf", &cel);

    double fahrenheit = (cel * 9.0 / 5) + 32;
    printf("Celsius to Fahrenheit is %lf", fahrenheit);

    return fahrenheit;
}
