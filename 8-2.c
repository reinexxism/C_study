#include <stdio.h>

int main() {
	int score[5]; // �ټ� ������ ������ �Է��� int�� �迭 ����
	int total = 0; // ������ ������ ���� (0���� �ʱ�ȭ)
	double avg; // ����� ������ ����

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]); // �� �迭 ��ҿ� ���� �Է�
	}

	for (int i = 0; i < 5; i++)
	{
		total += score[i]; // ������ �����Ͽ� ���� ���
	}
	avg = total / 5.0; // ��� ���

	for (int i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}