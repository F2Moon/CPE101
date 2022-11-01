#include <stdio.h>
#include <conio.h>

main()
{
	int coin10,coin5,coin2,coin1,money;
	printf("Enter your money : ");
	scanf("%d",&money);
	coin10 = money/10;
	coin5 = (money%10)/5;
	coin2 = (money%10%5)/2;
	coin1 = (money%10%5)%2;
	printf("You will get 10 Baht : %d coins\n",coin10);
	printf("You will get 5 Baht : %d coins\n",coin5);
	printf("You will get 2 Baht : %d coins\n",coin2);
	printf("You will get 1 Baht : %d coins\n",coin1);
	getch();
	return 0;
}
