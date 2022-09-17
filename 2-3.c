#include <stdio.h>

int main(void) {
	// \n(new line) : 다음 줄로 이동
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	// \t(tab) : 탭 위치로 이동
	// \b(backspace) : 한 칸 왼쪽으로 이동
	printf("Goot\bd\tchance\n");
	// \r(carriage return) : 맨 앞으로 이동
	// \a(alert) : 벨소리 출력
	printf("Cow\rW\a\n");

	return 0;
}