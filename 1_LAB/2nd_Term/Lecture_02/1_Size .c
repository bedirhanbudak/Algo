#include <stdio.h>
#include <string.h>

int main(){
	
	char s[100];
	
	fgets (s, sizeof(s), stdin);
	
	fputs (s, stdout);
	
	printf("%d\n", strlen(s));
	
	return 0;
}
