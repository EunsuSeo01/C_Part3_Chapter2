/*
 strlen()�Լ� ����.
 last modified 2021-08-25
*/
#include <stdio.h>
#include <string.h>		// ��� ���� string.h�� ��Ŭ��� �ؾ� ��.
int main(void) {
	char array1[] = "Hello C";	// ����: 7
	char array2[] = "�ȳ��ϼ���";	// �ѱ��� �� ���ڰ� 2����Ʈ -> ����: 5*2 = 10

	printf("���� ���ڿ��� ���� : %d \n", strlen(array1));	// strlen()�� ���Ṯ�ڰ� ���Ե��� ���� ���ڿ��� ���̸� ��ȯ��.
	printf("�ѱ� ���ڿ��� ���� : %d \n", strlen(array2));

	printf("���� ���ڿ��� ũ�� : %d \n", sizeof(array1));	// sizeof �����ڴ� ���Ṯ�ڰ� ���Ե� ���ڿ��� ���̸� ��ȯ��.
	printf("�ѱ� ���ڿ��� ũ�� : %d \n", sizeof(array2));

	return 0;
}