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

	strcpy(hyuni.name, "최주현");
	hyuni.age = 22;
	hyuni.height = 159.7;

	hyuni.intro = (char*)malloc(80);
	printf("간단한 자기소개 : ");
	gets(hyuni.intro);

	printf("이름 : %s\n", hyuni.name);
	printf("나이 : %d\n", hyuni.age);
	printf("키 : %.1lf\n", hyuni.height);
	printf("자기소개 : %s\n", hyuni.intro);
	free(hyuni.intro);

	return 0;
}