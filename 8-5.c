#include <stdio.h>
#include <string.h> // 문자열 관련 함수 원형을 모아놓은 헤더 파일

int main() {
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); // str1 배열에 "tiger" 복사
	strcpy(str2, str1); // str2 배열에 str1 배열의 문자열을 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}

// strcpy() 함수 기본 사용법
// strcpy(저장될 배열명, 저장할 문자열)