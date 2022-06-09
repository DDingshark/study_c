#include <stdio.h>

int main()
{
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011

    printf("%d\n", num1 & num2);    // 0000 0001: 01�� 11�� ��Ʈ AND�ϸ� 01�� ��
    printf("%d\n", num1 | num2);    // 0000 0011: 01�� 11�� ��Ʈ OR�ϸ� 11�� ��
    printf("%d\n", num1 ^ num2);    // 0000 0010: 01�� 11�� ��Ʈ XOR�ϸ� 10�� ��

    unsigned char num3 = 162;    // 162: 1010 0010
    unsigned char num4;

    num4 = ~num3;

    printf("%u\n", num2);    // 93: 0101 1101: num1�� ��Ʈ ���� ������


    unsigned char num5 = 3;     //  3: 0000 0011
    unsigned char num6 = 24;    // 24: 0001 1000

    printf("%u\n", num5 << 3);  // 24: 0001 1000: num1�� ��Ʈ ���� �������� 3�� �̵�
    printf("%u\n", num6 >> 2);  //  6: 0000 0110: num2�� ��Ʈ ���� ���������� 2�� �̵�

    return 0;
}