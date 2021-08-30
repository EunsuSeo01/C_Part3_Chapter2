/*
 연습문제 5번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
int main(void) {
	// 정수 형태의 문자열을 입력받아 정수로 바꾸는 프로그램.
	char input[100];
	printf("문자열을 입력하세요: ");
	scanf("%s", input);

	
	int output = atoi(input);
	printf("문자열을 정수로 출력: %d \n", output);

	return 0;
}