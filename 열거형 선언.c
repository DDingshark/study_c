#include <stdio.h>
//enumeration
enum DayOfWeek {    // ������ ����
//typedef enum _DayofWeek
    Sunday = 0,         // �ʱ갪 �Ҵ�
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};//};DayOfWeek ������!
//���� ���������ָ� �Ʒ��� �������鼭 +1���ݴϴ�
//���� �빮�ڷθ� ���� ������Ʈ ���� SUNDAY����
int main()
{
    enum DayOfWeek week;    // ������ ���� ����

    week = Tuesday;    // ������ �� �Ҵ�

    printf("%d\n", week);   // 2: Tuesday�� �� ���

    return 0;
}