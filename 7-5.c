#include <stdio.h>

// ���ȣ�� �Լ�(Recursive call funcion)
// �ڱ� �ڽ��� ȣ���ϴ� �Լ�

void fruit(void);

int main(void) {

	fruit();

	return 0;
}

void fruit(void) {

	printf("apple\n");
	fruit(); // �ڽ��� �ٽ� ȣ��
}