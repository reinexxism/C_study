#include <stdio.h>
#include <string.h> // 문자열을 다룰 수 있는 string.h 헤더 파일을 포함

int main() {
	char fruit[20] = "strawberry"; // fruit 배열을 "strawberry"로 초기화

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); // fruit 배열에 "banana" 복사
	printf("%s\n", fruit);

	return 0;
}