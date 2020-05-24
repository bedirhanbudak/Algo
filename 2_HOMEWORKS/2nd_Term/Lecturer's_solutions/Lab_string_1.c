#include <stdio.h>



int main() {
	int i;
	int list[256] = {0};
	char str[100];

	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	for (i = 0; str[i] != '\0'; i++) {
		list[str[i]]++;
	}

	for (i = 0; i < 256 ; i++)
		if (list[i] > 0)
		printf("%c occurs %d times\n", i, list[i]);

	return 0;

}









/////////////////////////////////////////////////////






#include <stdio.h>

// this part is only used if necessary. 
int length(char c[]) {
	int i, cnt = 0;

	for (i = 0; c[i] != '\0'; i++)
		cnt++;

	return cnt;
}


int main() {
	int i;
	int list[26] = {0};

	char z = 'z';
	char str[100];

	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	
	for (i = 0; str[i] != '\0'; i++) {
		list[str[i] - 'a']++;
	}


	for (i = 0; i < 26 ; i++)
		if (list[i] > 0)
		printf("%c occurs %d times\n", i + 'a', list[i]);



	return 0;

}
