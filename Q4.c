/*
 �������� 4�� Ǯ��.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char input[100];
	puts("ũ�Ⱑ 100 �̸��� ���ڿ��� �Է��ϼ���.");
	gets(input);

	// ���ڿ��� �յڸ� ������.
	char inputCopy[sizeof(input)];
	int size = strlen(input);

	for (int i = 0; i < size; i++) {
		inputCopy[size - 1 - i] = input[i];
	}
	inputCopy[size] = '\0';

	printf("���� ���ڿ�: %s \n", input);
	printf("�յ� �ٲ� ���ڿ�: %s \n", inputCopy);

	return 0;
}