#include <stdio.h>

int main() {
	float ft = 1.234567890123456789; // float�� ���� : 1~7�ڸ� �̳�
	double db = 1.234567890123456789; // double�� ���� : 1~15�ڸ� �̳�
	// ��ȿ ���ڰ� ���� double���� �⺻���� ���

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);

	return 0;
}