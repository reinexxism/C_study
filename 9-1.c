#include <stdio.h>

int main() {
	int a;
	double b;
	char c;

	printf("int�� ������ �ּ� : %u\n", &a); // �ּ� ������(&)�� �ּҸ� ���
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	return 0;
}