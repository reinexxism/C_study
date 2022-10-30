#include <stdio.h>

int main() {
	int a = 10, b = 20;
	const int* pa = &a; // 포인터 pa는 변수 a를 가리킨다.

	printf("변수 a의 값 : %d\n", *pa);
	pa = &b;
	printf("변수 b의 값 : %d\n", *pa);
	
	pa = &a;
	a = 20;

	printf("변수 a의 값 : %d\n", *pa);

	return 0;
}