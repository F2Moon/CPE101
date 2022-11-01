#include <stdio.h>
#include <conio.h>

main()
{
	float a,b,c;
	a = 10;
	b = 20;
	c = a;
	a = b;
	b = c;
	printf("a = %f , b = %f",a,b);
	getch();
	return 0;
}
