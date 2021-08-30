/*
 연습문제 6번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
	// 알파벳 문자열 입력 받기.
	char alphabet[100];
	printf("알파벳으로 이루어진 문자열을 입력하세요: ");
	scanf("%s", alphabet);

	// 입력받은 문자열의 개수 출력.
	printf("입력받은 문자열의 개수: %d \n", strlen(alphabet));

	// 대문자는 소문자로, 소문자는 대문자로 바꿔서 출력.
	for (int i = 0; i < strlen(alphabet); i++) {
		if (islower(alphabet[i]) > 0)	// islower 결과값이 양수 -> 소문자 맞음!
			alphabet[i] = toupper(alphabet[i]);
		else if (isupper(alphabet[i]) > 0)		// isupper 결과값이 양수 -> 대문자 맞음!
			alphabet[i] = tolower(alphabet[i]);
	}

	puts(alphabet);

	return 0;
}