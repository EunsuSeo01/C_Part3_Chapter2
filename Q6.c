/*
 �������� 6�� Ǯ��.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void) {
	// ���ĺ� ���ڿ� �Է� �ޱ�.
	char alphabet[100];
	printf("���ĺ����� �̷���� ���ڿ��� �Է��ϼ���: ");
	scanf("%s", alphabet);

	// �Է¹��� ���ڿ��� ���� ���.
	printf("�Է¹��� ���ڿ��� ����: %d \n", strlen(alphabet));

	// �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� �ٲ㼭 ���.
	for (int i = 0; i < strlen(alphabet); i++) {
		if (islower(alphabet[i]) > 0)	// islower ������� ��� -> �ҹ��� ����!
			alphabet[i] = toupper(alphabet[i]);
		else if (isupper(alphabet[i]) > 0)		// isupper ������� ��� -> �빮�� ����!
			alphabet[i] = tolower(alphabet[i]);
	}

	puts(alphabet);

	return 0;
}