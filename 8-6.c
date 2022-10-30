#include <stdio.h>

int main() {
	char str[80];

	printf("문자열 입력 : ");
	gets(str); // 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : ");
	puts(str); // 배열에 저장된 문자열 출력

	return 0;
}