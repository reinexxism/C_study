#include <stdio.h>

int main() {
	int a = 20, b = 10;

	if (a > 10) //  ù��° ����
	{
		if (b >= 0) // �ι�° ����(ù��° ������ ������ ��쿡�� ����)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	printf("a : %d, b : %d\n", a, b);

	return 0;
}