/*
 �����ڸ� �������� ���ڿ��� ��ū���� �и��� �� ���̴� strtok()�Լ��� ��� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strtok()�Լ��� �������.
int main(void) {
	char array1[50] = "Good-morning-Good-afternoon-Good-evening";
	char* p = NULL;
	int count = 0;

	p = strtok(array1, "-");	// array1�� -�� �������� �и��ض�.

	for (; p != NULL; count++) {	// ���̻��� ��ū�� ������ NULL�� ��ȯ�ϱ� ������ �׶����� �ݺ�.
		puts(p);
		p = strtok(NULL, "-");		// �� ��° ȣ����ʹ� ù ��° ���ڿ� NULL �����͸� �����Ѵ�.
								// -> �̷��� �ϸ� ���� ȣ�⿡�� ã�� ������ ���� ��ġ���� ���� �۾��� �ݺ���!
	}
	printf("��ū�� ������ �� %d���Դϴ�. \n", count);

	return 0;
}