#include <stdio.h>

int main() {
	int a = 20, b = 10;

	if (a > 10) //  첫번째 조건
	{
		if (b >= 0) // 두번째 조건(첫번째 조건이 성립할 경우에만 실행)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}
	printf("a : %d, b : %d\n", a, b);

	return 0;
}