#include<stdio.h>
void cyclic_swap(int* a, int* b, int* c);
int main()
{
	int a = 1, b = 2, c = 3;
	int* p = &a, * q = &b, * r = &c;
	printf("%Before cyclic swap, a = 1, b = 2, c = 3\n");
	cyclic_swap(p, q, r);
	printf("After cyclic swap a = %d, b= %d, c = %d", *p, *q, *r);




	return 0;
}
void cyclic_swap(int* a, int* b, int* c)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

// *a = a�� ��Ÿ���� ������ ��.
// a �� �ּ�, *a �� ��?