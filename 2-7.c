/*
 문자열을 결합하는 strncat()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strncat() 함수가 들어있음.
int main(void) {
	char array1[100];	// sizeof(array1) 하면 100 나옴. 문자열의 크기는 100.
	char array2[50];

	printf("첫 번째 문자열 입력 : ");
	gets(array1);

	printf("두 번째 문자열 입력 : ");
	gets(array2);

	strncat(array1, array2, 6);		// array2의 문자열 중 6바이트만큼만 array1 뒤에 결합시킴.

	printf("전체 문자열 출력 : ");
	puts(array1);

	return 0;
}