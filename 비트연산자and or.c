#include <stdio.h>

int main()
{
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011

    printf("%d\n", num1 & num2);    // 0000 0001: 01과 11을 비트 AND하면 01이 됨
    printf("%d\n", num1 | num2);    // 0000 0011: 01과 11을 비트 OR하면 11이 됨
    printf("%d\n", num1 ^ num2);    // 0000 0010: 01과 11을 비트 XOR하면 10이 됨

    unsigned char num3 = 162;    // 162: 1010 0010
    unsigned char num4;

    num4 = ~num3;

    printf("%u\n", num2);    // 93: 0101 1101: num1의 비트 값을 뒤집음


    unsigned char num5 = 3;     //  3: 0000 0011
    unsigned char num6 = 24;    // 24: 0001 1000

    printf("%u\n", num5 << 3);  // 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
    printf("%u\n", num6 >> 2);  //  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동

    return 0;
}