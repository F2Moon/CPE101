#include <stdio.h>
#include <conio.h>

main()
{
	int number;
	printf("Enter an integer number : ");
	scanf("%d",&number);
	if(number >=0)
		printf("The %d is positive or zero.\n",number);
	
	else
		printf("The %d is negative.\n",number);
	
	getch();
	return 0;
}
