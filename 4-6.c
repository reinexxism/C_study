#include <stdio.h>

int main() {
	int a = 30;
	int res;

	res = (a > 10) && (a < 20); // && 연산자 : 둘 중 하나라도 거짓이면 false
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20); // || 연산자 : 둘 중 하나라도 참이면 true
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30); // ! 연산자 : 참과 거짓 결괏값을 뒤바꿈
	printf("!(a >= 30) : %d\n", res);

	return 0;
}