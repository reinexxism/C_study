#include <stdio.h>
#include <stdlib.h>

int main() {
	// ���� �Ҵ� ������ ������ ������ ����
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int)); // �޸� ���� �Ҵ� �� ������ ����
	if (pi == NULL) // ���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
	{
		printf("# �޸𸮰� �����մϴ�.\n"); // ���� ��Ȳ �޽��� ���
		exit(1); // ���α׷� ����
	}
	pd = (double*)malloc(sizeof(double));

	// �����ͷ� ���� �Ҵ� ���� ���
	*pi = 10;
 	*pd = 3.4;

	// ���� �Ҵ� ������ ����� �� ���
	printf("���������� ��� : %d\n", *pi);
	printf("�Ǽ������� ��� : %.1lf\n", *pd);

	// ���� �Ҵ� ���� ��ȯ
	free(pi);
	free(pd);

	return 0;

}