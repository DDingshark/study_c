#include <stdio.h>
int main_printfscanf(void)
{
	//�Ǽ��� ����
	
	float f = 46.5f;
	printf("%.2f\n", f);//%.2f �Ҽ��� 2���� ���
	double d = 42.428;
	printf("%.2lf\n", d);

	const int year = 2000; //const -> year �� ����� ���� -> ���� �Ұ���!
	printf("�¾ ���� : %d\n", year);

	// year = 2001; year �� ����̱� ������ ����


	//printf
	//����

	int add = 3 + 7;

	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 10, 3+10); //,�� ������ �ϳ��� ����ؼ� 
	printf("%d X %d = %d\n", 3, 10, 3 * 10);

	//scanf
	//Ű���� �Է��� �޾Ƽ� ���� 

	int input;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d", &input);//&�� input �� ���� �Է¹ްڴٴ� �ǹ�

	printf("%d\n", input);

	int one, two, three;
	printf("3���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("%d %d %d\n", one, two, three);

	// ����(�ѱ���) ,���ڿ�(�ѱ��� �̻��� ��������)
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str)); //���ڿ��� &���� ���Ŀ� ũ�����Ѹ�

	printf("%s\n", str);





	return 0;
}