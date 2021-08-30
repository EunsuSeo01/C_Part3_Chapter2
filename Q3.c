/*
 연습문제 3번 풀이.
 last modified 2021-08-30
*/
#include <stdio.h>
#include <string.h>
int main(void) {
	char a[] = "문자열";
	char b[] = "문자열";

	if (strcmp(a, b) == 0)
		puts("a와 b가 같습니다.");
	else
		puts("a와 b가 같지 않습니다.");

	return 0;
}