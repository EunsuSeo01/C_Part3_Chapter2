/*
 ���ڿ��� �����ϴ� strncat()�Լ� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strncat() �Լ��� �������.
int main(void) {
	char array1[100];	// sizeof(array1) �ϸ� 100 ����. ���ڿ��� ũ��� 100.
	char array2[50];

	printf("ù ��° ���ڿ� �Է� : ");
	gets(array1);

	printf("�� ��° ���ڿ� �Է� : ");
	gets(array2);

	strncat(array1, array2, 6);		// array2�� ���ڿ� �� 6����Ʈ��ŭ�� array1 �ڿ� ���ս�Ŵ.

	printf("��ü ���ڿ� ��� : ");
	puts(array1);

	return 0;
}