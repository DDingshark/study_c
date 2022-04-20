//201801667 ¼Û¸íÁÖ
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	//rand()%¹üÀ§
	srand(time(NULL));//³­¼öÃÊ±âÈ­
	for (int i = 1; i <= 5; i++)
	{
		printf("%d\n", (rand() % 6) + 1);
	}



	return 0;
}
