#include <stdio.h>

int main() {
	int a = 10, b = 20;
	const int* pa = &a; // ������ pa�� ���� a�� ����Ų��.

	printf("���� a�� �� : %d\n", *pa);
	pa = &b;
	printf("���� b�� �� : %d\n", *pa);
	
	pa = &a;
	a = 20;

	printf("���� a�� �� : %d\n", *pa);

	return 0;
}