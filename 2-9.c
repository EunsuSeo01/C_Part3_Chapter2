/*
 ���ڿ� ���ڿ��� ��ġ�� ã���ִ� strchr(), strstr()�Լ��� ����.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char array1[50] = "Good-morning, Good-afternoon, Good-evening";
	char array2[10] = "morning";
	char* p1 = NULL;
	char* p2 = NULL;

	p1 = strchr(array1, 'a');	// array1���� ���� a�� ã�Ƽ� �� ��ġ�� p1�� ����. (= ���� a�� �ּ�)
	p2 = strstr(array1, array2);	// array1���� ���ڿ� array2�� ã�Ƽ� �� ���� ��ġ�� p2�� ����. (= ���� m�� �ּ�)

	printf("���� a�� ��ġ : %x \n", p1);
	printf("���ڿ� : %s \n", p1);	// %s = ���� a�� �ִ� ��ġ p1�� ���� �ּ� ��� ���Ṯ�ڰ� ������ ������ ���.
	printf("----------------------------------------\n");
	printf("���ڿ��� ���� ��ġ : %x \n", p2);
	printf("���ڿ� : %s \n", p2);

	return 0;
}