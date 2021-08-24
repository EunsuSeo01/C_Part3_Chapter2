/*
 gets()함수와 puts()함수 예제.
 last modified 2021-08-25
*/
#include <stdio.h>
int main(void) {
	char array1[10];
	char array2[10] = "Good luck";

	puts("문자열을 입력하세요.");
	gets(array1);	// 문자열 입력. 인자로 받은 메모리 주소에 문자열을 입력. 문자열의 끝에 자동으로 \0 붙여줌.
	puts(array1);	// 문자열 출력. 인자로 받은 메모리 주소를 참조하여 종료 문자를 만날 때까지 출력.

	puts(array2);
	puts("Good luck");

	return 0;
}