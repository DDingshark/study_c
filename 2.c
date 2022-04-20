#include <stdio.h>
#include <stdlib.h>

int re(a)
{
	int b;
	if (a == 1)
		return (1);
	else
		b = a * re(a - 1);
	return(b)
}


void main()
{
	int num;
	int sum_result = 0;
	printf("20보다 작은 양의 정수를 입력 하시오");
	scanf_s("%d", &num);
	for (int i = num; i >= 1; i--)
	{
		sum_result + re(i);
	}
}