//5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include<stdio.h>
void main()
{
	char isstudent;
	double price;
	double tprice,discount=0;
	printf("is a student then selected (y/n))");
	scanf(" %c",&isstudent);
	printf("Enter the Price");
	scanf("%lf",&price);
	if(isstudent=='y')
	{
		if(price>500)
		{
			discount=price*0.20;
			tprice=price-discount;
			
		}
		else
		{
		  	discount=price*0.10;
			tprice=price-discount;
				
		}
		
	}	
	else
	{
		if(price>600)
		{
			discount=price*0.15;
			tprice=price-discount;
		}
		
	}
	printf("total price is %lf",tprice);

	
}