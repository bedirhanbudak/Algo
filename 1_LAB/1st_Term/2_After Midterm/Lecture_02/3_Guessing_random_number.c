#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(0));
	int k, num;
	k = rand() % 1000;
	printf("Created a random number!");
	printf("\n%d", k);

	do
	{
		printf("\nGuess: ");
		scanf("%d", &num);

		if (num == k)
			printf("Found it!");
		else if (k < num)
			printf("Lower");
		else if (k > num)
			printf("Higher");
		else
			printf("Error!");
	} while (num != k);
	return 0;
}

