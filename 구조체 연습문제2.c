#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS 
typedef struct _Person
{
	char name[30];
	int age;
	double height;

}Person;
int main()
{
	Person person_1;
	printf("Enter information \n");
	printf("Enter your name : ");
	scanf_s("%s", person_1.name, sizeof(person_1.name));
	printf("Enter your age");
	scanf_s("%d", &person_1.age);
	printf("Enter your height");
	scanf_s("%lf", &person_1.height);

	printf("Displaying Information :\n");
	printf("Name : %s\n", person_1.name);
	printf("Age = %d\n", person_1.age);
	printf("Hight = %.1f\n", person_1.height);
	


	return 0;
}