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

	printf("���� : %d\n", hyuni.pf.age);
	printf("Ű : %.1lf\n", hyuni.pf.height);
	printf("�й� : %d\n", hyuni.id);
	printf("���� : %.1lf\n", hyuni.grade);

	return 0;
}