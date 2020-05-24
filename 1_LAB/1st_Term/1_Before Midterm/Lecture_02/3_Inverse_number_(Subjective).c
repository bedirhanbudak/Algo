#include <stdio.h>
#include <stdlib.h>

/*--------------------------
I just typed the code to practice
So it is not totally correct
---------------------------*/

int main() {

	int num, inverse_num;
	int a, b, c, d;

	printf("Tersten yazdirmak istedigin 4 basamakli bir sayi gir: ");
	scanf("%d", &num);

	a = (num % 10);
	b = (num % 100 - a);
	c = (num % 1000 - b - a);
	d = (num % 10000 - c - b - a);

	inverse_num = a * 1000 + b * 10 + c / 10 + d / 1000;
	printf("%d", inverse_num);

	return 0;
}
