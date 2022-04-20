#include <stdio.h>
int main(void)
{
	//버스를 탄다고 가정 유아기 혹은 노인 /학생 /일반인 

	/*int age;
	printf("나이를 입력하시오 : ");
	scanf_s("%d", &age);*/

	int age = 1;

	//if (조건) {}

	if (age <= 10 || age >= 60)
		//shift \ = |
	{
		printf("유년생 혹은 노인 입니다\n");
	}

	else if (10 < age >= 20)
		//(else if (age>=8 && age<=13)
	{
		printf("학생 입니다\n");
	}

	else
	{
		printf("일반 성인 입니다\n");


	}

	// continue break
	// 1번 부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.



	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에가세요\n");
			break;
			// for문 탈출
		}
		printf("%d 번 학생은 발표를 준비하세요 \n", i);
	}

	//7번은 제외하고 6번부터 10번까지 발표

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d 번 학생은 결석입니다.\n", i);
				continue;
			}
			printf("%d 번학생은 조별발표 준비를 하세요 \n", i);
		}
	}	//and or && ||
	int a = 10;
	int b = 10;
	int c = 13;
	int d = 14;
	if (a == b && c == d)
	{
		printf("a 와 b 는 같고 c 와 d도 같습니다.");
	}

	else if (a == b || c == d)
	{
		printf("값이 같은것이 있습니다.");
	}
	else
	{
		printf("값이 서로 다르다");
	}

	return 0;
}