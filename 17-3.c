#include <stdio.h>

struct profile {
	int age;
	double height;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main() {
	struct student hyuni;

	hyuni.pf.age = 22;
	hyuni.pf.height = 159.7;
	hyuni.id = 202;
	hyuni.grade = 4.5;

	printf("나이 : %d\n", hyuni.pf.age);
	printf("키 : %.1lf\n", hyuni.pf.height);
	printf("학번 : %d\n", hyuni.id);
	printf("학점 : %.1lf\n", hyuni.grade);

	return 0;
}