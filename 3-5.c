#include <stdio.h>

int main() {
	float ft = 1.234567890123456789; // float형 범위 : 1~7자리 이내
	double db = 1.234567890123456789; // double형 범위 : 1~15자리 이내
	// 유효 숫자가 많은 double형을 기본으로 사용

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);

	return 0;
}