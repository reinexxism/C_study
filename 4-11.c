#include <stdio.h>

int main() {
	int a = 10, b = 20;
	int res;

	res = (++a, ++b); // 차례로 연산이 수행되며, 결과적으로 res에 저장되는 값은 b의 값

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}