/*
 연습문제 4번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[100];
	puts("크기가 100 미만인 문자열을 입력하세요.");
	gets(input);

	// 문자열의 앞뒤를 뒤집기.
	char inputCopy[sizeof(input)];
	int size = strlen(input);

	for (int i = 0; i < size; i++) {
		inputCopy[size - 1 - i] = input[i];
	}
	inputCopy[size] = '\0';

	printf("원래 문자열: %s \n", input);
	printf("앞뒤 바뀐 문자열: %s \n", inputCopy);

	return 0;
}