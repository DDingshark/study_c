#include <stdio.h>
int main(void)
{
	//������ ź�ٰ� ���� ���Ʊ� Ȥ�� ���� /�л� /�Ϲ��� 

	/*int age;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);*/

	int age = 1;

	//if (����) {}

	if (age <= 10 || age >= 60)
		//shift \ = |
	{
		printf("����� Ȥ�� ���� �Դϴ�\n");
	}

	else if (10 < age >= 20)
		//(else if (age>=8 && age<=13)
	{
		printf("�л� �Դϴ�\n");
	}

	else
	{
		printf("�Ϲ� ���� �Դϴ�\n");


	}

	// continue break
	// 1�� ���� 30������ �ִ� �ݿ��� 1������ 5������ ������ǥ�� �մϴ�.



	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ����������\n");
			break;
			// for�� Ż��
		}
		printf("%d �� �л��� ��ǥ�� �غ��ϼ��� \n", i);
	}

	//7���� �����ϰ� 6������ 10������ ��ǥ

	for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
				continue;
			}
			printf("%d ���л��� ������ǥ �غ� �ϼ��� \n", i);
		}
	}	//and or && ||
	int a = 10;
	int b = 10;
	int c = 13;
	int d = 14;
	if (a == b && c == d)
	{
		printf("a �� b �� ���� c �� d�� �����ϴ�.");
	}

	else if (a == b || c == d)
	{
		printf("���� �������� �ֽ��ϴ�.");
	}
	else
	{
		printf("���� ���� �ٸ���");
	}

	return 0;
}