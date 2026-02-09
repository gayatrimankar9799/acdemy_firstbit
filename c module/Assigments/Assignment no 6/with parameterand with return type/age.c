#include <stdio.h>

int checkAge(int age)
{
    if (age >= 18)
        return 1;
    else
        return 0;
}

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (checkAge(age))
        printf("Eligible for voting");
    else
        printf("Not eligible for voting");

    return 0;
}
