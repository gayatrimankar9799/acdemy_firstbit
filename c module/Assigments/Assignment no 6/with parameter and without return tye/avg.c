#include <stdio.h>

void average(int, int, int);

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    average(a, b, c);

    return 0;
}

void average(int x, int y, int z)
{
    float avg;
    avg = (x + y + z) / 3.0;

    printf("Average = %.2f", avg);
}
