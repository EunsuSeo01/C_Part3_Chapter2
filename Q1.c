/*
 연습문제 1번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>		// isalpha() 사용.
int main(void) {
	char input[100];
	printf("단어를 입력하세요 : ");
	scanf("%s", input);

	if (input != NULL) {
		char alphabetNum[26] = { 0 };
		int i = 0;
		while (i < strlen(input)) {
			if (isalpha(input[i]) != 0) {
				strlwr(input);
				alphabetNum[(int)input[i] - 97]++;
			}

			i++;
		}

		char alphabet;
		for (int j = 0; j < sizeof(alphabetNum); j++) {
			if (alphabetNum[j] != 0) {
				alphabet = j + 97;
				printf("%c : %d개\n", alphabet, alphabetNum[j]);
			}
		}
	}

	return 0;
}