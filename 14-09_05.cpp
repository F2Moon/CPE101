#include <stdio.h>
#include <conio.h>

main()
{
	int number;
	printf("Enter the number : ");
	scanf("%d",&number);
	if(number%2 == 0)
		printf("It is a even number\n");
	
	else
		printf("It is a odd number\n");
}
