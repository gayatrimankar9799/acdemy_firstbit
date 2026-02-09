#include <stdio.h>

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int x, y, z;
    float avg;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    avg = average(x, y, z);
    printf("Average = %.2f", avg);

    return 0;
}
