/*
 �������� 3�� Ǯ��.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char a[] = "���ڿ�";
	char b[] = "���ڿ�";

	if (strcmp(a, b) == 0)
		puts("a�� b�� �����ϴ�.");
	else
		puts("a�� b�� ���� �ʽ��ϴ�.");

	return 0;
}