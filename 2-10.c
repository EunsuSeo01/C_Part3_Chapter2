/*
 ���ڿ��� �빮�ڷ� �ٲٴ� strupr()�Լ��� ���ڿ��� �ҹ��ڷ� �ٲٴ� strlwr()�Լ��� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>		// strupr(), strlwr()�Լ��� �������.
int main(void) {
	char array1[50] = "good-morning, good-afternoon, good-evening";
	char array2[50] = "GOOD-MORNING, GOOD-AFTERNOON, GOOD-EVENING";
	char* p1 = NULL;
	char* p2 = NULL;
	
	p1 = strupr(array1);
	p2 = strlwr(array2);

	puts(p1);
	puts(p2);	// ���޵� �޸� �ּ��� ���ڿ��� ���.

	return 0;
}