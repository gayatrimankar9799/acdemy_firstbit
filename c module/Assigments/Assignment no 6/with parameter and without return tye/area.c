#include <stdio.h>

void area(float);

int main()
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    area(r);

    return 0;
}

void area(float radius)
{
    float a;
    a = 3.14 * radius * radius;

    printf("Area of circle = %.2f", a);
}
