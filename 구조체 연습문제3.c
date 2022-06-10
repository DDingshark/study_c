#include<stdio.h>
#include<stdlib.h>
struct Subject
{
	char sub[100];
	int grade;
};
int main()
{
	int n;
	scanf_s("%d", &n);
	struct Subject* p1= malloc(n * sizeof(struct Subject));
	for (int i = 0; i < n; i++)
	{
		struct Subject* p2 = p1 + i;
		scanf_s("%s", p2->sub, sizeof(p2->sub));
		scanf_s("%d", &(p2)->grade);
	}
	for (int i = 0; i < n; i++)
	{
		p1 = p1 + i;
		printf("%s", p1->sub);
		printf("%d\n", p1->grade);

	}

	return 0;
}