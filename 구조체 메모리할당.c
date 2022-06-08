#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
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
	strcpy(p1->name, "홍길동");
	p1->age = 30;
	strcpy(p1->address, "서울시 용산구 한남동");

	// 화살표 연산자로 구조체 멤버에 접근하여 값 출력
	printf("이름: %s\n", p1->name);       // 홍길동
	printf("나이: %d\n", p1->age);        // 30
	printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동


	free(p1);

	return 0;
}