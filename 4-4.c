#include <stdio.h>

int main() {
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3; // 전위형 증감 연산자 : 값이 증감 -> 연산에 사용
	post = (b++) * 3; // 후위형 증감 연산자 : 연산에 사용 -> 값이 증감

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형 : (b++) * 3 = %d\n", pre, post);

	return 0;
}