//3. Print perfect numbers in the given range 1 to n.
#include <stdio.h>

void main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    printf("Perfect numbers between 1 and %d are:\n", no);

    for (int num = 1; num <= no; num++)
    {
        int sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum = sum + i;
            }
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
