#include <stdio.h>
// ����

void p(int num);
int r(num); //��ȯ�� �Լ�
void function_without_return();// ��ȯ���� ���� �Լ�
int function_with_return();// ��ȯ���� �ִ� �Լ�
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

//����
void p(int num) //void �̸� (���ް�)
{
	printf("num�� %d �Դϴ�\n", num);
}

//��ȯ�� �Լ��̸� (���ް�) ex input x -> output y

int r(int num) //��ȯ�ϴ� ���� ���ļ� double, char ....) int r(num1,num2...)�� ����
{
	return num+=4;
}
/*
num->num + 4 x
r(num) -> num+4 ��� ���ο� ���� ź��!= num+=4 
*/

 //��ȯ���� �����Լ� 
void function_without_return()
{
	printf("��ȯ��(return)�̾��� �Լ��Դϴ�.\n");
}

//��ȯ���� �ִ��Լ�
int function_with_return()
{
	printf("��ȯ��(return)���ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params()
{
	printf("���ް��� ���� �Լ� �Դϴ�.");
}
//�Ķ���� (���ް�)�� ���� �Լ�

void function_with_params(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��̸� ���޹��� ���� %d, %d, %d ",num1,num2,num3);
}



