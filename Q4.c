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
		inputCopy[size - 1] = input[i];
	}

	return 0;
}