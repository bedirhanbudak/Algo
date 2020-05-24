#include <stdio.h>
#include <stdlib.h>

int main() {

	int i = 3;
	int j = 5;
	printf("%d\n", i++ + ++j);

	// i=i+1   =>   i++   ++i

	printf("%d %d\n", i, j);


	return 0;
}
