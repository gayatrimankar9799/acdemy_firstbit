//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the desired operation.
#include<stdio.h>
double calculator(); // function declaration

void main()
{
    double result;
    result = calculator(); // calling
}

double calculator() // function definition
{
    double no1, no2, res;
    char ope;

    printf("Enter the first number: ");
    scanf("%lf", &no1);

    printf("Enter the operator (+,-,*,/,%%): ");
    scanf(" %c", &ope);

    printf("Enter the second number: ");
    scanf("%lf", &no2);

    if(ope == '+')
        res = no1 + no2;
    else if(ope == '-')
        res = no1 - no2;
    else if(ope == '*')
        res = no1 * no2;
    else if(ope == '/')
        res = no2 != 0 ? no1 / no2 : 0; // check division by zero
    else if(ope == '%')
        res = (int)no1 % (int)no2; // modulo works with integers
    else
    {
        printf("Invalid operator");
        return 0;
    }

    printf("Result: %lf", res);
    return res;
}
