#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));

	printf("***Welcome to guessing number game***\n");
	printf(">>>The only rule is, your guess must be between 100 to 200.\n");

	int guess, line = 1;
	printf("\nThe number has created. Give me your %d. guess: ", line);
	scanf("%d", &guess);

	int random;
	char tip;

	random = rand() % 100 + 100;
	printf("%d\n", random);
	while (1) {

		if (random == guess) {
			printf("\nGotcha!");
			break;
		}
		if (random < guess)
			tip = 'L';
		if (random > guess)
			tip = 'H';

		line++;
		printf("\n%d.Mistake!\nTry again(%c): ", line, tip);
		scanf("%d", &guess);
	}
	return 0;

}
