/*
 ���ڿ��� �����ϴ� strcpy(), strncpy()�Լ� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char array1[6] = "Hello";
	char array2[3];

	strncpy(array2, array1, 3);		// array1�� Hel���� ����.
	array2[2] = '\0';	// �ε��� 2�ڸ��� �� ����(���Ṯ��)�� �־ ���ڿ��� �ϼ����� ��.
						// �׷��� ���� array1[0]���� H, [1]���� e, [2]���� �� ����.
	puts(array2);

	return 0;
}