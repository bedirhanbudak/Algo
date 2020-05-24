#include <stdio.h>

int main() {

	char prv[20];

	printf("province: ");
	scanf("%s", prv);

	int a;

	for (a = 0; prv[a] != '\0'; a++) {}

	printf("%d", a);

	return 0;
}
