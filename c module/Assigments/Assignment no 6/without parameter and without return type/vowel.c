//Write a program to check whether a given character is a vowel or consonant using without return type nd paratmer.
#include<stdio.h>
void vowel();//function declaration
void main()
{
	vowel();
}//main end here
void vowel()//function defintiom
{
	char ch;
	printf("Enter the characcter");
	scanf(" %c",&ch);
	if(ch=='a'||ch=='e'|| ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	  {
	  	printf("vowel ");
	  }
	  else
	  {
	  		printf("consonant");
	  
	  }
}