#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Person
	//typedef struct _Person
{
	char name[20];
	int age;
	char address[100];
};//Person

int main()
{
	struct Person* p1 = malloc(sizeof(struct Person));
	//Person *p1 = malloc(sizeof(Person);
	strcpy(p1->name, "ȫ�浿");
	p1->age = 30;
	strcpy(p1->address, "����� ��걸 �ѳ���");

	// ȭ��ǥ �����ڷ� ����ü ����� �����Ͽ� �� ���
	printf("�̸�: %s\n", p1->name);       // ȫ�浿
	printf("����: %d\n", p1->age);        // 30
	printf("�ּ�: %s\n", p1->address);    // ����� ��걸 �ѳ���


	free(p1);

	return 0;
}