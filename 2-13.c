/*
 데이터 변환 함수인 atof(), atoi(), atol()함수 예제.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <stdlib.h>		// atof(), atoi(), atol()함수를 이용하기 위해 추가.
int main(void) {
	char* str1 = "3.14";
	char* str2 = "100";
	char* str3 = "10000000";	// 큰따옴표로 묶었으니 문자열.

	double num1;
	int num2;
	long num3;

	num1 = atof(str1);		// 문자열을 double형으로 변환. -> double형 변수 num1이 받는다.
	num2 = atoi(str2);		// 문자열을 int형으로 변환. -> int형 변수 num2가 받는다.
	num3 = atol(str3);		// 문자열을 long형으로 변환. -> long형 변수 num3이 받는다.

	printf("%lf, %d, %ld \n", num1, num2, num3);

	return 0;
}