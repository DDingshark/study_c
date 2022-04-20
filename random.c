//201801667 송명주
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	//rand()%범위
	srand(time(NULL));//난수초기화
	for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", (rand() % 6) + 1);
	}



	return 0;
}