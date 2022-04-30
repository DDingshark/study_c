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
	// 운영체제가 64비트라 포인트도 64비트 = 8바이트가 되었다는 말이다.
	printf("sizeof(*p) = %d.\n", sizeof(*p));


	//포인터의 주소의 변경, 포인터가 가르키는 주소의 값변경
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
	// 포인터와 참조호출
	//함수 선언시 c언어는 값호출이기에 원본변형x 
	//포인터로 주소를 가져와서바꾸면 원본 변형 가능!!

	num = 500;
	printf("Before call_by_value, num is %d\n", num);
	call_by_value(num);
	printf("After call_by_value, num id %d\n", num);

	num = 500;
	printf("Before call_by_reference, num is %d.\n",num);
	//진짜 어림도없던 일이 가능해졌다.
	call_by_reference(&num);
	printf("After_call_by_reference num is %d.\n",num);

	//배열 + 포인터


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