#include <stdio.h>

int main() {
	int a = 10, b = 15, total;
	double avg;
	int* pa, * pb; // ������ ���� ���� ����
	int* pt = &total; // int�� ������ ����� ���ÿ� �ʱ�ȭ
	double* pg = &avg; // double�� ������ ����� ���ÿ� �ʱ�ȭ

	pa = &a; // ������ pa�� ���� a�� �ּ� ����
	pb = &b; // ������ pb�� ���� b�� �ּ� ����

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ �� : %d, %d\n", *pa, *pb);
	printf("�� ������ �� : %d\n", *pt);
	printf("�� ������ ��� : %.1lf\n", *pg);

	return 0;


}