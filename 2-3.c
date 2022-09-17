#include <stdio.h>

int main(void) {
	// \n : 줄바꿈 실행
	printf("Be happy\n");
	printf("12345678901234567890\n");
	printf("My\tfriend\n");
	// \t : 탭 위치로 이동
	// \b : 앞뒤에 있는 문자를 서로 변경
	printf("Goot\bd\tchance\n");
	// \r : 뒤의 문자를 맨 앞으로 이동
	// \a : 경고음(alert)을 냄
	printf("Cow\rW\a\n");

	return 0;
}