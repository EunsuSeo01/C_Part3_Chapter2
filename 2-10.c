/*
 문자열을 대문자로 바꾸는 strupr()함수와 문자열을 소문자로 바꾸는 strlwr()함수의 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strupr(), strlwr()함수가 들어있음.
int main(void) {
	char array1[50] = "good-morning, good-afternoon, good-evening";
	char array2[50] = "GOOD-MORNING, GOOD-AFTERNOON, GOOD-EVENING";
	char* p1 = NULL;
	char* p2 = NULL;
	
	p1 = strupr(array1);
	p2 = strlwr(array2);

	puts(p1);
	puts(p2);	// 전달된 메모리 주소의 문자열을 출력.

	return 0;
}