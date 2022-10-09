#include <stdio.h>

// 재귀호출 함수(Recursive call funcion)
// 자기 자신을 호출하는 함수

void fruit(void);

int main(void) {

	fruit();

	return 0;
}

void fruit(void) {

	printf("apple\n");
	fruit(); // 자신을 다시 호출
}