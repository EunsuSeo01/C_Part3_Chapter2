/*
 ���ڿ��� �����ϴ� strcpy(), strncpy()�Լ� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strcpy(), strncpy()�Լ��� ���� ����.
int main(void) {
	char array1[12] = "Hello world";	// ũ��� ���Ṯ�ڱ��� �����Ͽ� 12����Ʈ. 
	char array2[12];
	char array3[12];

	strcpy(array2, array1);
	strncpy(array3, array1, 12);	// array1�� 12����Ʈ�� ũ�⸸ŭ array3�� ����.
	// strncpy(array3, array1, strlen(array1) + 1);
	// strncpy(array3, array1, sizeof(array1));

	puts(array2);
	puts(array3);

	return 0;
}