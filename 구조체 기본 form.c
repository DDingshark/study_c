#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>//���ڿ� �Է½� strcpy�� ����
typedef struct _Person // ���ʻ� ����ü �̸� �տ� _����
// typedef struct {}Person; ���� ����ü�̸����� �͸� ����ü�� ��밡�� 
{
	char name[20];
	int age;
	char address[100];
}Person; // ����ü ��Ī ���� 
int main()
{
	Person p1;
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����ÿ�걸");

	printf("�̸�: %s\n", p1.name);       // �̸�: ȫ�浿
	printf("����: %d\n", p1.age);        // ����: 30
	printf("�ּ�: %s\n", p1.address);    // �ּ�: ����� ��걸


	return 0;
}