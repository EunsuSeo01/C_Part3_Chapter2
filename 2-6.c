/*
 ���ڿ��� �����ϴ� strcat()�Լ� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strcat() �Լ��� �������.
int main(void) {
	char array1[100];
	char array2[50];

	printf("ù ��° ���ڿ� �Է� : ");
	gets(array1);

	printf("�� ��° ���ڿ� �Է� : ");  
	gets(array2);

	strcat(array1, array2);		// ���ڿ� ����. array2�� ���ڿ��� array1�� �ڿ��ٰ� �̾�ٿ���.

	printf("���յ� ���ڿ� ��� : ");
	puts(array1);

	return 0;
}