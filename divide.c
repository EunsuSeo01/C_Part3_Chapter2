/*
 ���� �з� �Լ� ��� ����.
 ���ڿ��� ó���� �� '������ ������ ����' �����ؼ� ó���ؾ� �ϴ� ��찡 �ִµ�
 �̶� ���� �з� �Լ��� �����ϴϱ� ��������.
 last modified 2021-08-26
*/
#include <stdio.h>
#include <ctype.h>		// ���� �з� �Լ��� ȣ���ϱ� ����.
int main(void) {
	char a1 = 'A', a2 = 'a', a3 = 'B';
	int result1, result2, result3;

	result1 = isalnum(a1);		// a1�� ���ĺ� �Ǵ� ���ڳ�. ���ĺ��� ���ڵ� �ƴϸ� 0 ���.
	result2 = isupper(a2);		// a2�� �빮�ڳ� �ƴϳ�. �ƴϸ� 0 ���.
	result3 = islower(a3);		// a3�� �ҹ��ڳ� �ƴϳ�. �ƴϸ� 0 ���.

	printf("%d %d %d \n", result1, result2, result3);

	return 0;
}