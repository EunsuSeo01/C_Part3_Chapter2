/*
 strlen()함수 예제.
 last modified 2021-08-25
*/
#include <stdio.h>
#include <string.h>		// 헤더 파일 string.h를 인클루드 해야 함.
int main(void) {
	char array1[] = "Hello C";	// 길이: 7
	char array2[] = "안녕하세요";	// 한글은 한 글자가 2바이트 -> 길이: 5*2 = 10

	printf("영문 문자열의 길이 : %d \n", strlen(array1));	// strlen()은 종료문자가 포함되지 않은 문자열의 길이를 반환함.
	printf("한글 문자열의 길이 : %d \n", strlen(array2));

	printf("영문 문자열의 크기 : %d \n", sizeof(array1));	// sizeof 연산자는 종료문자가 포함된 문자열의 길이를 반환함.
	printf("한글 문자열의 크기 : %d \n", sizeof(array2));

	return 0;
}