#include <stdio.h>

int main() {
	int income = 0; // 소득액 초기화
	double tax; // 세금
	const double tax_rate = 0.12; // 세율 초기화(const 사용 : 이후 변수값 수정 불가능)
	// const는 반드시 선언과 동시에 초기화해야함

	income = 456;
	tax = income * tax_rate;
	printf("세금 : %.1lf입니다.\n", tax); // 고정된 tax_rate를 사용하여 세금 계산

	return 0;
}