#include <stdio.h>

int main() {
	int income = 0; // �ҵ�� �ʱ�ȭ
	double tax; // ����
	const double tax_rate = 0.12; // ���� �ʱ�ȭ(const ��� : ���� ������ ���� �Ұ���)
	// const�� �ݵ�� ����� ���ÿ� �ʱ�ȭ�ؾ���

	income = 456;
	tax = income * tax_rate;
	printf("���� : %.1lf�Դϴ�.\n", tax); // ������ tax_rate�� ����Ͽ� ���� ���

	return 0;
}