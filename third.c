//코드업
//1024 단어 한개 입력받아 나누어 출력하기
#include<stdio.h>

int main(){
    char a[20];
    scanf("%s", &a);
    for(int i;a[i]!='\0';i++){
        printf("\'%c\'\n", a[i]);
    }
    return 0;
}

//1027 년월일 입력받아 형식 바꿔 출력하기
#include<stdio.h>

int main(){
    int y, m, d;
    scanf("%d.%d.%d", &y, &m, &d);
    printf("%02d-%02d-%04d", d, m, y);
return 0;
}

//1028 정수 1개 입력받아 그대로 출력하기2
//unsigned int 데이터형을 사용하면 0~4294967295 범위의 정수를 저장할 수 있다.
#include<stdio.h>

int main(){
unsigned int n;
scanf("%u",&n);
printf("%u",n);
return 0;
}

//정수 입력받아 아스키 문자로 출력하기
#include<stdio.h>

int main(){
int a;
	scanf("%d", &a);
	printf("%c", a);
return 0;
}

//1039 정수 2개 입력받아 합 출력하기2
#include <stdio.h>

int main() {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", a+b);
}

//1040 정수 1개 입력받아 부호 바꿔 출력하기
#include<stdio.h>

int main() {
 int a;
  scanf("%d", &a);
  printf("%d", -a);
}

//1041 문자 1개 입력받아 다음 문자 출력하기
#include<stdio.h>

int main(){
  char a;
  scanf("%c", &a);
  printf("%c", a+1);
}

//1042 정수 2개 입력받아 나눈 몫 출력하기
#include<stdio.h>

int main(){
  int a;
  int b;
  scanf("%d %d", &a, &b);
  printf("%.f", (float)(a/b));
}

//1043 정수 2개 입력받아 나눈 나머지 출력하기
#include<stdio.h>

int main(){
 int a;
  int b;
  scanf("%d %d", &a, &b);
  printf("%.f", (float)(a%b));
}
