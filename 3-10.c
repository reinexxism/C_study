#include <stdio.h>

int main() {
	int age; // ���� ������ ���� �ڷ����� ����
	double height; // Ű ������ �Ǽ� �ڷ����� ����

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height); // ���̿� Ű�� ���ÿ� �Է�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}