#include <stdio.h>

int main() {
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb; // 포인터 동시 선언도 가능
	int* pt = &total; // int형 포인터 선언과 동시에 초기화
	double* pg = &avg; // double형 포인터 선언과 동시에 초기화

	pa = &a; // 포인터 pa에 변수 a의 주소 대입
	pb = &b; // 포인터 pb에 변수 b의 주소 대입

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;


}