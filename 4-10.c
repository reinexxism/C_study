#include <stdio.h>

int main() {
	int a = 10, b = 20;
	int res = 2;

	a += 20; // a와 20을 더한 결과를 다시 a에 저장(+=)
	res *= b + 10; // b에 10을 더한 결괏값에 res를 다시 곱하고 다시 res에 저장(*=)

	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}