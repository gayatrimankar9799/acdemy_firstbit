#include <stdio.h>

int ispalindrome();

void main()
{
    int result;
    result = ispalindrome();
}

int ispalindrome()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    int temp = no;
    int rev = 0;
    int rem;

    while (no > 0)
    {
        rem = no % 10;
        rev = rev * 10 + rem;
        no = no / 10;
    }

    if (temp == rev)
    {
        printf("Palindrome number");
        return 1;
    }
    else
    {
        printf("Not Palindrome number");
        return 0;
    }
}
s