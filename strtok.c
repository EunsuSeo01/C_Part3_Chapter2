/*
 구분자를 기준으로 문자열을 토큰으로 분리할 때 쓰이는 strtok()함수의 사용 예제.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strtok()함수가 들어있음.
int main(void) {
	char array1[50] = "Good-morning-Good-afternoon-Good-evening";
	char* p = NULL;
	int count = 0;

	p = strtok(array1, "-");	// array1을 -을 기준으로 분리해라.

	for (; p != NULL; count++) {	// 더이상의 토큰이 없으면 NULL을 반환하기 때문에 그때까지 반복.
		puts(p);
		p = strtok(NULL, "-");		// 두 번째 호출부터는 첫 번째 인자에 NULL 포인터를 지정한다.
								// -> 이렇게 하면 이전 호출에서 찾은 구분자 다음 위치부터 같은 작업을 반복함!
	}
	printf("토큰의 개수는 총 %d개입니다. \n", count);

	return 0;
}