#include <stdio.h>
#include <conio.h>

main()
{
	float price;
	printf("Enter the price : ");
	scanf("%f",&price);
	if(price>=5000.0)
		printf("The price is : %f\n",price*0.9);
	else
		printf("The price is : %f\n",price);
	
	getch();
	return 0;
}
