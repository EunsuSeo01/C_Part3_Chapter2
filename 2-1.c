/*
 gets()�Լ��� puts()�Լ� ����.
 last modified 2021-08-25
*/
#include <stdio.h>
int main(void) {
	char array1[10];
	char array2[10] = "Good luck";

	puts("���ڿ��� �Է��ϼ���.");
	gets(array1);	// ���ڿ� �Է�. ���ڷ� ���� �޸� �ּҿ� ���ڿ��� �Է�. ���ڿ��� ���� �ڵ����� \0 �ٿ���.
	puts(array1);	// ���ڿ� ���. ���ڷ� ���� �޸� �ּҸ� �����Ͽ� ���� ���ڸ� ���� ������ ���.

	puts(array2);
	puts("Good luck");

	return 0;
}