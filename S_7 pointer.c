#include <stdio.h>
void call_by_value(int p);
void call_by_reference(int* p);
int main(void)
{
	int num, *p;

	p = &num;
	*p = 5;
	 
	printf("&num = %p, num = %d.\n", &num, num);
	printf("p = %p, *p = %d, &p = %p\n", p, *p, &p);


	printf("sizeof(p) = %d\n", sizeof(p));
	// �ü���� 64��Ʈ�� ����Ʈ�� 64��Ʈ = 8����Ʈ�� �Ǿ��ٴ� ���̴�.
	printf("sizeof(*p) = %d.\n", sizeof(*p));


	//�������� �ּ��� ����, �����Ͱ� ����Ű�� �ּ��� ������
	int first = 50, second = 200, * t;

	printf("&first = %p.\n", &first);
	printf("&t is %p.\n", &t);

	t = &first;
	printf("t is %p.\n", t);
	printf("*t is %d.\n", *t);

	*t += 50;
	printf("*t changed to %d\n", *t);

	t = &second;
	printf("*t changed to %d\n", *t);
	// �����Ϳ� ����ȣ��
	//�Լ� ����� c���� ��ȣ���̱⿡ ��������x 
	//�����ͷ� �ּҸ� �����ͼ��ٲٸ� ���� ���� ����!!

	num = 500;
	printf("Before call_by_value, num is %d\n", num);
	call_by_value(num);
	printf("After call_by_value, num id %d\n", num);

	num = 500;
	printf("Before call_by_reference, num is %d.\n",num);
	//��¥ ������� ���� ����������.
	call_by_reference(&num);
	printf("After_call_by_reference num is %d.\n",num);

	//�迭 + ������


	return 0;
}

void call_by_value(int p)
{
	p += 1;
}
void call_by_reference(int* p)
{
	*p += 1;
}