//Write a program to check whether a given character is uppercase or lowercase using without return type and parameter.
#include<stdio.h>
int character();//function declaration
void main()
{
    int result;
    result = character();//calling
    if(result==1)
    	printf("Uppercase");
    else
    	printf("Lowercase");
}
int character()
{
    char ch;
    printf("Enter the character: ");
    scanf(" %c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        
        return 1;
    }
    else
    {
        
        return 0;
    }
}
