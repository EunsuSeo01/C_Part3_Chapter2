/*
 데이터 변환 함수인 toascii(), tolower(), toupper()함수 예제.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <ctype.h>		// toascii(), tolower(), toupper()함수들이 ctype.h에 있어서!
int main(void) {
	char a1 = 'A';
	char a2 = 'a';

	printf("아스키 코드 : %d \n", toascii(a1));		// '문자'를 아스키 문자로 변환하는 함수.
	printf("소문자 : %c \n", tolower(a1));		// '문자'를 소문자로 변환하는 함수.
	printf("대문자 : %c \n", toupper(a2));		// '문자'를 대문자로 변환하는 함수.

	return 0;
}