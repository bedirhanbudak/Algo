#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	
	fputs("Enter the string: ", stdout);
	fgets(str, sizeof(str), stdin);
	
	int i,ch=0,num=0,ex=0;
	
	for (i=0; str[i]!='\0'; i++){
		
		if (65 <= str[i] && str[i] <= 90 || 97 <= str[i] && str[i] <= 122)
			ch++;
		
		else if (48 <= str[i] && str[i] <= 57)
			num++;
			
		else
			ex++;
				
	}
	
	printf("%d\n%d\n%d\n", ch, num, ex);
	
	return 0;
}
