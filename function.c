#include <stdio.h>
// 선언

void p(int num);
int r(num); //반환형 함수
void function_without_return();// 반환값이 없는 함수
int function_with_return();// 반환값이 있는 함수
void function_without_params();
void function_with_params(int num1, int num2, int num3);



int main()
{
	
	int num = 2;
	p(num);

	num = num + 2;
	p(num);

	num += 2;
	r(num);
	p(num);

	function_without_return();
	int ret = function_with_return();
	p(ret);

	function_without_params();
	function_with_params(11, 12, 13);


	return 0;
}

//정의
void p(int num) //void 이름 (전달값)
{
	printf("num은 %d 입니다\n", num);
}

//반환형 함수이름 (전달값) ex input x -> output y

int r(int num) //반환하는 값에 맞쳐서 double, char ....) int r(num1,num2...)도 가능
{
	return num+=4;
}
/*
num->num + 4 x
r(num) -> num+4 라는 새로운 수의 탄생!= num+=4 
*/

 //반환값이 없는함수 
void function_without_return()
{
	printf("반환값(return)이없는 함수입니다.\n");
}

//반환값이 있는함수
int function_with_return()
{
	printf("반환값(return)이있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수 입니다.");
}
//파라미터 (전달값)이 없는 함수

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며 전달받은 값은 %d, %d, %d ",num1,num2,num3);
}



