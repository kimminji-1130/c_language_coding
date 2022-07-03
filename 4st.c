//1063.두 정수 입력받아 큰 수 출력하기
#include <stdio.h>

int main() {
	int i, j;
	scanf("%d %d", &i, &j);
	i > j ? printf("%d", i) : printf("%d", j);
}

//1064.정수 3개를 입력받아 가장 작은 수 3개를 출력하기
#include <stdio.h>

int main() {
	int i, j, k;
	scanf("%d %d %d", &i, &j, &k);
	printf("%d",(i>j ? j : i) > k ? k : (i>j ? j : i));
}

//1080.계속 더하는 함수
#include <stdio.h>

int main() {
	int input, result=0;
	scanf("%d", &input);
	for(int i=1; i<=input; i++) {
		result += i;
		if(result >= input) {
			printf("%d", i);
			break;
		}
	}
}
