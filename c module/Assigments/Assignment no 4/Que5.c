//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.
#include <stdio.h>

int main()
{
    int choice, num, temp, rem, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMENU\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (num % 2 == 0)
            printf("%d is Even", num);
        else
            printf("%d is Odd", num);
    }
    else if (choice == 2)
    {
        int flag = 0;
        if (num <= 1)
            flag = 1;

        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d is Prime", num);
        else
            printf("%d is Not Prime", num);
    }
    else if (choice == 3)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }

        if (sum == num)
            printf("%d is Palindrome", num);
        else
            printf("%d is Not Palindrome", num);
    }
    else if (choice == 4)
    {
        if (num > 0)
            printf("%d is Positive", num);
        else if (num < 0)
            printf("%d is Negative", num);
        else
            printf("Number is Zero");
    }
    else if (choice == 5)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }

        printf("Reverse of %d is %d", num, sum);
    }
    else if (choice == 6)
    {
        temp = num;
        sum = 0;

        while (temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        printf("Sum of digits of %d is %d", num, sum);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
