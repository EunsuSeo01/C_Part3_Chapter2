/*
 난수를 발생시키는 함수 중 rand()함수의 문제를 해결한 srand()함수의 사용 예제.
 srand()함수의 원형: int srand(unsigned int seed);   seed: 난수의 생성 패턴을 지정.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <stdlib.h>		// sranc()함수를 사용하기 위해 추가.
int main(void) {
	int i = 0;
	puts("10개의 난수를 발생시킵니다.");
	// srand(1);	-> srand()함수를 호출하지 않고 rand()함수를 호출하면 기본적으로 srand(1)이 설정되어 있는 것!
					// 그래서 srand(1);의 결과가 2-16.c의 결과와 같은 것.
	// srand(2);
	srand(3);		// -> srand()함수의 '인자 값을 변경'해서 서로 다른 결과의 난수가 생성된다!
	
	while (i < 10) {	// 10번 반복.
		printf("%d \t", rand());
		i++;
	}

	return 0;
}
