/*
 문자열을 비교하는 strcmp(), strncmp()함수 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char array1[20] = "Good-morning";
	char array2[20] = "Good-afternoon";
	char array3[20] = "Good-evening";
	int result1, result2, result3;

	result1 = strcmp(array1, array2);
	result2 = strncmp(array1, array2, 5);	// 각각 5바이트 크기만큼씩만 떼서 비교.
	result3 = strcmp(array2, array3);

	printf("%d %d %d \n", result1, result2, result3);
	// result1 = 양수 = array1이 array2보다 크다. (m > a)
	// result2 = 0 = array1과 array2를 5바이트씩 떼서 비교해 보니 같다!
	// result3 = 음수 = array3이 array2보다 크다. (e > a)

	return 0;
}