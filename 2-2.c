/*
 gets()함수와 puts()함수가 사용되는 이유를 알 수 있는 예제.
 last modified 2021-08-25
*/
#include <stdio.h>
int main(void) {
	char array1[20];
	char array2[20];

	gets(array1);
	puts(array1);		// 서식문자를 쓸 필요가 없어서 코드도 더 간결해짐.

	scanf("%s", array2);	// scanf() 함수를 통해 입력된 공백문자는 종료문자로 인식됨!
	printf("%s \n", array2);

	return 0;
}