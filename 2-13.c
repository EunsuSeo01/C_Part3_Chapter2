/*
 ������ ��ȯ �Լ��� atof(), atoi(), atol()�Լ� ����.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <stdlib.h>		// atof(), atoi(), atol()�Լ��� �̿��ϱ� ���� �߰�.
int main(void) {
	char* str1 = "3.14";
	char* str2 = "100";
	char* str3 = "10000000";	// ū����ǥ�� �������� ���ڿ�.

	double num1;
	int num2;
	long num3;

	num1 = atof(str1);		// ���ڿ��� double������ ��ȯ. -> double�� ���� num1�� �޴´�.
	num2 = atoi(str2);		// ���ڿ��� int������ ��ȯ. -> int�� ���� num2�� �޴´�.
	num3 = atol(str3);		// ���ڿ��� long������ ��ȯ. -> long�� ���� num3�� �޴´�.

	printf("%lf, %d, %ld \n", num1, num2, num3);

	return 0;
}