#include <stdio.h>

int main() {
	int a = 11; 

	do
	{
		a = a * 2;
	} while (a < 10); // ���ǽ��� �������� �ʾƵ�(�����̾) �� �� ���� -> while������ ������
	printf("a : %d\n", a);

	return 0;
}