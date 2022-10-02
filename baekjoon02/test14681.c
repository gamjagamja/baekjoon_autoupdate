#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// 위 헤더의 순서가 바뀌면 에러가 발생한다
// scanf에 대한 에러 처리를 먼저 해 주어야 함

int main()
{
	int x = 0, y = 0;

	scanf("%d \n %d", &x, &y);
	// 한 줄 띄우고 변수의 값을 받아들일 때 위와 같이 작성한다
	// 아래와 같이 작성하면 왜인지는 모르겠으나 에러가 발생함
	// scanf("%d \n", &x);
	// scanf("%d \n", &y);

	if (0 < x && 0 < y)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else if (0 < x && y < 0)
		printf("4");



	return 0;
}
