/*
 문자열을 복사하는 strcpy(), strncpy()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strcpy(), strncpy()함수를 쓰기 위해.
int main(void) {
	char array1[12] = "Hello world";	// 크기는 종료문자까지 포함하여 12바이트. 
	char array2[12];
	char array3[12];

	strcpy(array2, array1);
	strncpy(array3, array1, 12);	// array1을 12바이트의 크기만큼 array3에 복사.
	// strncpy(array3, array1, strlen(array1) + 1);
	// strncpy(array3, array1, sizeof(array1));

	puts(array2);
	puts(array3);

	return 0;
}