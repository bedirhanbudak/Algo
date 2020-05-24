#include <stdio.h>

int a = 0;

char my_isupper(char ch) {

	if (ch >= 97 && ch <= 122) {
		printf("The letter is lowercase\n");
		a = 1;
	}
	else if (ch >= 65 && ch <= 90)
	{
		printf("The letter is uppercase\n");
		a = 0;
	}
	return 0;
}
char my_toupper(char ch) {

	my_isupper(ch);

	if (a == 1) {
		ch -= 32;
		printf("%c", ch);
		return ch;
	}
}

int main() {

	char num;
	printf("Enter a letter: ");
	scanf("%c", &num);

	my_toupper(num);


	return 0;
}


