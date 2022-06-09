#include <stdio.h>
//enumeration
enum DayOfWeek {    // 열거형 정의
//typedef enum _DayofWeek
    Sunday = 0,         // 초깃값 할당
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};//};DayOfWeek 도가능!
//따로 설정안해주면 아래로 내려가면서 +1해줍니당
//보통 대문자로만 내부 엘리먼트 설정 SUNDAY같이
int main()
{
    enum DayOfWeek week;    // 열거형 변수 선언

    week = Tuesday;    // 열거형 값 할당

    printf("%d\n", week);   // 2: Tuesday의 값 출력

    return 0;
}