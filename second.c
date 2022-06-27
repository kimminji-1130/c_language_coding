//문자 자료형에 같은 숫자를 저장한다 하더라도 문자 '0'과 숫자 0은 전혀 다르므로 주의합니다.
#include <stdio.h>

int main()
{
    char c1 = '0';    // 문자 0을 저장
    char c2 = 0;      // 숫자 0을 저장

    printf("%c %d\n", c1, c1);    // 0 48: 문자 상태로 0이 출력됨
                                  // 문자 0의 ASCII 코드 48이 출력됨

    printf("%c %d\n", c2, c2);    // 0: ASCII 코드 0은 널문자이므로 아무것도 출력되지 않음
                                  // 정수 0이 출력됨

    return 0;
}
--0 48
--  0
/*char 변수에 작은따옴표로 감싼 숫자 '0'을 저장하면 숫자라 하더라도 문자 상태로 출력됩니다. 따라서 printf에서 %c로 출력하면 0이 출력됩니다. 그리고 %d로 출력해보면 문자 '0'의 ASCII 코드값인 48이 나옵니다.

여기서 char 변수에 숫자 0을 그대로 넣었을 때는 %c로 출력해도 아무것도 출력되지 않습니다. 왜냐하면 ASCII 코드 0은 널 문자(NULL)를 뜻하며 아무 것도 들어있지 않은 상태이기 때문입니다.

즉, printf에서 %d로 출력했을 때 '0'은 48, 0은 0으로 출력되므로 전혀 다른 값이라는 것을 알 수 있습니다.*/
  
//제어 문자의 아스키 코드
// \n: 줄바꿈,  \r: 줄의 끝에서 시작 위치로 되돌아감  \t: 탭

//자료형의 확장과 축소 알아보기
//서로 다른 자료형으로 연산을 할 때가 많다.
#include <stdio.h>
 
int main()
{
    long long num1 = 123456789000;
    int num2 = 10;
 
    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num1 + num2);    // 123456789010
    printf("%lld\n", num1 - num2);    // 123456788990
    printf("%lld\n", num1 * num2);    // 1234567890000
    printf("%lld\n", num1 / num2);    // 12345678900
 
    return 0;
}
//long long 형 int 형 num2를 함께 연산하면 longlong으로 변환된다.
