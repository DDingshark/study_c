#include <stdio.h>
int main(void)
{	
	//++ 
	int a = 10;
	printf("%d\n", a);
	a++;
	printf("%d\n", a);
	printf("%d\n", ++a);
	printf("%d\n", a++);
	printf("%d\n", a);
	//++a, a++ 의 차이-> 더하고 a , 수행하고 a를 더해라

	int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);


	//반복문 for while do while
	//for (선언 ; 조건 ; 증감){}
	for (int n = 1; n <= 10; n++)
	{
		printf("HelloWorld %d\n", n);
	}

	//while(조건){}
	i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i);
		i++;//혹은 위에서 i++
	}

	//do while


	//do{} while(조건);

	i = 1;
	do {
		printf("Hello World %d\n", i);
		i++;
	} while (i <= 10);


	for (i = 1; i <= 3; i++)
	{
		printf("첫번째 반복문 : %d\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("		두번째 반복문 : %d\n", j);
		}
	}

	//구구단

	for (i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	//거꾸로 별
	int k;
	printf("별의 시작점을 입력하시오 : ");
	scanf_s("%d", &k);

	for (int j = k; j >= 1; j--)
	{
		for (int m=1;m <= j;m++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int j = 1; j <= k; j++)
	{
		for (int m = 1; m <= k - j; m++)
		{
			printf(" ");
		}
		for (int m = 1; m <= j; m++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
