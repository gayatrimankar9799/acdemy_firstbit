#include <stdio.h>

int evenodd();

void main()
{
    int result;
    result = evenodd();
}

int evenodd()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("Even number");
        return 1;
    }
    else
    {
        printf("Odd number");
        return 0;
    }
}
