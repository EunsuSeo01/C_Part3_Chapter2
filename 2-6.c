/*
 문자열을 결합하는 strcat()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strcat() 함수가 들어있음.
int main(void) {
	char array1[100];
	char array2[50];

	printf("첫 번째 문자열 입력 : ");
	gets(array1);

	printf("두 번째 문자열 입력 : ");  
	gets(array2);

	strcat(array1, array2);		// 문자열 결합. array2의 문자열을 array1의 뒤에다가 이어붙여줌.

	printf("결합된 문자열 출력 : ");
	puts(array1);

	return 0;
}