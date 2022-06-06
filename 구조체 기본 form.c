#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>//문자열 입력시 strcpy로 지정
typedef struct _Person // 관례상 구조체 이름 앞엔 _붙임
// typedef struct {}Person; 으로 구조체이름없이 익명 구조체도 사용가능 
{
	char name[20];
	int age;
	char address[100];
}Person; // 구조체 별칭 지정 
int main()
{
	Person p1;
	strcpy(p1.name, "홍길동");
	p1.age = 30;
	strcpy(p1.address, "서울시용산구");

	printf("이름: %s\n", p1.name);       // 이름: 홍길동
	printf("나이: %d\n", p1.age);        // 나이: 30
	printf("주소: %s\n", p1.address);    // 주소: 서울시 용산구


	return 0;
}