/*
 ���� ���� �ý��� ���̺귯�� �Լ� �� <math.h>�� �ִ� �Լ� ����.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <math.h>
int main(void) {
	double a1 = 3.14;
	double a2 = -3.14;

	printf("%.2lf \n", ceil(a1));	// ceil(a1); a1���� ū ������ ��ȯ.
	printf("%.2lf \n", floor(a1));	// floor(a1); a1���� ���� ������ ��ȯ.
	printf("------------\n");

	printf("%.2lf \n", fabs(a2));	// fabs(a2); a2�� ���� ��ȯ.
	printf("%.2lf \n", pow(2, 8));	// pow(2, 8); 2�� 8���� ��ȯ.
	printf("%.2lf \n", sqrt(2));	// sqrt(2); 2�� ��Ʈ ���� �� ��ȯ.
	printf("------------\n");

	printf("%.2lf \n", exp(1));		// exp(1); e�� 1���� ��ȯ.
	printf("%.2lf \n", log(exp(1)));	// log(exp(1)); log e�� exp(1) ��ȯ. (���� e��, ������ exp(1)�� ��)
	printf("%.2lf \n", log10(10));		// log10(10); log 10�� 10 ��ȯ. (���� 10)
	printf("------------\n");

	return 0;
}