/*
 �������� 7�� Ǯ��.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>

struct student {
	char no[10];
	char name[10];
	int eng;
	int kor;
};

int main(void) {
	struct student s1;
	printf("�й��� �Է��ϼ���: ");
	scanf("%s", &s1.no);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", &s1.name);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &s1.eng);
	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &s1.kor);

	if (strncmp(s1.no, "2010", 4) == 0) {
		printf("�̸�: %s, ���� ����: %d, ���� ����: %d \n", s1.name, s1.eng, s1.kor);
	}

	return 0;
}