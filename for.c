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
	//++a, a++ �� ����-> ���ϰ� a , �����ϰ� a�� ���ض�

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


	//�ݺ��� for while do while
	//for (���� ; ���� ; ����){}
	for (int n = 1; n <= 10; n++)
	{
		printf("HelloWorld %d\n", n);
	}

	//while(����){}
	i = 1;
	while (i <= 10)
	{
		printf("Hello World %d\n", i);
		i++;//Ȥ�� ������ i++
	}

	//do while


	//do{} while(����);

	i = 1;
	do {
		printf("Hello World %d\n", i);
		i++;
	} while (i <= 10);


	for (i = 1; i <= 3; i++)
	{
		printf("ù��° �ݺ��� : %d\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("		�ι�° �ݺ��� : %d\n", j);
		}
	}

	//������

	for (i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i, j, i * j);
		}
	}

	//�Ųٷ� ��
	int k;
	printf("���� �������� �Է��Ͻÿ� : ");
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