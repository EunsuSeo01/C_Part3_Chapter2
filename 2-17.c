/*
 ������ �߻���Ű�� �Լ� �� rand()�Լ��� ������ �ذ��� srand()�Լ��� ��� ����.
 srand()�Լ��� ����: int srand(unsigned int seed);   seed: ������ ���� ������ ����.
 last modified 2021-08-28
*/
#include <stdio.h>
#include <stdlib.h>		// sranc()�Լ��� ����ϱ� ���� �߰�.
int main(void) {
	int i = 0;
	puts("10���� ������ �߻���ŵ�ϴ�.");
	// srand(1);	-> srand()�Լ��� ȣ������ �ʰ� rand()�Լ��� ȣ���ϸ� �⺻������ srand(1)�� �����Ǿ� �ִ� ��!
					// �׷��� srand(1);�� ����� 2-16.c�� ����� ���� ��.
	// srand(2);
	srand(3);		// -> srand()�Լ��� '���� ���� ����'�ؼ� ���� �ٸ� ����� ������ �����ȴ�!
	
	while (i < 10) {	// 10�� �ݺ�.
		printf("%d \t", rand());
		i++;
	}

	return 0;
}
