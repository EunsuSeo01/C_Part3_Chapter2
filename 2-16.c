/*
 난수를 발생시키는 수학 함수 중 하나인 rand()함수의 사용 예제.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <stdlib.h>		// rand()함수의 사용을 위해 추가.
int main(void) {
	int i = 0;
	puts("10개의 난수를 발생시킵니다.");

	while (i < 10)	// 난수 발생을 10번 반복하기 위해.
	{
		printf("%d \t", rand());	// rand()함수는 난수의 생성 패턴이 1개뿐이라서 몇 번을 실행해도 생성 패턴이 모두 같다.
		i++;
	}

	return 0;
}