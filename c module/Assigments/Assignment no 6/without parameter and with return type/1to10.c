xcha//Print numbers from 1 to 10
//Output: 1 2 3 4 5 6 7 8 9 10
#include<stdio.h>#include <stdio.h>

int number();

void main()
{
    int result;
    result = number();
}

int number()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    for (int i = 1; i <= no; i++)
    {
        printf("%d ", i);
    }

    return no;
}
