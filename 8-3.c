#include <stdio.h>

int main() {
	int score[5];
	int total = 0;
	double avg;
	int count; // �迭 ����� ������ ������ ����

	count = sizeof(score) / sizeof(score[0]); // �迭 ����� ���� ���

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count; // ������ count�� ������ ����� ���

	for (int i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}