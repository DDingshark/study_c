//201801667 �۸���
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	//rand()%����
	srand(time(NULL));//�����ʱ�ȭ
	for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", (rand() % 6) + 1);
	}



	return 0;
}