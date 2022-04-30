#include<stdio.h>
void factorial(int n, int* p);

int main()
{
	int result = 1;
	int* sol = &result;
	int n;
	scanf_s("%d", &n);
	factorial(n, sol);
	printf("%d", *sol);
	return 0;
}

void factorial(int n ,int* p)
{
	int num;
	if (n == 1)
	{
		*p = 1;
	}
	else
	{
		factorial(n - 1, p);
		*p = n * (*p);
	}
}