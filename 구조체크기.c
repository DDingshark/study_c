#include <stdio.h>
#include <stddef.h>   // offsetof 매크로가 정의된 헤더 파일
struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main()
{
    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));           // 1: char는 1바이트
    printf("%d\n", sizeof(header.seq));             // 4: int는 4바이트
    printf("%d\n", sizeof(header));                 // 8: 구조체 전체 크기는 8바이트
    printf("%d\n", sizeof(struct PacketHeader));    // 8: 구조체 이름으로 크기 구하기


    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 4
    //위치를 구할때 사용
    //4가 나오는 이유는 char 4바이트임으로 4위치로저장
    return 0;
}
//c에서 구조체를 정렬할때는 가장큰 자료형의 크기의 배수로 정렬
//int가 가장큼으로, int기준으로 정렬 -> char도 4바이트로 생각한다.
//남는 3바이트의 크기를 패딩이라 합니당.
