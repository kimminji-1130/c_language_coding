//디버거 사용하기
// 중단점은 브레이크 포인트라고도 부르는데 소스 코드의 특정 지점에서 프로그램의 실행을 멈추는데 사용한다.
#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;
    int num3 = 30;

    printf("%d\n", num1);    // 10
    printf("%d\n", num2);    // 20
    printf("%d\n", num3);    // 30

    return 0;
}

//문자 변수 선언하기
#include <stdio.h>
 
int main()
{
    char c1 = 'a';    // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';    // 문자 변수를 선언하고 문자 b를 저장
 
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);    // a, 97: a의 ASCII 코드값은 97
    printf("%c, %d\n", c2, c2);    // b, 98: b의 ASCII 코드값은 98
 
    return 0;
}
--a, 97
--b, 98
