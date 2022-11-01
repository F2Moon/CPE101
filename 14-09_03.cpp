#include <stdio.h>
#include <conio.h>

main()
{
	float x = 123.456;
	
	printf("%7f %7.3f %7.1f\n\n",x,x,x);
	printf("%12e %12.5e %12.3e",x,x,x);
	getch();
	return 0;
}
