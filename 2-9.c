/*
 문자와 문자열의 위치를 찾아주는 strchr(), strstr()함수의 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char array1[50] = "Good-morning, Good-afternoon, Good-evening";
	char array2[10] = "morning";
	char* p1 = NULL;
	char* p2 = NULL;

	p1 = strchr(array1, 'a');	// array1에서 문자 a를 찾아서 그 위치를 p1에 저장. (= 문자 a의 주소)
	p2 = strstr(array1, array2);	// array1에서 문자열 array2를 찾아서 그 시작 위치를 p2에 저장. (= 문자 m의 주소)

	printf("문자 a의 위치 : %x \n", p1);
	printf("문자열 : %s \n", p1);	// %s = 문자 a가 있는 위치 p1을 시작 주소 삼아 종료문자가 나오기 전까지 출력.
	printf("----------------------------------------\n");
	printf("문자열의 시작 위치 : %x \n", p2);
	printf("문자열 : %s \n", p2);

	return 0;
}