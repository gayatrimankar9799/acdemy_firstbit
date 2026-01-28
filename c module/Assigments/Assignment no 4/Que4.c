//4. Print strong numbers in the given range 1 to n.
#include <stdio.h>

void main()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    printf("Strong numbers between 1 and %d are:\n", no);

    for (int num = 1; num <= no; num++)
    {
        int temp = num;
        int sum = 0;

        while (temp > 0)
        {
            int rem = temp % 10;
            int fact = 1;

            for (int i = 1; i <= rem; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
