#include <stdio.h>

int main() {
	int a; // int형 변수(정수) a 선언
	int b, c; // 동일한 변수형이면 동시에 선언하는 것이 가능
	double da; // double형 변수(실수) da 선언
	char ch; // char형 변수(문자) ch 선언

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	return 0;
}