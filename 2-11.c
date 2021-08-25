/*
 메모리로부터 문자열을 입력받는 sscanf()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// sscanf()가 들어있음.
int main(void) {
	char array[50] = "100   3.14   good-morning";
	int num1;
	double num2;
	char str[50];

	// scanf("%d %lf %s", &num1, &num2, str); -> 키보드로부터 데이터를 입력받는 것.
	sscanf(array, "%d %lf %s", &num1, &num2, str);
	// -> 배열 array에 저장된 데이터를 %d %lf %s 형식으로 입력받아서 num1, num2, str에 각각 저장한다.

	puts("출력");
	printf("%d, %lf, %s \n", num1, num2, str);

	return 0;
}