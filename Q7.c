/*
 연습문제 7번 풀이.
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
	printf("학번을 입력하세요: ");
	scanf("%s", &s1.no);
	printf("이름을 입력하세요: ");
	scanf("%s", &s1.name);
	printf("영어 점수를 입력하세요: ");
	scanf("%d", &s1.eng);
	printf("수학 점수를 입력하세요: ");
	scanf("%d", &s1.kor);

	if (strncmp(s1.no, "2010", 4) == 0) {
		printf("이름: %s, 영어 점수: %d, 국어 점수: %d \n", s1.name, s1.eng, s1.kor);
	}

	return 0;
}