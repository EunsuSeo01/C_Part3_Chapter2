/*
 ������ ��ȯ �Լ��� toascii(), tolower(), toupper()�Լ� ����.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <ctype.h>		// toascii(), tolower(), toupper()�Լ����� ctype.h�� �־!
int main(void) {
	char a1 = 'A';
	char a2 = 'a';

	printf("�ƽ�Ű �ڵ� : %d \n", toascii(a1));		// '����'�� �ƽ�Ű ���ڷ� ��ȯ�ϴ� �Լ�.
	printf("�ҹ��� : %c \n", tolower(a1));		// '����'�� �ҹ��ڷ� ��ȯ�ϴ� �Լ�.
	printf("�빮�� : %c \n", toupper(a2));		// '����'�� �빮�ڷ� ��ȯ�ϴ� �Լ�.

	return 0;
}