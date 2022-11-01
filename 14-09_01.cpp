#include <stdio.h>
#include <conio.h>

main()
{
	char ans;
	printf("Confirm your answer [y/n] : ");
	ans = getchar();
	printf("You choose %c \n",ans);
	getch();
	return 0;
}
