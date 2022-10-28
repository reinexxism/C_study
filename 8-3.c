#include <stdio.h>

int main() {
	int score[5];
	int total = 0;
	double avg;
	int count; // 배열 요소의 갯수를 저장할 변수

	count = sizeof(score) / sizeof(score[0]); // 배열 요소의 개수 계산

	for (int i = 0; i < count; i++)
	{
		scanf("%d", &score[i]);
	}

	for (int i = 0; i < count; i++)
	{
		total += score[i];
	}
	avg = total / (double)count; // 총합을 count로 나누어 평균을 계산

	for (int i = 0; i < count; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}