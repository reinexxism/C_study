#include <stdio.h>
#include<stdlib.h>
#include <string.h>

struct profile {
	char name[20];
	int age;
	double height;
	char* intro;
};

int main() {
	struct profile hyuni;

	strcpy(hyuni.name, "������");
	hyuni.age = 22;
	hyuni.height = 159.7;

	hyuni.intro = (char*)malloc(80);
	printf("������ �ڱ�Ұ� : ");
	gets(hyuni.intro);

	printf("�̸� : %s\n", hyuni.name);
	printf("���� : %d\n", hyuni.age);
	printf("Ű : %.1lf\n", hyuni.height);
	printf("�ڱ�Ұ� : %s\n", hyuni.intro);
	free(hyuni.intro);

	return 0;
}