#include <stdio.h>

float areaOfCircle(float radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);

    area = areaOfCircle(r);
    printf("Area = %.2f", area);

    return 0;
}
