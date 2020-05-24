#include <stdio.h>
#include <stdlib.h>

int main() {

	int money;

	printf("Enter the amount of money: ");
	scanf("%d", &money);

	int hundred;
	hundred = money / 100;
	money = money % 100;
	printf("%d hundred\n", hundred);

	int fifty;
	fifty = money / 50;
	money = money % 50;
	printf("%d fifty\n", fifty);

	int twenty;
	twenty = money / 20;
	money = money % 20;
	printf("%d twenty\n", twenty);

	int ten;
	ten = money / 10;
	money = money % 10;
	printf("%d ten\n", ten);

	int five;
	five = money / 5;
	money = money % 5;
	printf("%d five\n", five);

	int one;
	one = money / 1;
	money = money % 1;
	printf("%d one\n", one);



	return 0;
}
