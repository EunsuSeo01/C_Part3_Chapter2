/*
 메모리에 문자열을 출력하는 sprintf()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// sprintf()함수가 들어있음.
int main(void) {
	char array[50];
	int num1 = 100;
	double num2 = 3.14;
	char str[50] = "good-morning";

	printf("%d, %lf, %s \n", num1, num2, str);		// 모니터에 출력.
	sprintf(array, "%d, %lf, %s \n", num1, num2, str);		// 배열에 출력.
	printf("%s \n", array);		// 모니터에 출력.

	return 0;
}