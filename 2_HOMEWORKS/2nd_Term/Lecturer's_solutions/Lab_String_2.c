
//finding the substring without bult-in functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main() {
	int i = 0, b, t = 0, k, cnt = 0;
	char s1[100];
	char s2[100];
	char temp[100];

	gets_s(s1);
	gets_s(s2);


	//printf("%d\n%d\n", strlen(s1), strlen(s2));


	int len = strlen(s2);



		for (i = 0; i < strlen(s1); i++) {

			for (b = 0, t=0; b < len , t < len; b++,t++) {
				if (s1[i + b] == s2[t])
				{
					cnt++;
				}
			}


			if (cnt == len) {
				printf("substring");
				return 0;
			}
			else
				cnt = 0;

		}

	printf("not substring");

	return 0;
}








//finding substring with strstr() func

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	char s1[100];
	char s2[100];

	fgets(s1, sizeof(s1), stdin);
	fgets(s2, sizeof(s2), stdin);

	s1[strlen(s1) - 1] = '\0';
	s2[strlen(s2) - 1] = '\0';


	if (strstr(s1, s2) == NULL)
		printf("not substring");
	else
		printf("substring");

	return 0;
}




