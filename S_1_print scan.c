#include <stdio.h>
int main_printfscanf(void)
{
	//실수형 변수
	
	float f = 46.5f;
	printf("%.2f\n", f);//%.2f 소숫점 2까지 출력
	double d = 42.428;
	printf("%.2lf\n", d);

	const int year = 2000; //const -> year 를 상수로 고정 -> 변경 불가능!
	printf("태어난 연도 : %d\n", year);

	// year = 2001; year 이 상수이기 때문에 오류


	//printf
	//연산

	int add = 3 + 7;

	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 10, 3+10); //,를 단위로 하나씩 계산해서 
	printf("%d X %d = %d\n", 3, 10, 3 * 10);

	//scanf
	//키보드 입력을 받아서 저장 

	int input;
	printf("값을 입력하시오 : ");
	scanf_s("%d", &input);//&는 input 에 값을 입력받겠다는 의미

	printf("%d\n", input);

	int one, two, three;
	printf("3개의 정수를 입력하시오 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("%d %d %d\n", one, two, three);

	// 문자(한글자) ,문자열(한글자 이상의 여러글자)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str)); //문자열은 &없이 이후에 크기제한만

	printf("%s\n", str);





	return 0;
}
