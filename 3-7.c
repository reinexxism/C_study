#include <stdio.h>
#include <string.h> // ���ڿ��� �ٷ� �� �ִ� string.h ��� ������ ����

int main() {
	char fruit[20] = "strawberry"; // fruit �迭�� "strawberry"�� �ʱ�ȭ

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); // fruit �迭�� "banana" ����
	printf("%s\n", fruit);

	return 0;
}