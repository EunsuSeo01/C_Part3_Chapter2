/*
 gets()�Լ��� puts()�Լ��� ���Ǵ� ������ �� �� �ִ� ����.
 last modified 2021-08-25
*/
#include <stdio.h>
int main(void) {
	char array1[20];
	char array2[20];

	gets(array1);
	puts(array1);		// ���Ĺ��ڸ� �� �ʿ䰡 ��� �ڵ嵵 �� ��������.

	scanf("%s", array2);	// scanf() �Լ��� ���� �Էµ� ���鹮�ڴ� ���Ṯ�ڷ� �νĵ�!
	printf("%s \n", array2);

	return 0;
}