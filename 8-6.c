#include <stdio.h>

int main() {
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str); // ��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : ");
	puts(str); // �迭�� ����� ���ڿ� ���

	return 0;
}