#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(NULL));
	int i = rand() % 3;

	if (i == 0)
	{
		printf("가위\n");
	}

	else if (i == 1)
	{
		printf("바위\n");
	}

	else if (i == 2)
	{
		printf("보\n");
	}

	else
	{
		printf("ㅁ?ㄹ\n");
	}

	// switch (값)  선택된 (조건이맞는)값 이후를 모두 수행하기때문에 break필수

	switch (i)
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("ㅁ?ㄹ\n"); break;
	}


	return 1;
}
