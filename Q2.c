/*
 연습문제 2번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char word[10][16];
	
	puts("입력을 종료하려면 그냥 엔터를 누르세요.");
	int i = 0;
	while (i < 10) {
		printf("%d번째? ", i + 1);
		gets(word[i]);
		if (word[i][0] == '\0')
			break;
		i++;
	}

	for (int k = 0; k < i - 1; k++) {
		for (int j = k + 1; j < i; j++) {
			if (strcmp(word[k], word[j]) > 0) {
				char temp[16] = "";
				strcpy(temp, word[j]);
				strcpy(word[j], word[k]);
				strcpy(word[k], temp);
			}
		}
	}

	for (int n = 0; n < i; n++) {
		puts(word[n]);
	}

	return 0;
}