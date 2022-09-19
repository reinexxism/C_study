#include <stdio.h>

int main() {
	int age; // 나이 변수는 정수 자료형에 저장
	double height; // 키 변수는 실수 자료형에 저장

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height); // 나이와 키를 동시에 입력
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}