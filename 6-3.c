#include <stdio.h>

int main() {
	int a = 11; 

	do
	{
		a = a * 2;
	} while (a < 10); // 조건식이 성립하지 않아도(거짓이어도) 한 번 실행 -> while문과의 차이점
	printf("a : %d\n", a);

	return 0;
}