/*
 수학 관련 시스템 라이브러리 함수 중 <math.h>에 있는 함수 예제.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	double a1 = 3.14;
	double a2 = -3.14;

	printf("%.2lf \n", ceil(a1));	// ceil(a1); a1보다 큰 정수를 반환.
	printf("%.2lf \n", floor(a1));	// floor(a1); a1보다 작은 정수를 반환.
	printf("------------\n");

	printf("%.2lf \n", fabs(a2));	// fabs(a2); a2의 절댓값 반환.
	printf("%.2lf \n", pow(2, 8));	// pow(2, 8); 2의 8제곱 반환.
	printf("%.2lf \n", sqrt(2));	// sqrt(2); 2에 루트 씌운 값 반환.
	printf("------------\n");

	printf("%.2lf \n", exp(1));		// exp(1); e의 1제곱 반환.
	printf("%.2lf \n", log(exp(1)));	// log(exp(1)); log e의 exp(1) 반환. (밑이 e고, 진수가 exp(1)인 것)
	printf("%.2lf \n", log10(10));		// log10(10); log 10의 10 반환. (밑이 10)
	printf("------------\n");

	return 0;
}