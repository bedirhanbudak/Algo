#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100], ch[100];
	
	fgets(str, sizeof(str), stdin);
	fgets(ch, sizeof(ch), stdin);

	str[strlen(str) - 1] = '\0';
	ch[strlen(ch) - 1] = '\0';
	
	if (NULL == strstr(str, ch))
		printf ("Not substring!");
		
	else	
		printf("Substring!");
	
	
	return 0;
}

