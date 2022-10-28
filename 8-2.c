#include <stdio.h>

int main() {
	int score[5]; // 다섯 과목의 성적을 입력할 int형 배열 선언
	int total = 0; // 총점을 누적할 변수 (0으로 초기화)
	double avg; // 평균을 저장할 변수

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]); // 각 배열 요소에 성적 입력
	}

	for (int i = 0; i < 5; i++)
	{
		total += score[i]; // 성적을 누적하여 총점 계산
	}
	avg = total / 5.0; // 평균 계산

	for (int i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}