/*
 �޸𸮷κ��� ���ڿ��� �Է¹޴� sscanf()�Լ� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// sscanf()�� �������.
int main(void) {
	char array[50] = "100   3.14   good-morning";
	int num1;
	double num2;
	char str[50];

	// scanf("%d %lf %s", &num1, &num2, str); -> Ű����κ��� �����͸� �Է¹޴� ��.
	sscanf(array, "%d %lf %s", &num1, &num2, str);
	// -> �迭 array�� ����� �����͸� %d %lf %s �������� �Է¹޾Ƽ� num1, num2, str�� ���� �����Ѵ�.

	puts("���");
	printf("%d, %lf, %s \n", num1, num2, str);

	return 0;
}