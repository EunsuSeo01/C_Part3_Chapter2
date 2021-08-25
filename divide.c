/*
 문자 분류 함수 사용 예제.
 문자열을 처리할 때 '문자의 유형에 따라' 구분해서 처리해야 하는 경우가 있는데
 이때 문자 분류 함수가 유용하니까 참고하자.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <ctype.h>		// 문자 분류 함수를 호출하기 위해.
int main(void) {
	char a1 = 'A', a2 = 'a', a3 = 'B';
	int result1, result2, result3;

	result1 = isalnum(a1);		// a1이 알파벳 또는 숫자냐. 알파벳도 숫자도 아니면 0 출력.
	result2 = isupper(a2);		// a2가 대문자냐 아니냐. 아니면 0 출력.
	result3 = islower(a3);		// a3이 소문자냐 아니냐. 아니면 0 출력.

	printf("%d %d %d \n", result1, result2, result3);

	return 0;
}