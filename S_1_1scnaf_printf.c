#include <stdio.h>
int main(void)
{
	double x;
	//printf ,scanf
	//1.floating_point
	long double x;
	scanf_s("%Lf", &x);
	printf("%Lf", x);

	double x;
	scanf_s("%lf", &x);
	printf("%f", x); // doubleÀº ÀÔ·ÂÇÒ¶© lf ¹ÞÀ»¶© ±×³É f
	float;
	scanf_s("%f", &x);
	printf("%f", x);

	//2. intergeer types
	unsigned long long int x;
	scanf_s("%llu", &x);
	printf("%llu", x);

	long long int x;
	scanf_s("%lld", &x);
	printf("%lld", x);

	unsigned long int x;
	scanf_s("%lu", &x);
	printf("%lu", x);

	long int x;
	scanf_s("%ld", &x);
	printf("%ld", x);

	unsigned int x;
	scanf_s("%u", &x);
	printf("%u", x);

	unsigned short x;
	scanf_s("%hu", &x);
	printf("%hu", x);

	short x;
	scnaf_s("%hd", &x);
	printf("%hd", x);

	char x;
	scanf_s("%c", &x);
	printf("%c", x);



	return 0;
}