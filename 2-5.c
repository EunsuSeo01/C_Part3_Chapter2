/*
 문자열을 복사하는 strcpy(), strncpy()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char array1[6] = "Hello";
	char array2[3];

	strncpy(array2, array1, 3);		// array1에 Hel까지 복사.
	array2[2] = '\0';	// 인덱스 2자리에 널 문자(종료문자)를 넣어서 문자열을 완성시켜 줌.
						// 그래서 현재 array1[0]에는 H, [1]에는 e, [2]에는 널 문자.
	puts(array2);

	return 0;
}